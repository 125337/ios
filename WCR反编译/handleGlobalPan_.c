// handleGlobalPan: @ 01d83604

/* Function Stack Size: 0x18 bytes */

void WCRefineSearchSettingsViewController::handleGlobalPan_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  double in_d0;
  double dVar4;
  undefined8 uVar5;
  double in_d1;
  double dVar6;
  undefined8 uVar7;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  long local_118;
  double local_110;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  long local_e8 [4];
  undefined8 local_c8;
  undefined8 local_c0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_70;
  double dStack_68;
  double local_60;
  double local_58;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_38;
  local_40 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_translationInView__026cabb0);
  local_60 = in_d0;
  local_58 = in_d1;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_center_026ca560);
  in_d1 = in_d1 + local_60;
  dVar4 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_center_026ca560);
  dVar6 = local_60 + local_58;
  local_90 = dVar4;
  FUN_01d83b2c();
  local_a0 = in_d1;
  dStack_98 = dVar6;
  local_70 = in_d1;
  dStack_68 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)(in_d1,dVar6,local_40,PTR_s_setCenter__026ca8c0);
  lVar2 = local_38;
  lVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)PTR__CGPointZero_025782e0;
  uVar7 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_setTranslation_inView__026a9fe8);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if (lVar2 == 3) {
    puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    dVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c8 = uVar5;
    local_c0 = uVar7;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_a8 = dVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_center_026ca560);
    lVar2 = local_40;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    if (local_a8 / 2.0 <= dVar4) {
      local_138 = PTR___NSConcreteStackBlock_02578660;
      local_130 = 0xc2000000;
      local_12c = 0;
      local_128 = FUN_01d83c2c;
      local_120 = &DAT_0257cc98;
      (*(code *)PTR__objc_retain_02578638)();
      local_118 = lVar2;
      local_110 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fd3333333333333,puVar3,PTR_s_animateWithDuration_animations__026ca4e0,&local_138
                );
      _objc_storeStrong(&local_118,0);
    }
    else {
      local_108 = PTR___NSConcreteStackBlock_02578660;
      local_100 = 0xc2000000;
      local_fc = 0;
      local_f8 = FUN_01d83b58;
      local_f0 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_e8[0] = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fd3333333333333,puVar3,PTR_s_animateWithDuration_animations__026ca4e0,&local_108
                );
      _objc_storeStrong(local_e8,0);
    }
  }
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

