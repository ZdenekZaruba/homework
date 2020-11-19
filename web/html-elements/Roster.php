<?php

class Roster {

    private static $types = ['ol', 'ul'];
    private $type = 'ul';
    private $items = [];

    public function __construct($type = 'ul') {
        $this->setType($type);
    }

    public function setType($type) {
        if(is_string($type) && in_array($type, self::$types)) {
            $this->type = $type;
        }
    }

    public function getType() {
        return $this->type;
    }

    public function addItem($item){
        if($item instanceof RosterItem) {
            $this->items[] = $item;
        } else if (is_string($item)) {
            $this->items[] = new RosterItem($item);
        }
    }

    public function toHtm() {
        $html = '';
        foreach($this->items as $item) {
            $html = $html . $item->toHtml();
        }
        return '<' . $this->type . '>' . $html . '</' . $this->type. '>';
    }
}