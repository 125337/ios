// createReplyContentCell @ 01d223a4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCRefineRedEnvelopViewController::createReplyContentCell(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  cfstringStruct *local_1c0;
  ulong local_190;
  ulong local_188;
  bool local_149;
  cfstringStruct *local_148;
  long local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  long local_f8;
  long local_f0;
  ID local_e8;
  undefined8 local_e0;
  undefined1 local_d1;
  ID local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_redEnvelopAutoReplyCountMode_026a6ac0);
  IVar3 = local_b0;
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_currentAutoReplyContentForMode__026c42b0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  local_d1 = local_c8 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
  local_e0 = 0;
  local_d0 = IVar3;
  if ((bool)local_d1) {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = IVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_f0 = 0;
    _memset(auStack_138,0,0x40);
    IVar3 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_188 != 0) {
      lVar5 = *local_128;
      local_190 = 0;
      do {
        do {
          if (*local_128 - lVar5 != 0) {
            _objc_enumerationMutation(*local_128 - lVar5,IVar3);
          }
          lVar6 = *(long *)(local_130 + local_190 * 8);
          puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          local_f8 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar6,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_140 = lVar6;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          lVar4 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
          lVar6 = 0;
          if (lVar4 != 0) {
            lVar6 = local_f0 + 1;
            local_f0 = lVar6;
          }
          _objc_storeStrong(lVar6,&local_140,0);
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_190 = 0;
      } while (local_188 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_149 = local_f0 < 1;
    if (local_149) {
      local_1c0 = &cf_Nmo__S;
    }
    else {
      local_1c0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
      _objc_retainAutoreleasedReturnValue();
      local_148 = local_1c0;
    }
    local_149 = !local_149;
    _objc_storeStrong(&local_e0,local_1c0);
    if (local_149) {
      (*(code *)PTR__objc_release_02578630)(local_148);
    }
    _objc_storeStrong(&local_e8,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
    pcVar1 = &cf__n_;
    if (IVar3 == 0) {
      pcVar1 = &cf_pQeQ;
    }
    _objc_storeStrong(&local_e0,pcVar1);
  }
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
             PTR_s_settingReplyContent_026c42b8,local_b0,&cf_RVYvQ_,local_e0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

