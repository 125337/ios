// FUN_007646a0 @ 007646a0

void FUN_007646a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong local_1f8;
  ulong local_1f0;
  ulong local_1e8;
  undefined8 local_b8;
  ulong local_90;
  ulong local_68;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_7);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_8);
  uVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_alignment);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_home);
  bVar1 = false;
  if (uVar5 == 1) {
    local_1e8 = 1;
  }
  else {
    if (uVar5 == 2) {
      local_1f0 = 2;
    }
    else {
      bVar1 = (uVar3 & 1) == 0;
      if (bVar1) {
        local_68 = local_30;
        _objc_getAssociatedObject(local_30,DAT_026f4628);
        _objc_retainAutoreleasedReturnValue();
        local_1f8 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      else {
        local_1f8 = 0;
      }
      local_1f0 = local_1f8;
    }
    local_1e8 = local_1f0;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((uVar4 & 1) == 0) {
    uVar6 = local_30;
    _objc_getAssociatedObject(local_30,DAT_026f4628);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar6);
  }
  uVar6 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_textAlignment_026a66e8);
  if (uVar6 != local_1e8) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setTextAlignment__026caa90,local_1e8);
  }
  bVar1 = false;
  bVar2 = false;
  if (((uVar4 & 1) != 0) && (bVar2 = false, (uVar3 & 1) != 0)) {
    local_90 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    bVar2 = local_90 != 0;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  uVar7 = local_28;
  if (bVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    FUN_0076574c();
    FUN_007656b0();
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_convertRect_toView__0269ded8);
    uVar7 = param_1;
    uVar9 = param_3;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_b8 = param_1;
    if (uVar5 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
      local_b8 = uVar7;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
    uVar8 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
    uVar3 = local_30;
    uVar7 = param_4;
    uVar10 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
    _CGRectEqualToRect(uVar7,uVar8,uVar9,uVar10,local_b8,param_2,param_3,param_4);
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,param_2,param_3,param_4,local_30,PTR_s_setFrame__026ca960);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

