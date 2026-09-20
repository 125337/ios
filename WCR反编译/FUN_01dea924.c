// FUN_01dea924 @ 01dea924

void FUN_01dea924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long local_190;
  long local_188;
  long local_178;
  undefined *local_160;
  undefined *local_f0;
  undefined *local_e8;
  long local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  long local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_1);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_2);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_3);
  local_d8 = (undefined *)0x0;
  _objc_storeStrong(&local_d8,param_4);
  puVar2 = PTR_WCRefineGradientPalette_026ce910;
  local_e0 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGradientPalette_026ce910,PTR_s_normalizedHexStops__026acc78,local_d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefineGradientPalette_026ce910;
  puVar3 = local_d8;
  local_e8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
  if (puVar3 == (undefined *)0x0) {
    local_160 = local_e8;
  }
  else {
    local_160 = local_d8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_normalizedHexStops__026acc78,local_160);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_c0;
  local_b8 = &cf_gradient;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_f0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = &cf_gradientPresetId;
  lVar5 = local_c8;
  local_70 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (lVar5 == 0) {
    local_178 = _WCRefineGradientPresetCustom;
  }
  else {
    local_178 = local_c8;
  }
  local_68 = local_178;
  local_a8 = &cf_gradientDirection;
  if (local_e0 < 6) {
    local_188 = local_e0;
  }
  else {
    local_188 = 5;
  }
  if (local_188 < 1) {
    local_190 = 0;
  }
  else {
    local_190 = local_188;
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_190);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = &cf_lightStops;
  local_58 = local_e8;
  local_98 = &cf_darkStops;
  local_50 = local_f0;
  local_90 = &cf_lightColor;
  puVar3 = local_e8;
  local_60 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_firstObject_0269d1f8);
  _objc_retainAutoreleasedReturnValue();
  local_88 = &cf_lightEndColor;
  puVar6 = local_e8;
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_lastObject_0269d200);
  _objc_retainAutoreleasedReturnValue();
  local_80 = &cf_darkColor;
  puVar7 = local_f0;
  local_40 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_firstObject_0269d1f8);
  _objc_retainAutoreleasedReturnValue();
  local_78 = &cf_darkEndColor;
  puVar8 = local_f0;
  local_38 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_lastObject_0269d200);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_70,&local_b8,9);
  _objc_retainAutoreleasedReturnValue();
  FUN_01decc7c(uVar1);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

