// actionWithTitle:image:handler: @ 0034b480

/* Function Stack Size: 0x28 bytes */

ID WCRHomeAvatarStripMenuAction::actionWithTitle_image_handler_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  ID IVar1;
  cfstringStruct *local_70;
  cfstringStruct *local_60;
  ID local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
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
  if (local_30 == (cfstringStruct *)0x0) {
    local_70 = &::cf___;
  }
  else {
    local_70 = local_30;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setSystemImageName__026a22d8,local_70);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setHandler__0269fb20,local_38);
  IVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

