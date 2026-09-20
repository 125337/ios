// xhsNoteIDFromURL: @ 01049454

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::xhsNoteIDFromURL_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_178;
  undefined *local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  undefined *local_120;
  ID local_118;
  SEL local_110;
  ID local_108;
  ID local_100;
  ID local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ID local_e0;
  undefined1 auStack_d8 [128];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_118 = 0;
  local_110 = param_2;
  local_108 = param_1;
  _objc_storeStrong(&local_118,param_3);
  local_58 = &cf__explore___a_zA_Z0_9___;
  local_50 = &cf__discovery_item___a_zA_Z0_9___;
  local_48 = &cf__item___a_zA_Z0_9___;
  local_40 = &cf_noteId___a_zA_Z0_9___;
  local_38 = &cf_target_note_id___a_zA_Z0_9___;
  local_30 = &cf__notes___a_zA_Z0_9___;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6);
  _objc_retainAutoreleasedReturnValue();
  local_120 = puVar3;
  _memset(auStack_168,0,0x40);
  puVar3 = local_120;
  (*(code *)PTR__objc_retain_02578638)();
  local_1c8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_d8,0x10);
  if (local_1c8 != (undefined *)0x0) {
    lVar8 = *local_158;
    local_1d0 = (undefined *)0x0;
    do {
      do {
        if (*local_158 - lVar8 != 0) {
          _objc_enumerationMutation(*local_158 - lVar8,puVar3);
        }
        local_128 = *(undefined8 *)(local_160 + (long)local_1d0 * 8);
        puVar4 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                   PTR_s_regularExpressionWithPattern_opt_0269ef10,local_128,1,0);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = local_118;
        IVar5 = local_118;
        local_170 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
        local_f0 = 0;
        local_e8 = 0;
        local_f8 = IVar5;
        local_e0 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_firstMatchInString_options_range_0269ef48,IVar6,0,0,IVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = (undefined1 *)0x0;
        local_178 = puVar4;
        if (puVar4 == (undefined *)0x0) {
LAB_01049734:
          bVar1 = false;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberOfRanges_0269ef18);
          IVar6 = local_118;
          puVar9 = puVar4 + -1;
          if (puVar4 == (undefined *)0x0 || puVar9 == (undefined1 *)0x0) goto LAB_01049734;
          puVar4 = local_178;
          puVar7 = PTR_s_rangeAtIndex__0269ef20;
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_rangeAtIndex__0269ef20,1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar6,PTR_s_substringWithRange__0269d138,puVar4,puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
          bVar1 = true;
          local_100 = IVar6;
        }
        _objc_storeStrong(puVar9,&local_178);
        _objc_storeStrong(&local_170,0);
        bVar2 = true;
        if (bVar1) goto LAB_010497cc;
        local_1d0 = local_1d0 + 1;
      } while (local_1d0 < local_1c8);
      local_1c8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_d8,0x10)
      ;
      local_1d0 = (undefined *)0x0;
    } while (local_1c8 != (undefined *)0x0);
  }
  bVar2 = false;
LAB_010497cc:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar2) {
    local_100 = 0;
  }
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_118,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_100;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

