// FUN_000214d8 @ 000214d8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_000214d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong local_150;
  ulong local_130;
  ulong local_118;
  ulong local_c0;
  ulong local_b0;
  ulong local_a0;
  ulong local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [3];
  ulong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  uVar3 = local_30;
  FUN_00021ab4();
  _objc_retainAutoreleasedReturnValue();
  local_78[0] = local_48;
  local_80 = local_50;
  local_88 = local_58;
  local_60 = uVar3;
  FUN_00022eb0(uVar3,local_78,&local_80,&local_88);
  _objc_storeStrong(&local_48,local_78[0]);
  _objc_storeStrong(&local_50,local_80);
  _objc_storeStrong(&local_58,local_88);
  if ((uVar3 & 1) == 0) {
    local_21 = 0;
    local_8c = 1;
  }
  else {
    uVar3 = local_38;
    FUN_0002278c();
    _objc_retainAutoreleasedReturnValue();
    local_98 = uVar3;
    if (local_40 == 0) {
      uVar3 = local_30;
      FUN_000238a8();
      _objc_retainAutoreleasedReturnValue();
      bVar2 = false;
      bVar1 = false;
      local_118 = uVar3;
      if (uVar3 == 0) {
        local_a0 = local_38;
        FUN_000238a8();
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        bVar1 = local_a0 == 0;
        local_130 = local_a0;
        if (bVar1) {
          local_b0 = local_38;
          FUN_00022d10();
          _objc_retainAutoreleasedReturnValue();
          local_c0 = local_b0;
          FUN_000238a8();
          _objc_retainAutoreleasedReturnValue();
          local_130 = local_c0;
        }
        local_118 = local_130;
      }
      _objc_storeStrong(&local_40,local_118);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_c0);
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar3 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
      local_150 = local_60;
    }
    else {
      local_150 = local_98;
    }
    FUN_00023f48();
    if ((local_150 & 1) == 0) {
      FUN_00022174(local_38);
    }
    else {
      FUN_00022174(local_38);
      uVar3 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
      if (uVar3 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gS0RS_MRO);
      }
      else {
        FUN_00024134(local_48,local_50,local_58,local_98,local_40);
      }
    }
    local_21 = 1;
    local_8c = 1;
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

