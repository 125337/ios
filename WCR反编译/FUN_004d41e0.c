// FUN_004d41e0 @ 004d41e0

void FUN_004d41e0(undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_24 = param_2;
  if (local_20 == 0) {
    local_18 = 0;
    local_28 = 1;
  }
  else {
    local_30 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_copyWithZone__026a4168);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_copy_0269d150);
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_30 == 0) {
      _objc_storeStrong(&local_30,local_20);
    }
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_setSequence__026a4170);
    uVar1 = local_30;
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,local_24)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_sequence);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSequence__026a4170,local_24);
    }
    uVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_28 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

