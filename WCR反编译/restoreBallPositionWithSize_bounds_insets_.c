// restoreBallPositionWithSize:bounds:insets: @ 015e9468

/* Function Stack Size: 0x58 bytes */

bool WCRQuickChatWindow::restoreBallPositionWithSize_bounds_insets_
               (ID param_1,SEL param_2,double param_3,CGRect param_4,UIEdgeInsets param_5)

{
  undefined *puVar1;
  ID IVar2;
  double dVar3;
  double in_d3;
  double dVar4;
  double in_d4;
  double in_stack_00000010;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined *local_88;
  double local_80;
  SEL local_78;
  ID local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_38;
  double local_30;
  byte local_21;
  
  param_5.field1_0x8 = param_5.field1_0x8;
  param_5.field0_0x0 = param_5.field0_0x0;
  param_5.field2_0x10 = param_5.field2_0x10;
  param_5.field3_0x18 = param_5.field3_0x18;
  local_68 = param_5.field2_0x10;
  local_60 = param_5.field3_0x18;
  local_58 = in_stack_00000010;
  local_80 = param_3;
  local_78 = param_2;
  local_70 = param_1;
  local_38 = in_d3;
  local_30 = in_d4;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_restoredBallPosition_026b1360,param_4.field0_0x0.field0_0x0,
             param_4.field0_0x0.field1_0x8,param_4.field1_0x10.field0_0x0,
             param_4.field1_0x10.field1_0x8,param_5.field0_0x0,param_5.field1_0x8);
  if ((((param_1 & 1) != 0) || (local_38 < 1.0)) || (local_30 < 1.0)) {
    local_21 = 0;
  }
  else {
    local_190 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setRestoredBallPosition__026b1368,1);
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_boolForKey__0269f3d8,&cf_WCRQCBallPositionSaved);
    if (((ulong)puVar1 & 1) == 0) {
      local_21 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_doubleForKey__026a7e60,&cf_WCRQCBallCenterXRatio);
      local_190 = local_190 * local_38;
      dVar3 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_doubleForKey__026a7e60,&cf_WCRQCBallCenterYRatio);
      local_170 = local_68 + 8.0;
      local_178 = ((local_30 - local_80) - local_58) - 8.0;
      dVar3 = dVar3 * local_30 - local_80 * 0.5;
      if (local_170 < dVar3) {
        local_170 = dVar3;
      }
      if (local_170 < local_178) {
        local_178 = local_170;
      }
      puVar1 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_boolForKey__0269f3d8,&cf_WCRQCBallIdleSnapped);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setIdleSnapped__026b1370,puVar1);
      IVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_idleSnapped_026b1350);
      if ((IVar2 & 1) == 0) {
        local_190 = local_190 - local_80 * 0.5;
        if (local_190 <= 8.0) {
          local_190 = 8.0;
        }
        local_198 = (local_38 - local_80) - 8.0;
        if (local_190 < local_198) {
          local_198 = local_190;
        }
        local_188 = local_198;
      }
      else {
        if (local_190 < local_38 * 0.5) {
          local_180 = -(local_80 * 0.5);
        }
        else {
          local_180 = local_38 - local_80 * 0.5;
        }
        local_188 = local_180;
      }
      dVar3 = local_80;
      dVar4 = local_80;
      FUN_015dff84();
      IVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_188,local_178,dVar3,dVar4);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_21 = 1;
    }
    _objc_storeStrong(&local_88,0);
  }
  return local_21 & 1;
}

