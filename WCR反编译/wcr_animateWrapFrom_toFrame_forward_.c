// wcr_animateWrapFrom:toFrame:forward: @ 01e59a40

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x54 bytes */

void WCRefineTelegramTabStripView::wcr_animateWrapFrom_toFrame_forward_
               (ID param_1,SEL param_2,CGRect param_3,CGRect param_4,bool param_5)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 in_d0;
  undefined8 uVar5;
  undefined8 in_d1;
  undefined8 uVar6;
  undefined8 in_d2;
  undefined8 uVar7;
  undefined8 in_d3;
  undefined8 uVar8;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  ID local_130;
  ID local_128;
  long local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  byte local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ID local_88;
  long local_80;
  byte local_71;
  SEL local_70;
  ID local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  param_4.field0_0x0.field1_0x8 = param_4.field0_0x0.field1_0x8;
  param_4.field0_0x0.field0_0x0 = param_4.field0_0x0.field0_0x0;
  local_71 = param_3.field0_0x0.field0_0x0._0_1_;
  IVar2 = param_1;
  local_70 = param_2;
  local_68 = param_1;
  local_60 = in_d4;
  uStack_58 = in_d5;
  local_50 = in_d6;
  uStack_48 = in_d7;
  local_40 = in_d0;
  uStack_38 = in_d1;
  local_30 = in_d2;
  uStack_28 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_wrapGeneration_026c69b8,param_3.field0_0x0.field0_0x0,
             param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
             param_3.field1_0x10.field1_0x8,param_4.field0_0x0.field0_0x0,
             param_4.field0_0x0.field1_0x8);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setWrapGeneration__026c69c0);
  local_80 = IVar2 + 1;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setWrapAnimating__026c69c8,1);
  IVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_indicatorView_026c6920);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_88 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_88,PTR_s_removeAnimationForKey__026ca7f0,&cf_wcr_tg_indicator);
  uVar5 = local_40;
  uVar6 = uStack_38;
  uVar7 = local_30;
  uVar8 = uStack_28;
  FUN_01e580f8(local_71 & 1);
  uStack_c8 = uStack_38;
  local_d0 = local_40;
  uStack_b8 = uStack_28;
  local_c0 = local_30;
  uStack_e8 = uStack_38;
  local_f0 = local_40;
  uStack_d8 = uStack_28;
  local_e0 = local_30;
  local_a8 = uVar5;
  uStack_a0 = uVar6;
  local_98 = uVar7;
  uStack_90 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,uStack_38,local_30,uStack_28,local_88,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323f10,PTR__OBJC_CLASS___CATransaction_026ce3d8,
             PTR_s_setAnimationDuration__026a04d8);
  puVar1 = PTR__OBJC_CLASS___CATransaction_026ce3d8;
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_026ce1e8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAMediaTimingFunction_026ce1e8,PTR_s_functionWithName__026ca648,
             *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_02578430);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setAnimationTimingFunction__026c6a18);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar3 = local_68;
  puVar1 = PTR__OBJC_CLASS___CATransaction_026ce3d8;
  local_120 = local_80;
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_88;
  local_130 = IVar3;
  uStack_110 = uStack_58;
  local_118 = local_60;
  uStack_100 = uStack_48;
  local_108 = local_50;
  local_f8 = local_71 & 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_128 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setCompletionBlock__026a55d0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a8,uStack_a0,local_98,uStack_90,local_88,PTR_s_setFrame__026ca960);
  IVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_indicatorView_026c6920);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_130,0);
  _objc_storeStrong(&local_88,0);
  return;
}

