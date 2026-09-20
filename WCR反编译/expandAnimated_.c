// expandAnimated: @ 00fd929c

/* Function Stack Size: 0x14 bytes */

void WCRIconNameCaptureFloatWindow::expandAnimated_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 in_d1;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  ID local_e0;
  undefined **local_d8;
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [48];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  uVar1 = DAT_02323e70;
  local_31 = (byte)param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setState__026a00b0,1);
  uVar6 = DAT_0232c680;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWindowLevel__026caae8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidden__026ca970,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_undockPillIfNeeded_026ad2f0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_refreshChrome_026ad2a8);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pill_026ad218);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_48 = uVar6;
  uStack_40 = in_d1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((IVar3 & 1) != 0) {
    uStack_58 = uStack_40;
    local_60 = local_48;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_panel_026ad220);
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = uStack_58;
    local_70 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,uStack_58);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _CGAffineTransformMakeScale(uVar1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_d0,auStack_a0,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setTransform__026caad0,auStack_d0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pill_026ad218);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  ppuVar4 = &local_100;
  local_100 = PTR___NSConcreteStackBlock_02578660;
  local_f8 = 0xc2000000;
  local_f4 = 0;
  local_f0 = FUN_00fd9710;
  local_e8 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = IVar2;
  _objc_retainBlock();
  local_d8 = ppuVar4;
  if ((local_31 & 1) == 0) {
    (*(code *)ppuVar4[2])();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323f18,0,DAT_02323ee8,DAT_02323c78,PTR__OBJC_CLASS___UIView_026cdfd8,
               PTR_s_animateWithDuration_delay_usingS_026ca4f8,0,ppuVar4,0);
  }
  puVar5 = PTR_WCRefineIconNameCaptureSupport_026cec30;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineIconNameCaptureSupport_026cec30,PTR_s_isLiveCaptureArmed_026ad250);
  if (((ulong)puVar5 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineIconNameCaptureSupport_026cec30,PTR_s_scheduleAutoCapture_026ad300);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_e0,0);
  return;
}

