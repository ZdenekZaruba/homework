<?php
require 'RosterItem.php';
require 'Roster.php';

$list = new Roster();
$list->addItem(new RosterItem('Audi'));
$list->addItem(new RosterItem('BMW'));

$x = new Roster('ol');
$x->addItem("sdfsdfsdfg");
$x->addItem("ghfghsdfg");

$list->addItem("Ford" . $x->toHtml());
$list->addItem('Škoda');

echo $list->toHtml();