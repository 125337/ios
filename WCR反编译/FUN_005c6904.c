// FUN_005c6904 @ 005c6904

void FUN_005c6904(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  cfstringStruct *local_80;
  cfstringStruct *local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = (cfstringStruct *)0x0;
  local_24 = param_2;
  _objc_storeStrong(&local_30,param_3);
  if (local_20 == 0) {
    local_18 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setIsPrivate__026a5510,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setIsSyncToWeibo__026a54f8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setIsSyncToFacebook__026a5500,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setType__026a3cb8,local_24);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setWithUserList__026a5a68,0);
    if (local_30 == (cfstringStruct *)0x0) {
      local_80 = &cf___;
    }
    else {
      local_80 = local_30;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setContentDesc__026a4a08,local_80);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setPostSource__026a54f0,1);
    lVar1 = local_20;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

