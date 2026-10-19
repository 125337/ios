// ___54-[WCMInboxController_tableView:cellForRowAtIndexPath:]_block_invoke @0xd684

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void ___54__WCMInboxController_tableView_cellForRowAtIndexPath___block_invoke(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSDateFormatter);
  uVar1 = _tableView_cellForRowAtIndexPath__formatter;
  _tableView_cellForRowAtIndexPath__formatter = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setDateFormat_(_tableView_cellForRowAtIndexPath__formatter,local_28,&cf_M);
  return;
}

