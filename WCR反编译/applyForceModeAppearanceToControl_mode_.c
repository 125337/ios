// applyForceModeAppearanceToControl:mode: @ 01f4c594

/* WARNING: Removing unreachable block (ram,0x01f4c8ec) */
/* WARNING: Removing unreachable block (ram,0x01f4cb08) */
/* WARNING: Removing unreachable block (ram,0x01f4c980) */
/* WARNING: Removing unreachable block (ram,0x01f4c9a4) */
/* WARNING: Removing unreachable block (ram,0x01f4c990) */
/* WARNING: Removing unreachable block (ram,0x01f4c9a0) */
/* WARNING: Removing unreachable block (ram,0x01f4cb0c) */
/* WARNING: Removing unreachable block (ram,0x01f4ca58) */
/* WARNING: Removing unreachable block (ram,0x01f4cb9c) */
/* WARNING: Removing unreachable block (ram,0x01f4cddc) */
/* Function Stack Size: 0x20 bytes */

void WCRefineVersionController::applyForceModeAppearanceToControl_mode_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  long_long local_88;
  undefined8 local_80;
  SEL local_78;
  ID local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  uVar4 = DAT_023243c8;
  uVar3 = DAT_02323f38;
  uVar2 = DAT_02323d40;
  uVar1 = DAT_02323c70;
  uVar9 = DAT_02323c68;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = 0;
  local_78 = param_2;
  local_70 = param_1;
  _objc_storeStrong(&local_80,param_3);
  local_90 = (undefined *)0x0;
  local_98 = (undefined *)0x0;
  local_a0 = (undefined *)0x0;
  local_a8 = (undefined *)0x0;
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_88 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = local_a0;
  local_a0 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithDynamicProvider__0269e538,
             &PTR___NSConcreteGlobalBlock_0258ccf0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = local_a8;
  local_a8 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar8);
  if (local_88 != 0) {
    if (local_88 == 1) {
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323f28,DAT_02323d48,DAT_0232c678,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = local_90;
      local_90 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar8);
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar9,uVar3,uVar2,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = local_98;
      local_98 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar8);
      goto LAB_01f4c8e8;
    }
    if (local_88 == 2) {
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323e40,0x3feb333333333333,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = local_90;
      local_90 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar8);
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,uVar1,uVar1,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = local_98;
      local_98 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar8);
      goto LAB_01f4c8e8;
    }
  }
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithDynamicProvider__0269e538,
             &PTR___NSConcreteGlobalBlock_0258cd10);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = local_90;
  local_90 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = local_98;
  local_98 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar8);
LAB_01f4c8e8:
  puVar6 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__NSForegroundColorAttributeName_02578070;
  puVar8 = PTR__NSFontAttributeName_02578068;
  local_48 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
  local_40 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
  local_30 = local_a0;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_b0 = puVar6;
  local_38 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_38,&local_48);
  _objc_retainAutoreleasedReturnValue();
  local_68 = *(undefined8 *)puVar8;
  local_58 = local_b0;
  local_60 = *(undefined8 *)puVar5;
  local_50 = local_98;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_b8 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_58,&local_68,2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = local_80;
  local_c0 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4020000000000000);
  (*(code *)PTR__objc_release_02578630)(uVar9);
  uVar9 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar9);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setBackgroundColor__026ca888,local_a8);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR_s_setTitleTextAttributes_forState__0269e9f0,local_b8,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR_s_setTitleTextAttributes_forState__0269e9f0,local_c0,4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR_s_setSelectedSegmentTintColor__026aa658,local_90);
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

