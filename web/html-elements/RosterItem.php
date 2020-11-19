<?php
class RosterItem
{
    private $content;

    public function __construct($content = '') {
        $this->setContent($content);
    }

    public function setContent($content) {
        $this->content = strval($content);
    }

    public function getContent() {
        return $this->content;
    }

    public function toHtml() {
        return '<li>' . $this->getContent() . '</li>';
    }
}