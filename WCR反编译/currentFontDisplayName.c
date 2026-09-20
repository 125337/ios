// currentFontDisplayName @ 019d988c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCRefineFontBeautifyViewController::currentFontDisplayName(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_1e0;
  ulong local_198;
  ulong local_190;
  bool local_141;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  int local_12c;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar4 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  _memset(auStack_118,0,0x40);
  IVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_fontItems_026bae98);
  _objc_retainAutoreleasedReturnValue();
  local_190 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_190 != 0) {
    lVar3 = *local_108;
    local_198 = 0;
    do {
      do {
        if (*local_108 - lVar3 != 0) {
          _objc_enumerationMutation(*local_108 - lVar3,IVar2);
        }
        pcVar4 = *(cfstringStruct **)(local_110 + local_198 * 8);
        local_d8 = pcVar4;
        FUN_019d4b30(pcVar4,local_c8,local_d0);
        if (((ulong)pcVar4 & 1) != 0) {
          pcVar4 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
          _objc_retainAutoreleasedReturnValue();
          local_120 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_128 = pcVar1;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar1 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
          pcVar4 = local_128;
          if (pcVar1 == (cfstringStruct *)0x0) {
            pcVar1 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_displayName);
            _objc_retainAutoreleasedReturnValue();
            local_138 = pcVar1;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
            pcVar4 = local_138;
            if (pcVar1 == (cfstringStruct *)0x0) {
              pcVar4 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_lastPathComponent_026ca780);
              _objc_retainAutoreleasedReturnValue();
              local_b0 = pcVar4;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = pcVar4;
            }
            local_12c = 1;
            _objc_storeStrong(&local_138,0);
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = pcVar4;
            local_12c = 1;
          }
          _objc_storeStrong(&local_128);
          _objc_storeStrong(&local_120,0);
          goto LAB_019d9c7c;
        }
        local_198 = local_198 + 1;
      } while (local_198 < local_190);
      local_190 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_198 = 0;
    } while (local_190 != 0);
  }
  local_12c = 0;
LAB_019d9c7c:
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (local_12c == 0) {
    pcVar4 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      pcVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_1e0 = &cf__gb;
      }
      else {
        local_1e0 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_stringByDeletingPathExtension_0269fd18)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_140 = local_1e0;
      }
      local_141 = pcVar4 != (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_1e0;
      if (local_141) {
        (*(code *)PTR__objc_release_02578630)(local_140);
      }
      local_12c = 1;
    }
    else {
      pcVar4 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      local_12c = 1;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

