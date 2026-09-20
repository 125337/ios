// FUN_005a36c4 @ 005a36c4

void FUN_005a36c4(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint local_30c;
  char *local_2a0;
  char *local_298;
  char *local_280;
  char *local_180;
  char *local_178;
  long local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  long local_128;
  undefined *local_120;
  char *local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  undefined *local_e0 [3];
  char *local_c8;
  undefined4 local_c0;
  byte local_b9;
  char *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (char *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_b9 = param_2;
  if (local_b8 == (char *)0x0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = 1;
    local_b0 = puVar1;
  }
  else {
    pcVar2 = "FavoritesUtil";
    _objc_getClass();
    local_c8 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      puVar1 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = 1;
      local_b0 = puVar1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_b8;
      local_e0[0] = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_contentObj_026a5990);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_b8;
      local_e8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_contentDesc_026a4a10);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar3;
      FUN_005a0828();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar2 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
      if (pcVar2 == (char *)0x0) {
        pcVar3 = local_e8;
        FUN_0059d260(local_e8,&cf_desc);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        FUN_005a0828();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_f0;
        local_f0 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      if ((((local_b9 & 1) != 0) &&
          (pcVar2 = local_f0, (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0),
          pcVar2 != (char *)0x0)) &&
         (pcVar2 = local_c8,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_c8,PTR_s_respondsToSelector__026ca818,
                    PTR_s_ConvertTextSNS2FavItem__026a59f0), ((ulong)pcVar2 & 1) != 0)) {
        pcVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_ConvertTextSNS2FavItem__026a59f0,local_b8);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = pcVar2;
        if (pcVar2 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_addObject__0269d180,pcVar2);
        }
        _objc_storeStrong(&local_f8,0);
      }
      pcVar2 = local_b8;
      FUN_005c1cf8();
      _objc_retainAutoreleasedReturnValue();
      local_100 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        pcVar2 = local_e8;
        FUN_0059d260(local_e8,&cf_type);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_e8;
        local_108 = pcVar3;
        FUN_0059d260(local_e8,&cf_mediaList);
        _objc_retainAutoreleasedReturnValue();
        local_110 = pcVar2;
        if ((local_108 == (char *)0x1a) &&
           (pcVar2 = local_c8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_c8,PTR_s_respondsToSelector__026ca818,
                      PTR_s_ConvertSNSNoteShare2FavItem__026a59f8), ((ulong)pcVar2 & 1) != 0)) {
          pcVar2 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_ConvertSNSNoteShare2FavItem__026a59f8,local_b8);
          _objc_retainAutoreleasedReturnValue();
          local_118 = pcVar2;
          if (pcVar2 != (char *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_addObject__0269d180,pcVar2);
          }
          puVar1 = local_e0[0];
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = puVar1;
          local_c0 = 1;
          _objc_storeStrong(&local_118,0);
        }
        else {
          puVar1 = local_e0[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_count_0269cfe0);
          local_120 = puVar1;
          _memset(auStack_168,0,0x40);
          pcVar2 = local_110;
          puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
          if (((ulong)pcVar2 & 1) == 0) {
            local_280 = *(char **)PTR____NSArray0___02578280;
          }
          else {
            local_280 = local_110;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_298 = local_280;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_280,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,
                     auStack_a8,0x10);
          if (local_298 != (char *)0x0) {
            lVar6 = *local_158;
            local_2a0 = (char *)0x0;
            do {
              do {
                if (*local_158 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_158 - lVar6,local_280);
                }
                lVar7 = *(long *)(local_160 + (long)local_2a0 * 8);
                local_128 = lVar7;
                FUN_0059d260(lVar7,&cf_type);
                _objc_retainAutoreleasedReturnValue();
                lVar5 = lVar7;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(lVar7);
                local_178 = (char *)0x0;
                local_170 = lVar5;
                if (lVar5 == 1) {
                  pcVar3 = local_b8;
                  FUN_005c1e60(0,local_b8,local_128);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar2 = local_178;
                  local_178 = pcVar3;
                  (*(code *)PTR__objc_release_02578630)(pcVar2);
                }
                else if (((lVar5 == 2) || (lVar5 == 3)) || (lVar5 == 5)) {
                  pcVar3 = local_b8;
                  FUN_005c2288(0,local_b8,local_128);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar2 = local_178;
                  local_178 = pcVar3;
                  (*(code *)PTR__objc_release_02578630)(pcVar2);
                }
                if (local_178 != (char *)0x0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e0[0],PTR_s_addObject__0269d180,local_178);
                }
                _objc_storeStrong(&local_178,0);
                local_2a0 = local_2a0 + 1;
              } while (local_2a0 < local_298);
              local_298 = local_280;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_280,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,
                         auStack_a8,0x10);
              local_2a0 = (char *)0x0;
            } while (local_298 != (char *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(local_280);
          puVar1 = local_e0[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_count_0269cfe0);
          if (((puVar1 == local_120) && (local_108 != (char *)0x0)) &&
             (local_108 + -1 != (char *)0x0)) {
            local_180 = (char *)0x0;
            pcVar2 = local_b8;
            FUN_005c2978(local_108 + -1);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_30c = 0;
            if (pcVar3 != (char *)0x0) {
              pcVar3 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_respondsToSelector__026ca818,
                         PTR_s_ConvertWeAppSNS2FavItem__026a5a00);
              local_30c = (uint)pcVar3;
            }
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            if ((local_30c & 1) != 0) {
              pcVar3 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_ConvertWeAppSNS2FavItem__026a5a00,local_b8);
              _objc_retainAutoreleasedReturnValue();
              pcVar2 = local_180;
              local_180 = pcVar3;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
            }
            if (local_180 == (char *)0x0) {
              pcVar3 = local_b8;
              FUN_005c2c14();
              _objc_retainAutoreleasedReturnValue();
              pcVar2 = local_180;
              local_180 = pcVar3;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
            }
            pcVar2 = "WCPlayerConfigVCDelegateUtils";
            _objc_getClass();
            if ((local_180 == (char *)0x0) &&
               (pcVar3 = pcVar2,
               (*(code *)PTR__objc_msgSend_02578628)
                         (pcVar2,PTR_s_respondsToSelector__026ca818,
                          PTR_s_generateFavFromDataItem__026a5a08), ((ulong)pcVar3 & 1) != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar2,PTR_s_generateFavFromDataItem__026a5a08,local_b8);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_180;
              local_180 = pcVar2;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
            }
            if (local_180 != (char *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_addObject__0269d180,local_180)
              ;
            }
            _objc_storeStrong(&local_180,0);
          }
          puVar1 = local_e0[0];
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = puVar1;
          local_c0 = 1;
        }
        _objc_storeStrong(&local_110,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_addObject__0269d180,pcVar2);
        puVar1 = local_e0[0];
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = puVar1;
        local_c0 = 1;
      }
      _objc_storeStrong(&local_100);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(local_e0,0);
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

