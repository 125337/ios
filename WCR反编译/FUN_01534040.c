// FUN_01534040 @ 01534040

void FUN_01534040(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  char *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  long lVar11;
  char *local_2e8;
  char *local_2e0;
  ulong local_278;
  ulong local_270;
  cfstringStruct *local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  cfstringStruct *local_1e8;
  char *local_1d0;
  cfstringStruct *local_1c8;
  char *local_1c0;
  long local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  long local_170;
  ulong local_168;
  undefined *local_160;
  ulong local_158;
  undefined *local_150;
  ulong local_148;
  undefined4 local_13c;
  ulong local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  uVar1 = local_138;
  FUN_01567ff4(local_138,&cf_member_names_input);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_138;
  local_138 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (local_138 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_13c = 1;
    local_130 = puVar2;
  }
  else {
    uVar3 = local_138;
    FUN_01533eb8(local_138,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    local_148 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
      uVar1 = local_138;
      FUN_01533df4(local_138,PTR_s_m_nsUsrName_0269d638);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      FUN_01528c84();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_148;
      local_148 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar3 = local_148;
    FUN_01565254();
    if ((uVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_138;
      local_150 = puVar2;
      FUN_01533eb8(local_138,&cf_m_nsChatRoomMemList);
      _objc_retainAutoreleasedReturnValue();
      local_158 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      if (uVar3 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf___);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_158;
        local_160 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_componentsSeparatedByCharactersI_0269d1a8,puVar2);
        _objc_retainAutoreleasedReturnValue();
        local_168 = uVar3;
        _memset(auStack_1b0,0,0x40);
        uVar3 = local_168;
        (*(code *)PTR__objc_retain_02578638)();
        local_270 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10
                  );
        if (local_270 != 0) {
          lVar10 = *local_1a0;
          local_278 = 0;
          do {
            do {
              if (*local_1a0 - lVar10 != 0) {
                _objc_enumerationMutation(*local_1a0 - lVar10,uVar3);
              }
              lVar11 = *(long *)(local_1a8 + local_278 * 8);
              local_170 = lVar11;
              FUN_01528c84();
              _objc_retainAutoreleasedReturnValue();
              local_1b8 = lVar11;
              (*(code *)PTR__objc_msgSend_02578628)(lVar11,PTR_s_length_0269cca0);
              if (lVar11 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_1b8)
                ;
              }
              _objc_storeStrong(&local_1b8,0);
              local_278 = local_278 + 1;
            } while (local_278 < local_270);
            local_270 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,
                       0x10);
            local_278 = 0;
          } while (local_270 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        _objc_storeStrong(&local_168);
        _objc_storeStrong(&local_160,0);
      }
      puVar5 = local_150;
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
      puVar2 = local_150;
      if (puVar5 == (undefined *)0x0) {
        pcVar6 = "CContact";
        _objc_getClass(0);
        pcVar7 = &cf_getChatRoomMemberWithoutMyself_;
        local_1c0 = pcVar6;
        _NSSelectorFromString();
        local_1c8 = pcVar7;
        if ((local_1c0 != (char *)0x0) &&
           (pcVar6 = local_1c0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_1c0,PTR_s_respondsToSelector__026ca818,pcVar7), ((ulong)pcVar6 & 1) != 0
           )) {
          pcVar6 = local_1c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c0,local_1c8,local_138);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_1d0 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((ulong)pcVar6 & 1) != 0) {
            _memset(auStack_228,0,0x40);
            pcVar6 = local_1d0;
            (*(code *)PTR__objc_retain_02578638)();
            local_2e0 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,
                       auStack_128,0x10);
            if (local_2e0 != (char *)0x0) {
              lVar10 = *local_218;
              local_2e8 = (char *)0x0;
              do {
                do {
                  if (*local_218 - lVar10 != 0) {
                    _objc_enumerationMutation(*local_218 - lVar10,pcVar6);
                  }
                  local_1e8 = *(cfstringStruct **)(local_220 + (long)local_2e8 * 8);
                  (*(code *)PTR__objc_retain_02578638)();
                  pcVar7 = local_1e8;
                  local_230 = &cf___;
                  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar2)
                  ;
                  if (((ulong)pcVar7 & 1) == 0) {
                    pcVar8 = local_1e8;
                    FUN_01533df4(local_1e8,PTR_s_m_nsUsrName_0269d638);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar9 = pcVar8;
                    FUN_01528c84();
                    _objc_retainAutoreleasedReturnValue();
                    pcVar7 = local_230;
                    local_230 = pcVar9;
                    (*(code *)PTR__objc_release_02578630)(pcVar7);
                    (*(code *)PTR__objc_release_02578630)(pcVar8);
                  }
                  else {
                    pcVar8 = local_1e8;
                    FUN_01528c84();
                    _objc_retainAutoreleasedReturnValue();
                    pcVar7 = local_230;
                    local_230 = pcVar8;
                    (*(code *)PTR__objc_release_02578630)(pcVar7);
                  }
                  pcVar7 = local_230;
                  (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_length_0269cca0);
                  if (pcVar7 != (cfstringStruct *)0x0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_150,PTR_s_addObject__0269d180,local_230);
                  }
                  _objc_storeStrong(&local_230,0);
                  local_2e8 = local_2e8 + 1;
                } while (local_2e8 < local_2e0);
                local_2e0 = pcVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,
                           auStack_128,0x10);
                local_2e8 = (char *)0x0;
              } while (local_2e0 != (char *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar6);
          }
          _objc_storeStrong(&local_1d0,0);
        }
        puVar2 = local_150;
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = puVar2;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = puVar2;
      }
      local_13c = 1;
      _objc_storeStrong(&local_158);
      _objc_storeStrong(&local_150,0);
    }
    else {
      puVar2 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_13c = 1;
      local_130 = puVar2;
    }
    _objc_storeStrong(&local_148,0);
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

