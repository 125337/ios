// startGradientAnimation @ 01b0a174

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryCardViewController::startGradientAnimation(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  byte local_49;
  SEL local_48;
  ID local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = param_2;
  local_40 = param_1;
  FUN_01b08450();
  local_49 = (byte)param_1;
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_026ce1e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CABasicAnimation_026ce1e0,PTR_s_animationWithKeyPath__026ca510,
             &cf_startPoint);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
  uVar5 = 0;
  uVar4 = 0;
  local_58 = puVar1;
  FUN_01b09530();
  local_68 = uVar4;
  local_60 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,puVar2,PTR_s_valueWithCGPoint__0269e328);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setFromValue__026ca968);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
  uVar5 = 0x3fe3333333333333;
  uVar4 = DAT_02323da8;
  FUN_01b09530();
  local_78 = uVar5;
  local_70 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar4,puVar2,PTR_s_valueWithCGPoint__0269e328);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setToValue__026caac8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_026ce1e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CABasicAnimation_026ce1e0,PTR_s_animationWithKeyPath__026ca510,
             &cf_endPoint);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
  uVar5 = 0x3ff0000000000000;
  uVar4 = 0x3ff0000000000000;
  local_80 = puVar1;
  FUN_01b09530();
  local_90 = uVar4;
  local_88 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,puVar2,PTR_s_valueWithCGPoint__0269e328);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setFromValue__026ca968);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
  uVar5 = 0x3feb333333333333;
  uVar4 = DAT_02324020;
  FUN_01b09530();
  local_a0 = uVar4;
  local_98 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,puVar2,PTR_s_valueWithCGPoint__0269e328);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setToValue__026caac8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___CAAnimationGroup_026cf370;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAAnimationGroup_026cf370,PTR_s_animation_026be960);
  _objc_retainAutoreleasedReturnValue();
  local_38 = local_58;
  local_30 = local_80;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_a8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setAnimations__026ca870);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(0x4018000000000000,local_a8,PTR_s_setDuration__026ca920);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setAutoreverses__026ca880,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setRepeatCount__026caa18);
  puVar2 = PTR__kCAMediaTimingFunctionEaseInEaseOut_02578428;
  puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_026ce1e8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAMediaTimingFunction_026ce1e8,PTR_s_functionWithName__026ca648,
             *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_02578428);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setTimingFunction__026caaa0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_backgroundGradientLayer_026be920);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_026ce1e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CABasicAnimation_026ce1e0,PTR_s_animationWithKeyPath__026ca510,
             &cf_colors);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_40;
  local_b0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_gradientColorsForDarkMode__026be958,local_49 & 1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setFromValue__026ca968);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_altGradientColorsForDarkMode__026be968,local_49 & 1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setToValue__026caac8);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(0x4014000000000000,local_b0,PTR_s_setDuration__026ca920);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setAutoreverses__026ca880,1);
  (*(code *)PTR__objc_msgSend_02578628)(0x7f800000,local_b0,PTR_s_setRepeatCount__026caa18);
  puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_026ce1e8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAMediaTimingFunction_026ce1e8,PTR_s_functionWithName__026ca648,
             *(undefined8 *)puVar2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setTimingFunction__026caaa0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_backgroundGradientLayer_026be920);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

