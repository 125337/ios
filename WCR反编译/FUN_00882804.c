// FUN_00882804 @ 00882804

void FUN_00882804(undefined8 param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *local_b8;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  byte local_31;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_31 = param_3;
  if ((local_28 == 0) || (uVar2 = local_30, FUN_0088011c(), (uVar2 & 1) == 0)) {
    local_48 = 1;
  }
  else if ((local_31 & 1) == 0) {
    FUN_008859c8(local_28);
    local_48 = 1;
  }
  else {
    uVar2 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028cd8c1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_50 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_008825d8();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_b8 = &local_58;
    }
    else {
      local_b8 = &local_50;
    }
    uVar2 = *local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_48 = 1;
    }
    else {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_memo);
      if (((uVar2 & 1) == 0) || (uVar2 = local_60, FUN_00885c00(), (uVar2 & 1) == 0)) {
        uVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
        if (uVar2 == 0) {
          _objc_setAssociatedObject(local_28,&DAT_028cd8c1,local_60,3);
        }
        uVar2 = local_30;
        FUN_00885fc4(local_30,local_60);
        _objc_retainAutoreleasedReturnValue();
        local_68 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
        if ((uVar2 == 0) ||
           (uVar2 = local_58,
           (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_68),
           (uVar2 & 1) != 0)) {
          local_48 = 1;
        }
        else {
          FUN_008861f0(local_28,1);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setText__026caa88,local_68);
          FUN_008861f0(local_28,0);
          local_48 = 0;
        }
        _objc_storeStrong(&local_68,0);
      }
      else {
        FUN_008859c8(local_28);
        local_48 = 1;
      }
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

