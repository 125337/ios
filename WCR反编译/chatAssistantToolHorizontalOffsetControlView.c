// chatAssistantToolHorizontalOffsetControlView @ 01b51ebc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCRefineLayoutFunctionViewController::chatAssistantToolHorizontalOffsetControlView
             (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_38 = puVar2;
  _objc_alloc();
  uVar8 = 0;
  uVar4 = 0;
  uVar3 = 0x4057800000000000;
  uVar10 = 0x403d000000000000;
  FUN_01b47878();
  local_60 = uVar4;
  local_58 = uVar8;
  local_50 = uVar3;
  local_48 = uVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar8,uVar3,uVar10,puVar1,PTR_s_initWithFrame__026ca6e8);
  puVar2 = PTR__OBJC_CLASS___UIStepper_026cf278;
  local_40 = puVar1;
  _objc_alloc();
  uVar10 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
  uVar9 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)PTR__CGRectZero_025782f0);
  local_68 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(0xc054000000000000,puVar2,PTR_s_setMinimumValue__026b2338);
  (*(code *)PTR__objc_msgSend_02578628)(0x4054000000000000,local_68,PTR_s_setMaximumValue__026b2340)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_68,PTR_s_setStepValue__026bc440);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setContinuous__026b4d68,0);
  dVar5 = (double)(long)local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setValue__026a51b0);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_sizeToFit_0269ec08);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_frame_026ca640);
  dVar6 = dVar5;
  uVar3 = uVar10;
  uVar4 = uVar9;
  uVar8 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
  _CGRectGetWidth(dVar6,uVar3,uVar4,uVar8);
  uVar3 = uVar9;
  uVar4 = uVar11;
  _CGRectGetWidth(dVar5,uVar10);
  dVar6 = dVar6 - dVar5;
  dVar7 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
  _CGRectGetHeight(dVar7,dVar5,uVar3,uVar4);
  dVar5 = dVar6;
  _CGRectGetHeight(dVar6,uVar10,uVar9,uVar11);
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar6,(long)((dVar7 - dVar5) * 0.5),uVar9,uVar11,local_68,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_handleChatAssistantToolHorizonta_026bf690,0x1000);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_68);
  puVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

