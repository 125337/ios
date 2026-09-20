// FUN_004f82ec @ 004f82ec

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004f82ec(undefined8 param_1)

{
  short sVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  undefined *local_1d0;
  undefined *local_1c8;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  undefined *local_108;
  int local_100;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined *local_d8;
  undefined1 auStack_d0 [128];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_f0,param_1);
  pcVar2 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = &cf___;
    local_100 = 1;
    goto LAB_004f8a34;
  }
  local_50 = &cf__1__;
  local_48 = &cf__2__;
  local_40 = &cf___;
  local_38 = &cf__NAME_;
  local_30 = &cf___NAME_;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5);
  _objc_retainAutoreleasedReturnValue();
  local_108 = puVar3;
  _memset(auStack_150,0,0x40);
  puVar3 = local_108;
  (*(code *)PTR__objc_retain_02578638)();
  local_1c8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_d0,0x10);
  if (local_1c8 != (undefined *)0x0) {
    lVar7 = *local_140;
    local_1d0 = (undefined *)0x0;
    do {
      do {
        if (*local_140 - lVar7 != 0) {
          _objc_enumerationMutation(*local_140 - lVar7,puVar3);
        }
        local_110 = *(undefined8 *)(local_148 + (long)local_1d0 * 8);
        pcVar2 = local_f0;
        puVar5 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_rangeOfString__0269d838,local_110);
        local_160 = pcVar2;
        puStack_158 = puVar5;
        if (pcVar2 != (cfstringStruct *)0x7fffffffffffffff) {
          pcVar4 = local_f0;
          local_e0 = pcVar2;
          local_d8 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f0,PTR_s_substringFromIndex__0269d120,puVar5 + (long)pcVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          local_168 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_168;
          local_168 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          goto LAB_004f8648;
        }
        local_1d0 = local_1d0 + 1;
      } while (local_1d0 < local_1c8);
      local_1c8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_d0,0x10)
      ;
      local_1d0 = (undefined *)0x0;
    } while (local_1c8 != (undefined *)0x0);
  }
  local_100 = 0;
  goto LAB_004f8904;
LAB_004f8648:
  pcVar2 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) goto LAB_004f8840;
  pcVar2 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_characterAtIndex__0269fa18,0);
  sVar1 = (short)pcVar2;
  if (((sVar1 != 0x22) && (sVar1 != 0x201c)) && (sVar1 != 0x201d)) goto LAB_004f8840;
  pcVar4 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_substringFromIndex__0269d120,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_168;
  local_168 = pcVar6;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  goto LAB_004f8648;
LAB_004f8840:
  pcVar2 = local_168;
  (*(code *)PTR__objc_retain_02578638)();
  local_e8 = pcVar2;
  local_100 = 1;
  _objc_storeStrong(&local_168,0);
LAB_004f8904:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  pcVar2 = local_f0;
  if (local_100 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_100 = 1;
  }
  _objc_storeStrong(&local_108,0);
LAB_004f8a34:
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_e8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

