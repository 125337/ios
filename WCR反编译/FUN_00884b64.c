// FUN_00884b64 @ 00884b64

void FUN_00884b64(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *local_100;
  ulong local_60;
  ulong local_58;
  ulong local_50 [3];
  ulong local_38;
  undefined4 local_30;
  byte local_29;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_29 = param_2;
  if (local_28 == 0) {
    local_30 = 1;
  }
  else {
    uVar4 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028cd8c0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_38 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleForState__026a2208,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    FUN_008825d8();
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar4 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_length_0269cca0);
    if (uVar4 == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_008825d8();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_50[0];
      local_50[0] = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if ((local_29 & 1) == 0) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if (uVar4 != 0) {
        uVar4 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_isEqualToString__0269ccc8,local_38);
        if ((uVar4 & 1) == 0) {
          FUN_00885248(local_28,local_38);
        }
        _objc_setAssociatedObject(local_28,&DAT_028cd8c0,0,3);
      }
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar4 != 0) {
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
        _objc_retainAutoreleasedReturnValue();
        FUN_00882804();
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      local_30 = 1;
    }
    else {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if (uVar4 == 0) {
        local_100 = local_50;
      }
      else {
        local_100 = &local_38;
      }
      uVar4 = *local_100;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
      if (uVar4 == 0) {
        local_30 = 1;
      }
      else {
        uVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
        if (uVar4 == 0) {
          _objc_setAssociatedObject(local_28,&DAT_028cd8c0,local_58,3);
        }
        uVar4 = local_58;
        FUN_008853b8();
        _objc_retainAutoreleasedReturnValue();
        local_60 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
        if (uVar4 != 0) {
          uVar4 = local_50[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50[0],PTR_s_isEqualToString__0269ccc8,local_60);
          if ((uVar4 & 1) == 0) {
            FUN_00885248(local_28,local_60);
          }
        }
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (uVar4 != 0) {
          uVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
          _objc_retainAutoreleasedReturnValue();
          FUN_00882804();
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
        _objc_storeStrong(&local_60,0);
        local_30 = 0;
      }
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(local_50);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

