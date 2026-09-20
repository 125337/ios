// firstLabelNameForContact:username: @ 010dce2c

/* Function Stack Size: 0x20 bytes */

ID WCRefineNameplateHelper::firstLabelNameForContact_username_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *local_258;
  ulong local_228;
  ulong local_220;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  ID local_180;
  bool local_171;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  char *local_158;
  cfstringStruct *local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  cfstringStruct *local_108;
  ID local_e0;
  uint local_d4;
  ID local_d0;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  if ((local_c8 == 0) &&
     (IVar2 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0),
     IVar2 != 0)) {
    IVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_contactForUsername__026ae878,local_d0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_c8;
    local_c8 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if (local_c8 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &::cf___;
    local_d4 = 1;
    goto LAB_010dd9b8;
  }
  local_e0 = 0;
  IVar3 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_valueForKey__0269d128,&cf_m_nsLabelNameList);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_e0;
  local_e0 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_e0;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((IVar2 & 1) == 0) ||
     (IVar2 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0),
     IVar2 == 0)) {
    IVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_valueForKey__0269d128,&cf_labelNameList);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_e0;
    local_e0 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar2 = local_e0;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((IVar2 & 1) == 0) {
LAB_010dd300:
    pcVar6 = "MMServiceCenter";
    _objc_getClass();
    pcVar7 = "ContactLabelMgr";
    local_150 = (cfstringStruct *)pcVar6;
    _objc_getClass();
    local_158 = pcVar7;
    if ((local_150 != (cfstringStruct *)0x0) && (pcVar7 != (char *)0x0)) {
      local_258 = local_150;
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_171 = false;
      bVar1 = local_258 == (cfstringStruct *)0x0;
      local_160 = local_258;
      if (bVar1) {
        local_258 = (cfstringStruct *)0x0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_getService__0269d170,local_158);
        _objc_retainAutoreleasedReturnValue();
        local_170 = local_258;
      }
      local_171 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = local_258;
      if ((local_171 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_170);
      }
      IVar2 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_180 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
      if (IVar2 == 0) {
        IVar3 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_180;
        local_180 = IVar3;
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
      if ((local_168 == (cfstringStruct *)0x0) ||
         (IVar2 = local_180, (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0),
         IVar2 == 0)) {
LAB_010dd93c:
        local_d4 = 0;
      }
      else {
        pcVar9 = &cf_getLabelsNameForContact_;
        _NSSelectorFromString(IVar2);
        pcVar5 = local_168;
        local_190 = pcVar9;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_respondsToSelector__026ca818,pcVar9);
        if (((ulong)pcVar5 & 1) == 0) {
LAB_010dd6b8:
          pcVar9 = &cf_getLabelListForUser_;
          _NSSelectorFromString();
          pcVar5 = local_168;
          local_1a8 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_respondsToSelector__026ca818,pcVar9)
          ;
          if (((ulong)pcVar5 & 1) == 0) goto LAB_010dd93c;
          pcVar9 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,local_1a8,local_180);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_1b0 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((((ulong)pcVar9 & 1) == 0) ||
             (pcVar9 = local_1b0,
             (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_count_0269cfe0),
             pcVar9 == (cfstringStruct *)0x0)) {
LAB_010dd914:
            local_d4 = 0;
          }
          else {
            pcVar5 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_1b8 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
            pcVar9 = local_1b8;
            if (((ulong)pcVar5 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsName_026ae880);
              if (((ulong)pcVar9 & 1) != 0) {
                pcVar5 = local_1b8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_m_nsName_026ae880);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_1c0 = pcVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
                pcVar9 = local_1c0;
                bVar1 = ((ulong)pcVar5 & 1) != 0;
                if (bVar1) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_b0 = pcVar9;
                }
                local_d4 = (uint)bVar1;
                _objc_storeStrong(&local_1c0,0);
                if (local_d4 != 0) goto LAB_010dd8f8;
              }
              local_d4 = 0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = pcVar9;
              local_d4 = 1;
            }
LAB_010dd8f8:
            _objc_storeStrong(&local_1b8,0);
            if (local_d4 == 0) goto LAB_010dd914;
          }
          _objc_storeStrong(&local_1b0,0);
          if (local_d4 == 0) goto LAB_010dd93c;
        }
        else {
          pcVar9 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,local_190,local_c8);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_198 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((((ulong)pcVar9 & 1) == 0) ||
             (pcVar9 = local_198,
             (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_count_0269cfe0),
             pcVar9 == (cfstringStruct *)0x0)) {
LAB_010dd694:
            local_d4 = 0;
          }
          else {
            pcVar5 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_1a0 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
            pcVar9 = local_1a0;
            bVar1 = ((ulong)pcVar5 & 1) != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = pcVar9;
            }
            local_d4 = (uint)bVar1;
            _objc_storeStrong(&local_1a0,0);
            if (local_d4 == 0) goto LAB_010dd694;
          }
          _objc_storeStrong(&local_198,0);
          if (local_d4 == 0) goto LAB_010dd6b8;
        }
      }
      _objc_storeStrong(&local_180);
      _objc_storeStrong(&local_168,0);
      _objc_storeStrong(&local_160,0);
      if (local_d4 != 0) goto LAB_010dd9a8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &::cf___;
    local_d4 = 1;
  }
  else {
    _memset(auStack_148,0,0x40);
    IVar2 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_220 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
    if (local_220 != 0) {
      lVar8 = *local_138;
      local_228 = 0;
      do {
        do {
          if (*local_138 - lVar8 != 0) {
            _objc_enumerationMutation(*local_138 - lVar8,IVar2);
          }
          pcVar9 = *(cfstringStruct **)(local_140 + local_228 * 8);
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_108 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((((ulong)pcVar9 & 1) != 0) &&
             (pcVar5 = local_108,
             (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0),
             pcVar9 = local_108, pcVar5 != (cfstringStruct *)0x0)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = pcVar9;
            local_d4 = 1;
            goto LAB_010dd2dc;
          }
          local_228 = local_228 + 1;
        } while (local_228 < local_220);
        local_220 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10
                  );
        local_228 = 0;
      } while (local_220 != 0);
    }
    local_d4 = 0;
LAB_010dd2dc:
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (local_d4 == 0) goto LAB_010dd300;
  }
LAB_010dd9a8:
  _objc_storeStrong(&local_e0,0);
LAB_010dd9b8:
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

