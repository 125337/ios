// FUN_003127d0 @ 003127d0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003127d0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double local_a8;
  double local_a0;
  ulong local_98;
  byte local_89;
  ulong local_88;
  byte local_79;
  ulong local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  char local_4d;
  undefined4 local_3c;
  long local_38;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_7);
  if (((local_28 == 0) || (local_30 == 0)) || (local_38 == 0)) {
    local_3c = 1;
  }
  else {
    FUN_0031bb84(local_30);
    FUN_00313afc(local_30);
    local_79 = 0;
    local_89 = 0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    local_70 = param_1;
    local_68 = param_2;
    local_60 = param_3;
    local_58 = param_4;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    bVar1 = false;
    if (param_1 <= 18.0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = uVar2 == 0;
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    local_4d = bVar1;
    if (bVar1 != false) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      FUN_0031bdd8();
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_98 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_a0 = 0.0;
    local_a8 = 0.0;
    bVar1 = false;
    if (local_98 != 0) {
      uVar2 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_getWhite_alpha__026ca668,&local_a0,&local_a8);
      bVar1 = false;
      if (((uVar2 & 1) != 0) && (bVar1 = false, 0.9800000190734863 < local_a0)) {
        bVar1 = 0.9800000190734863 < local_a8;
      }
    }
    if (bVar1) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      FUN_0031bdd8();
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    FUN_0031c00c(local_28);
    _objc_storeStrong(&local_98,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

