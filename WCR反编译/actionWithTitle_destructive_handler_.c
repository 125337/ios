// actionWithTitle:destructive:handler: @ 01e3e5a8

/* Function Stack Size: 0x24 bytes */

ID WCRTGTabsSheetAction::actionWithTitle_destructive_handler_
             (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,undefined4 param_6)

{
  ID IVar1;
  cfstringStruct *local_60;
  ID local_40;
  undefined8 local_38;
  byte local_29;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  IVar1 = local_18;
  _objc_alloc_init();
  if (local_28 == (cfstringStruct *)0x0) {
    local_60 = &::cf___;
  }
  else {
    local_60 = local_28;
  }
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setTitle__0269cef0,local_60);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDestructive__0269fd78,local_29 & 1);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setHandler__0269fb20,local_38);
  IVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

