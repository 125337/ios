// FUN_0045f1b0 @ 0045f1b0

double FUN_0045f1b0(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  double local_200;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined8 local_f8;
  uint local_f0;
  byte local_ea;
  undefined1 local_e9;
  ulong *local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  ulong local_c0;
  double local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  long local_90;
  double local_88;
  ulong local_78;
  long local_70 [2];
  ulong local_60 [4];
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  double local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_descriptionLabel);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_40;
  local_40 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  local_60[0] = 0;
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_valueForKey__0269d128,&cf_playerViewContainer);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_60[0];
  local_60[0] = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  uVar5 = local_40;
  local_70[0] = 0;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_200 = param_1;
  if (((uVar5 & 1) == 0) ||
     (uVar5 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isHidden_026ca768),
     local_200 = param_1, (uVar5 & 1) != 0)) {
    uVar5 = local_60[0];
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar5 & 1) != 0) {
      _objc_storeStrong(local_70,local_60[0]);
    }
  }
  else {
    _objc_storeStrong(local_70,local_40);
    local_200 = param_1;
  }
  local_78 = 0;
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_horizontalDivider);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_78;
  local_78 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  lVar1 = local_70[0];
  puVar4 = PTR_s_bottom_026a3ea8;
  if (local_70[0] != 0) {
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_0045fcfc;
    local_98 = &DAT_0257d4a8;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = lVar1;
    FUN_0045fba0(lVar1,puVar4,&local_b0);
    local_200 = local_200 + 16.0;
    local_88 = local_200;
    if ((local_78 != 0) &&
       (uVar5 = local_78,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_setTop__026a10f0),
       (uVar5 & 1) != 0)) {
      local_200 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setTop__026a10f0);
    }
    uVar5 = local_78;
    puVar4 = PTR_s_bottom_026a3ea8;
    local_e9 = 0;
    local_ea = 0;
    if (local_78 == 0) {
      local_200 = local_88;
    }
    else {
      local_e0 = PTR___NSConcreteStackBlock_02578660;
      local_d8 = 0xc2000000;
      local_d4 = 0;
      local_d0 = FUN_0045fd60;
      local_c8 = &DAT_0257d4a8;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = uVar5;
      local_e9 = 1;
      local_ea = 1;
      local_e8 = &local_c0;
      FUN_0045fba0(uVar5,puVar4,&local_e0);
    }
    local_b8 = local_200;
    if (0.0 < local_200) {
      local_28 = local_200;
    }
    local_f0 = (uint)(0.0 < local_200);
    if ((local_ea & 1) != 0) {
      _objc_storeStrong(local_e8,0);
    }
    _objc_storeStrong(&local_90,0);
    if (local_f0 != 0) goto LAB_0045f8a0;
  }
  uVar2 = local_38;
  puVar4 = PTR_s_top_026a10e8;
  local_118 = PTR___NSConcreteStackBlock_02578660;
  local_110 = 0xc2000000;
  local_10c = 0;
  local_108 = FUN_0045fdc4;
  local_100 = &DAT_0257d4a8;
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = uVar2;
  FUN_0045fba0(uVar2,puVar4,&local_118);
  local_28 = local_200;
  _objc_storeStrong(&local_f8,0);
  local_f0 = 1;
LAB_0045f8a0:
  _objc_storeStrong(&local_78);
  _objc_storeStrong(local_70,0);
  _objc_storeStrong(local_60,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

