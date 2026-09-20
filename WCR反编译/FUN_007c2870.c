// FUN_007c2870 @ 007c2870

void FUN_007c2870(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong local_d0;
  ulong local_a8;
  ulong local_68;
  undefined4 local_5c;
  ulong local_58;
  byte local_4b;
  byte local_4a;
  byte local_49;
  ulong local_48 [3];
  ulong local_30;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_24 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  if ((local_30 == 0) || ((DAT_026f46b8 & 1) == 0)) {
    (*DAT_028ccd98)(local_18,local_20,local_24,local_30);
  }
  else {
    uVar1 = local_30;
    FUN_007cfc4c();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_30;
      FUN_007c7d38(local_30,0x7fffffffffffffff,0);
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8,&cf__O);
      local_49 = (byte)uVar1;
      uVar1 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_isEqualToString__0269ccc8,&cf_U_);
      local_4a = (byte)uVar1;
      uVar1 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_isEqualToString__0269ccc8,&cf_Ss);
      local_4b = (byte)uVar1;
      if ((((local_49 & 1) == 0) || (DAT_028cccc8 == 0)) ||
         (uVar1 = DAT_028cccc8,
         (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccc8,PTR_s_length_0269cca0), uVar1 == 0)) {
        if ((((local_4a & 1) == 0) || (DAT_028cccd0 == 0)) ||
           (uVar1 = DAT_028cccd0,
           (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccd0,PTR_s_length_0269cca0), uVar1 == 0)) {
          if ((((local_4b & 1) == 0) || (DAT_028cccd8 == 0)) ||
             (lVar3 = DAT_028cccd8,
             (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccd8,PTR_s_length_0269cca0), lVar3 == 0))
          {
            (*DAT_028ccd98)(local_18,local_20,local_24,local_30);
            local_5c = 0;
          }
          else {
            (*DAT_028ccd98)(local_18,local_20,local_24,DAT_028cccd8);
            local_5c = 2;
          }
        }
        else {
          uVar2 = local_30;
          FUN_007d0450(uVar1,local_30,local_18);
          _objc_retainAutoreleasedReturnValue();
          local_d0 = uVar2;
          if (uVar2 == 0) {
            local_d0 = DAT_028cccd0;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_68 = local_d0;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*DAT_028ccd98)(local_18,local_20,local_24,local_68);
          local_5c = 2;
          _objc_storeStrong(&local_68,0);
        }
      }
      else {
        uVar2 = local_30;
        FUN_007d0288(uVar1);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = uVar2;
        if (uVar2 == 0) {
          local_a8 = DAT_028cccc8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = local_a8;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*DAT_028ccd98)(local_18,local_20,local_24,local_58);
        local_5c = 2;
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(local_48,0);
    }
    else {
      (*DAT_028ccd98)(local_18,local_20,local_24,local_30);
    }
  }
  _objc_storeStrong(&local_30,0);
  return;
}

