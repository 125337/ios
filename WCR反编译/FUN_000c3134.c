// FUN_000c3134 @ 000c3134

void FUN_000c3134(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  int local_48;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar1 = local_30;
  FUN_000c3c38();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  if (uVar1 == 0) {
    local_28 = 0;
    local_48 = 1;
    goto LAB_000c3624;
  }
  uVar1 = local_30;
  FUN_000c2bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_000c2a24();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    uVar1 = local_38;
    FUN_000c4380(0);
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar1;
    FUN_000c419c();
    _objc_retainAutoreleasedReturnValue();
    local_80 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if ((uVar1 == 0) ||
       (uVar1 = local_80,
       (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_containsString__0269d0b0,&cf__chatroom),
       local_28 = local_78, (uVar1 & 1) != 0)) {
      local_28 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
    }
    local_48 = 1;
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
  }
  else {
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf__chatroom);
    if ((uVar1 & 1) == 0) {
      FUN_000c3d7c();
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar1;
      FUN_000c3ecc(uVar1,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar1;
      if (uVar1 == 0) {
        uVar1 = local_58;
        FUN_000c4090();
        _objc_retainAutoreleasedReturnValue();
        local_68 = uVar1;
        if (uVar1 == 0) {
LAB_000c3460:
          local_28 = 0;
          local_48 = 1;
        }
        else {
          FUN_000c419c();
          _objc_retainAutoreleasedReturnValue();
          local_70 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
          uVar3 = 0;
          if (uVar1 == 0) {
LAB_000c343c:
            local_48 = 0;
          }
          else {
            uVar2 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,local_50)
            ;
            uVar1 = local_68;
            uVar3 = uVar2 & 0xffffffff;
            if ((uVar2 & 1) == 0) goto LAB_000c343c;
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = uVar1;
            uVar3 = 1;
            local_48 = 1;
          }
          _objc_storeStrong(uVar3,&local_70,0);
          if (local_48 == 0) goto LAB_000c3460;
        }
        _objc_storeStrong(&local_68,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = 1;
        local_28 = uVar1;
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
    else {
      local_28 = 0;
      local_48 = 1;
    }
  }
  _objc_storeStrong(&local_50,0);
LAB_000c3624:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

