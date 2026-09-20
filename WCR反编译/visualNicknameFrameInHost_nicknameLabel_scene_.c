// visualNicknameFrameInHost:nicknameLabel:scene: @ 010e18ac

/* Function Stack Size: 0x28 bytes */

CGRect WCRefineNameplateHelper::visualNicknameFrameInHost_nicknameLabel_scene_
                 (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5)

{
  CGRect CVar1;
  long lVar2;
  double in_d0;
  double dVar3;
  double in_d1;
  double in_d2;
  double in_d3;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1b8;
  double dStack_80;
  long local_60;
  undefined8 local_58;
  SEL local_50;
  ID local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_tightNicknameFrameInHost_nicknam_026ae900,local_58,local_60);
  lVar2 = local_60;
  local_30 = in_d2;
  dStack_28 = in_d3;
  if (param_5 == 2) {
    dStack_80 = in_d1;
    if (local_60 != 0) {
      dVar3 = in_d3;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_convertRect_toView__0269ded8,local_58);
      if ((8.0 <= in_d3) && (in_d3 * DAT_0232c690 < dVar3)) {
        dStack_80 = in_d1 + (dVar3 - in_d3) * 0.5;
      }
    }
    dStack_38 = dStack_80;
    local_40 = in_d0;
  }
  else {
    local_40 = in_d0;
    dStack_38 = in_d1;
    if ((((param_5 == 4) || (param_5 == 5)) && (param_5 != 4)) &&
       (local_1f0 = in_d2, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548),
       local_1f0 < 8.0)) {
      local_1e0 = in_d2;
      if (in_d2 < 1.0) {
        local_1e0 = 1.0;
      }
      local_1e8 = in_d3;
      if (in_d3 < 1.0) {
        local_1e8 = 1.0;
      }
      dVar3 = local_1f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_bounds_026ca548);
      if (local_1f0 < dVar3) {
        local_1f0 = dVar3;
      }
      if (160.0 <= local_1f0) {
        local_1f8 = local_1f0;
      }
      else {
        local_1f8 = 160.0;
      }
      if (local_1f8 <= local_1e0) {
        local_200 = local_1f8;
      }
      else {
        local_200 = local_1e0;
      }
      local_1b8 = in_d1;
      if (in_d1 < 0.0) {
        local_1b8 = 0.0;
      }
      dVar3 = (local_1f8 - local_200) * 0.5;
      FUN_010e1d58();
      local_40 = dVar3;
      dStack_38 = local_1b8;
      local_30 = local_200;
      dStack_28 = local_1e8;
    }
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  CVar1.field0_0x0.field1_0x8 = dStack_38;
  CVar1.field0_0x0.field0_0x0 = local_40;
  CVar1.field1_0x10.field0_0x0 = local_30;
  CVar1.field1_0x10.field1_0x8 = dStack_28;
  return CVar1;
}

