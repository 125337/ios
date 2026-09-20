// FUN_00eec4f4 @ 00eec4f4

void FUN_00eec4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  long local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if (((local_18 != 0) && (local_20 != 0)) && (local_28 != 0)) {
    pcVar1 = &cf_safeSetObject_forKey_;
    _NSSelectorFromString();
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setObject_forKey__026ca9e8);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_setObject_forKey__026ca9e8,local_20,local_28);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar1,local_20,local_28);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

