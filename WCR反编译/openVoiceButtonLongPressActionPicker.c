// openVoiceButtonLongPressActionPicker @ 01f64850

/* Function Stack Size: 0x10 bytes */

void WCRefineVoiceCloneSettingsViewController::openVoiceButtonLongPressActionPicker
               (ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *local_118;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  ID local_c0;
  undefined *local_b8;
  undefined *local_b0;
  byte local_a1;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  SEL local_50;
  ID local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  local_40 = &cf_bUSu;
  local_38 = &cf_KQn_u;
  local_30 = &cf_rRbcu;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_58 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_60 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_68 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_78 = (undefined *)0x0;
  local_70 = puVar2;
  while( true ) {
    puVar2 = local_78;
    puVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
    puVar3 = local_68;
    local_118 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if ((long)puVar4 <= (long)puVar2) break;
    local_81 = 0;
    local_91 = 0;
    local_a1 = 0;
    if (local_78 == local_60) {
      puVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      local_90 = local_118;
    }
    else {
      local_118 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
      _objc_retainAutoreleasedReturnValue();
      local_a1 = 1;
      local_a0 = local_118;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180,local_118);
    if ((local_a1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    IVar1 = local_48;
    puVar2 = local_70;
    local_b0 = local_78;
    ppuVar5 = &local_e0;
    local_e0 = PTR___NSConcreteStackBlock_02578660;
    local_d8 = 0xc2000000;
    local_d4 = 0;
    local_d0 = FUN_01f64cd0;
    local_c8 = &DAT_0257cc98;
    local_b8 = local_78;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = IVar1;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(ppuVar5);
    _objc_storeStrong(&local_c0,0);
    local_78 = local_78 + 1;
  }
  FUN_01f5fe14(local_48,&cf__cTl,local_68,local_70,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

