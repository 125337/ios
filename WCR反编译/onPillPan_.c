// onPillPan: @ 00fdae00

/* Function Stack Size: 0x18 bytes */

void WCRIconNameCaptureFloatWindow::onPillPan_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  double in_d0;
  double dVar6;
  double dVar7;
  double dVar8;
  double in_d1;
  undefined8 uVar9;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ID local_98;
  double local_90;
  double dStack_88;
  double local_78;
  double local_68;
  undefined8 local_60;
  double local_58;
  double dStack_50;
  double local_48;
  double local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if (lVar1 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPillMovedDuringPan__026ad318,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_undockPillIfNeeded_026ad2f0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_translationInView__026cabb0,local_28);
  dVar6 = ABS(in_d0) + ABS(in_d1);
  uVar9 = 0x3fe0000000000000;
  local_48 = in_d0;
  local_40 = in_d1;
  if (0.5 < dVar6) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPillMovedDuringPan__026ad318,1);
  }
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pill_026ad218);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar7 = dVar6 + local_48;
  IVar3 = local_28;
  dVar8 = dVar7;
  local_68 = dVar6;
  local_60 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pill_026ad218);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar6 = local_48 + local_40;
  local_78 = dVar8;
  FUN_00fd86b8();
  IVar4 = local_28;
  local_58 = dVar7;
  dStack_50 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pill_026ad218);
  _objc_retainAutoreleasedReturnValue();
  dStack_88 = dStack_50;
  local_90 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,dStack_50);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pill_026ad218);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGPointZero_025782e0,*(undefined8 *)(PTR__CGPointZero_025782e0 + 8)
             ,local_38,PTR_s_setTranslation_inView__026a9fe8,local_28);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if ((lVar1 == 3) ||
     (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20),
     lVar1 == 4)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_snapPillToEdgeAnimated__026ad320,1);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_28;
    local_b8 = PTR___NSConcreteStackBlock_02578660;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_00fdb1cc;
    local_a0 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = IVar2;
    _dispatch_async(puVar5,&local_b8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

