// FUN_000c3ecc @ 000c3ecc

void FUN_000c3ecc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  long local_30;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_28;
  FUN_000c2a24();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = 0;
  }
  else {
    pcVar2 = &cf_getContactByName_;
    _NSSelectorFromString();
    if (local_20 != 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar2);
      if ((uVar3 & 1) != 0) {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar2,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_18 = uVar3;
        goto LAB_000c4030;
      }
    }
    local_18 = 0;
  }
LAB_000c4030:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

