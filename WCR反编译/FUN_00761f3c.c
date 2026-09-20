// FUN_00761f3c @ 00761f3c

void FUN_00761f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong local_270;
  ulong local_268;
  cfstringStruct *local_240;
  cfstringStruct *local_228;
  cfstringStruct *local_1a8;
  uint local_19c;
  cfstringStruct *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  undefined *local_100;
  byte local_f1;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  bool local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined8 local_c8;
  ulong local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_5);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_6);
  pcVar3 = local_b8;
  local_c8 = param_7;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_d9 = false;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_228 = &cf_space_s_;
  }
  else {
    local_228 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = local_228;
  }
  local_d9 = pcVar4 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_228;
  if ((local_d9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_font_0269ea00);
  _objc_retainAutoreleasedReturnValue();
  local_f1 = 0;
  local_240 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    param_1 = 0x402e000000000000;
    local_240 = (cfstringStruct *)PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = local_240;
  }
  local_f1 = pcVar3 == (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_e8 = local_240;
  if ((local_f1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar5 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  local_100 = puVar5;
  _memset(auStack_148,0,0x40);
  uVar2 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_268 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
  if (local_268 != 0) {
    lVar7 = *local_138;
    local_270 = 0;
    do {
      do {
        if (*local_138 - lVar7 != 0) {
          _objc_enumerationMutation(*local_138 - lVar7,uVar2);
        }
        local_108 = *(undefined8 *)(local_140 + local_270 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_appendFormat__0269d148,&cf____);
        local_270 = local_270 + 1;
      } while (local_270 < local_268);
      local_268 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
      local_270 = 0;
    } while (local_268 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_pointSize_026a1d68);
  uVar8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
  uVar9 = param_3;
  local_170 = uVar8;
  local_168 = param_2;
  local_160 = param_3;
  local_158 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
  local_190 = param_3;
  local_188 = param_2;
  local_180 = uVar9;
  local_178 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_textAlignment_026a66e8);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_stringWithFormat__0269cca8,&cf___1f___1f___1f_a_ld_d_ld_____);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_b8;
  local_150 = puVar5;
  _objc_getAssociatedObject(local_b8,DAT_026f45f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isEqualToString__0269ccc8);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if (((ulong)puVar5 & 1) != 0) {
    pcVar3 = local_b8;
    _objc_getAssociatedObject(local_b8,DAT_026f45f8);
    _objc_retainAutoreleasedReturnValue();
    local_198 = pcVar3;
    if (pcVar3 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = pcVar3;
    }
    local_19c = (uint)(pcVar3 != (cfstringStruct *)0x0);
    _objc_storeStrong(&local_198,0);
    if (local_19c != 0) goto LAB_0076261c;
  }
  pcVar1 = local_d0;
  pcVar4 = local_e8;
  pcVar3 = (cfstringStruct *)PTR_WCRefineGradientPalette_026ce910;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
  uVar2 = local_c0;
  uVar8 = local_c8;
  uVar9 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
  pcVar6 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_textAlignment_026a66e8);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_4,param_1,uVar9,pcVar3,PTR_s_patternColorForText_font_minHeig_026a7d78,pcVar1,
             pcVar4,uVar2,uVar8,pcVar6);
  _objc_retainAutoreleasedReturnValue();
  local_1a8 = pcVar3;
  _objc_setAssociatedObject(local_b8,DAT_026f45f0,local_150,3);
  _objc_setAssociatedObject(local_b8,DAT_026f45f8,local_1a8,1);
  pcVar3 = local_1a8;
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = pcVar3;
  local_19c = 1;
  _objc_storeStrong(&local_1a8,0);
LAB_0076261c:
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

