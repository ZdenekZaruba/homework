<?php
require 'RosterItem.php';
require 'Roster.php';

$list = new Roster();
$list->addItem(new RosterItem('First item'));
$list->addItem(new RosterItem('Second item'));
$list->addItem('Third item');

var_dump($list);