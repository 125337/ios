// FUN_01622a44 @ 01622a44

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01622a44(undefined8 param_1)

{
  void *pvVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_428;
  cfstringStruct *local_408;
  undefined *local_3e0;
  undefined *local_3d8;
  undefined *local_380;
  undefined *local_378;
  undefined *local_360;
  void *local_310;
  void *local_308;
  bool local_2d1;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2c0;
  bool local_2b1;
  cfstringStruct *local_2b0;
  cfstringStruct *local_2a8;
  cfstringStruct *local_2a0;
  undefined1 auStack_298 [8];
  long local_290;
  long *local_288;
  cfstringStruct *local_258;
  undefined1 auStack_250 [8];
  long local_248;
  long *local_240;
  cfstringStruct *local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  cfstringStruct *local_1c8;
  int local_1bc;
  long local_1b8;
  cfstringStruct *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = 0;
  _objc_storeStrong(&local_1b8,param_1);
  lVar5 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_length_0269cca0);
  if (lVar5 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = &cf___;
    local_1bc = 1;
  }
  else {
    pvVar1 = _memset(auStack_208,0,0x40);
    FUN_01623864();
    _objc_retainAutoreleasedReturnValue();
    local_308 = pvVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_308 != (void *)0x0) {
      lVar5 = *local_1f8;
      local_310 = (void *)0x0;
      do {
        do {
          if (*local_1f8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1f8 - lVar5,pvVar1);
          }
          pcVar7 = *(cfstringStruct **)(local_200 + (long)local_310 * 8);
          local_1c8 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar7;
          FUN_01618794();
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          if (((ulong)pcVar6 & 1) != 0) {
            pcVar2 = local_1c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
            _objc_retainAutoreleasedReturnValue();
            pcVar6 = pcVar2;
            FUN_01618794();
            _objc_retainAutoreleasedReturnValue();
            local_1b0 = pcVar6;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            local_1bc = 1;
            goto LAB_01622cf0;
          }
          local_310 = (void *)((long)local_310 + 1);
        } while (local_310 < local_308);
        local_308 = pvVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pvVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_a8,
                   0x10);
        local_310 = (void *)0x0;
      } while (local_308 != (void *)0x0);
    }
    local_1bc = 0;
LAB_01622cf0:
    (*(code *)PTR__objc_release_02578630)(pvVar1);
    if (local_1bc == 0) {
      _memset(auStack_250,0,0x40);
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_360 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        local_360 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_378 = local_360;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_360,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_128,
                 0x10);
      if (local_378 != (undefined *)0x0) {
        lVar5 = *local_240;
        local_380 = (undefined *)0x0;
        do {
          do {
            if (*local_240 - lVar5 != 0) {
              _objc_enumerationMutation(*local_240 - lVar5,local_360);
            }
            pcVar7 = *(cfstringStruct **)(local_248 + (long)local_380 * 8);
            local_210 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = pcVar7;
            FUN_01618794();
            _objc_retainAutoreleasedReturnValue();
            pcVar6 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            if (((ulong)pcVar6 & 1) != 0) {
              pcVar2 = local_210;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_210,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
              _objc_retainAutoreleasedReturnValue();
              pcVar6 = pcVar2;
              FUN_01618794();
              _objc_retainAutoreleasedReturnValue();
              local_1b0 = pcVar6;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              local_1bc = 1;
              goto LAB_01622fc8;
            }
            local_380 = local_380 + 1;
          } while (local_380 < local_378);
          local_378 = local_360;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_360,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,
                     auStack_128,0x10);
          local_380 = (undefined *)0x0;
        } while (local_378 != (undefined *)0x0);
      }
      local_1bc = 0;
LAB_01622fc8:
      (*(code *)PTR__objc_release_02578630)(local_360);
      if (local_1bc == 0) {
        _memset(auStack_298,0,0x40);
        puVar3 = PTR_WCRSuperFloatProfileStore_026cee48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_urlSchemes_026b1a10);
        _objc_retainAutoreleasedReturnValue();
        local_3d8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_3d8 != (undefined *)0x0) {
          lVar5 = *local_288;
          local_3e0 = (undefined *)0x0;
          do {
            do {
              if (*local_288 - lVar5 != 0) {
                _objc_enumerationMutation(*local_288 - lVar5,puVar3);
              }
              pcVar6 = *(cfstringStruct **)(local_290 + (long)local_3e0 * 8);
              local_258 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
              _objc_retainAutoreleasedReturnValue();
              pcVar2 = pcVar6;
              FUN_01618794();
              _objc_retainAutoreleasedReturnValue();
              local_2a0 = pcVar2;
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              pcVar2 = local_2a0;
              (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_length_0269cca0);
              if (pcVar2 == (cfstringStruct *)0x0) {
                local_408 = &cf___;
              }
              else {
                local_408 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf______);
                _objc_retainAutoreleasedReturnValue();
                local_2b0 = local_408;
              }
              local_2b1 = pcVar2 != (cfstringStruct *)0x0;
              (*(code *)PTR__objc_retain_02578638)();
              local_2a8 = local_408;
              if (local_2b1) {
                (*(code *)PTR__objc_release_02578630)(local_2b0);
              }
              pcVar2 = local_2a8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2a8,PTR_s_isEqualToString__0269ccc8,local_1b8);
              if (((ulong)pcVar2 & 1) == 0) {
                local_1bc = 0;
              }
              else {
                pcVar2 = local_258;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_258,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
                _objc_retainAutoreleasedReturnValue();
                pcVar6 = pcVar2;
                FUN_01618794();
                _objc_retainAutoreleasedReturnValue();
                pcVar7 = pcVar6;
                (*(code *)PTR__objc_msgSend_02578628)();
                if (pcVar7 == (cfstringStruct *)0x0) {
                  local_428 = &cf_icons_outlined_link;
                }
                else {
                  local_2c0 = local_258;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_258,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
                  _objc_retainAutoreleasedReturnValue();
                  local_428 = local_2c0;
                  FUN_01618794();
                  _objc_retainAutoreleasedReturnValue();
                  local_2d0 = local_428;
                }
                local_2d1 = pcVar7 != (cfstringStruct *)0x0;
                (*(code *)PTR__objc_retain_02578638)();
                local_1b0 = local_428;
                if (local_2d1) {
                  (*(code *)PTR__objc_release_02578630)(local_2d0);
                  (*(code *)PTR__objc_release_02578630)(local_2c0);
                }
                (*(code *)PTR__objc_release_02578630)(pcVar6);
                (*(code *)PTR__objc_release_02578630)(pcVar2);
                local_1bc = 1;
              }
              _objc_storeStrong(&local_2a8);
              _objc_storeStrong(&local_2a0,0);
              if (local_1bc != 0) goto LAB_0162343c;
              local_3e0 = local_3e0 + 1;
            } while (local_3e0 < local_3d8);
            local_3d8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,
                       auStack_1a8,0x10);
            local_3e0 = (undefined *)0x0;
          } while (local_3d8 != (undefined *)0x0);
        }
        local_1bc = 0;
LAB_0162343c:
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (local_1bc == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_1b0 = &cf___;
          local_1bc = 1;
        }
      }
    }
  }
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_1b0);
  return;
}

