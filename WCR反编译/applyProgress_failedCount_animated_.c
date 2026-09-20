// applyProgress:failedCount:animated: @ 01126678

/* Function Stack Size: 0x24 bytes */

void WCRefineProgressToast::applyProgress_failedCount_animated_
               (ID param_1,SEL param_2,double param_3,long_long param_4,bool param_5)

{
  undefined *puVar1;
  ID IVar2;
  undefined **ppuVar3;
  double dVar4;
  undefined8 in_d2;
  undefined8 in_d3;
  long local_138;
  long local_130;
  double local_118;
  double local_110;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  ID local_e8;
  undefined **local_e0;
  double local_d8;
  undefined8 local_d0;
  double local_b8;
  long local_b0;
  undefined4 local_a4;
  long local_a0;
  undefined4 local_94;
  long local_90;
  long local_88;
  long local_80;
  double local_78;
  undefined8 local_70;
  double local_68;
  undefined8 local_60;
  double local_58;
  double local_50;
  byte local_41;
  long_long local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_41 = (byte)param_5;
  local_60 = 0;
  local_110 = param_3;
  if (param_3 < 0.0) {
    local_110 = 0.0;
  }
  local_68 = local_110;
  local_50 = local_110;
  local_70 = 0x3ff0000000000000;
  if (1.0 <= local_110) {
    local_118 = 1.0;
  }
  else {
    local_118 = local_110;
  }
  local_78 = local_118;
  local_38 = local_118;
  local_58 = param_3;
  local_40 = param_4;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_118,param_1,PTR_s_setDisplayedProgress__026af170);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_progressFillView_026af178);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_d0 = 0x4059000000000000;
  local_b8 = local_38 * 100.0;
  local_90 = (long)local_b8;
  local_94 = 0;
  local_130 = local_90;
  if (local_90 < 0) {
    local_130 = 0;
  }
  local_a0 = local_130;
  local_88 = local_130;
  local_a4 = 100;
  if (local_130 < 100) {
    local_138 = local_130;
  }
  else {
    local_138 = 100;
  }
  local_b0 = local_138;
  local_80 = local_138;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld__);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_percentLabel_026af180);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containerView_026a6d08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_progressTrackView_026af188);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_d8 = local_b8;
  _CGRectGetWidth(local_b8,local_d0,in_d2,in_d3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (local_b8 <= 0.0) {
    local_b8 = 82.0;
  }
  dVar4 = local_b8 * local_38;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_progressFillWidthConstraint_026af190);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)((long)dVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  ppuVar3 = &local_108;
  local_108 = PTR___NSConcreteStackBlock_02578660;
  local_100 = 0xc2000000;
  local_fc = 0;
  local_f8 = FUN_01126b30;
  local_f0 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  local_e8 = IVar2;
  _objc_retainBlock();
  local_e0 = ppuVar3;
  if ((local_41 & 1) == 0) {
    (*(code *)ppuVar3[2])();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c70,0,PTR__OBJC_CLASS___UIView_026cdfd8,
               PTR_s_animateWithDuration_delay_option_026ca4f0,&DAT_00020004,ppuVar3,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_e8,0);
  return;
}

