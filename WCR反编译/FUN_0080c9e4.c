// FUN_0080c9e4 @ 0080c9e4

void FUN_0080c9e4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong *local_130;
  uint local_7c;
  ulong local_78;
  ulong local_70;
  undefined *local_68;
  ulong local_60;
  undefined4 local_58;
  byte local_51;
  ulong local_50;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_51 = 0;
  local_7c = 1;
  if ((DAT_028cd1b0 & 1) != 0) {
    local_7c = 1;
    if (local_30 != 0) {
      uVar3 = local_38;
      FUN_0081d260();
      local_7c = 1;
      if ((uVar3 & 1) != 0) {
        uVar3 = local_38;
        FUN_0081d34c();
        local_7c = 1;
        if ((uVar3 & 1) != 0) {
          uVar3 = local_30;
          _objc_getAssociatedObject(local_30,&DAT_028cd1b1);
          _objc_retainAutoreleasedReturnValue();
          local_51 = 1;
          local_50 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_7c = (uint)uVar3;
        }
      }
    }
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  uVar3 = local_30;
  if ((local_7c & 1) == 0) {
    uVar3 = local_38;
    FUN_0081d4f0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    uVar1 = local_38;
    local_60 = uVar3;
    FUN_0081daa8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_____p___);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar2;
    (*(code *)PTR__objc_release_02578630)();
    FUN_0081ddac();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar3 = local_70;
    if (local_70 == 0) {
      uVar3 = local_30;
      FUN_0080d088(local_30,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_78 = uVar3;
      if (uVar3 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar3,&DAT_028cd1b1,puVar2,1);
        (*(code *)PTR__objc_release_02578630)();
        FUN_0081ddac();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      if (local_78 == 0) {
        local_130 = &local_30;
      }
      else {
        local_130 = &local_78;
      }
      uVar3 = *local_130;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = 1;
      local_28 = uVar3;
      _objc_storeStrong(&local_78,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
      local_58 = 1;
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar3;
    local_58 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

