// onHeaderPan: @ 00fdb214

/* Function Stack Size: 0x18 bytes */

void WCRIconNameCaptureFloatWindow::onHeaderPan_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  double in_d0;
  double dVar6;
  double in_d1;
  double dVar7;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ID local_98;
  double local_90;
  double dStack_88;
  double local_78;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_translationInView__026cabb0,local_28);
  IVar2 = local_28;
  local_48 = in_d0;
  local_40 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  in_d0 = in_d0 + local_48;
  IVar3 = local_28;
  dVar6 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar7 = local_48 + local_40;
  local_78 = dVar6;
  FUN_00fd86b8();
  IVar4 = local_28;
  local_58 = in_d0;
  dStack_50 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  dStack_88 = dStack_50;
  local_90 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,dStack_50);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGPointZero_025782e0,*(undefined8 *)(PTR__CGPointZero_025782e0 + 8)
             ,local_38,PTR_s_setTranslation_inView__026a9fe8,local_28);
  lVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if ((lVar5 == 3) ||
     (lVar5 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20),
     lVar5 == 4)) {
    IVar2 = local_28;
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_b8 = PTR___NSConcreteStackBlock_02578660;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_00fdb4e4;
    local_a0 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323ec8,0,DAT_02323c60,0x3fd3333333333333,puVar1,
               PTR_s_animateWithDuration_delay_usingS_026ca4f8,0,&local_b8);
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

