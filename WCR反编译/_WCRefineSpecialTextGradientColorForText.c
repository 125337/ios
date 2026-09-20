// _WCRefineSpecialTextGradientColorForText @ 01de6ff4

void _WCRefineSpecialTextGradientColorForText
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_e0;
  undefined *local_c8;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_2);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_3);
  local_58 = (undefined *)0x0;
  local_50 = param_1;
  _objc_storeStrong(&local_58,param_4);
  local_60 = (undefined *)0x0;
  _objc_storeStrong(&local_60,param_5);
  local_79 = 0;
  bVar1 = local_58 == (undefined *)0x0;
  local_68 = param_6;
  if (bVar1) {
    local_c8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_c8;
  }
  else {
    local_c8 = local_58;
  }
  local_79 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_c8;
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if (local_60 == (undefined *)0x0) {
    local_e0 = local_70;
  }
  else {
    local_e0 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = local_40;
  uVar3 = local_48;
  uVar2 = local_50;
  puVar6 = PTR_WCRefineGradientPalette_026ce910;
  local_88 = local_e0;
  local_38 = local_70;
  local_30 = local_e0;
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,puVar6,PTR_s_patternColorForText_font_minHeig_026c58b8,uVar4,uVar3,puVar5,
             local_68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar6);
  return;
}

