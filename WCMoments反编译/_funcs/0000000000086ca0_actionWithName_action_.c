// actionWithName:action: @0x86ca0

/* Function Stack Size: 0x20 bytes */

ID WCMYBIBSheetAction::actionWithName_action_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_68;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = _objc_opt_new(&objc::class_t::WCMYBIBSheetAction);
  _objc_msgSend_setName_(local_38,local_68,local_28);
  _objc_msgSend_setAction_(local_38,local_68,local_30);
  uVar1 = (*(code *)PTR__objc_retain_00110460)(local_38);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}

