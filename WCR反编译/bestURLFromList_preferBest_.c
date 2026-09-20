// bestURLFromList:preferBest: @ 0101ee68

/* Function Stack Size: 0x1c bytes */

ID WCRefineLinkParser::bestURLFromList_preferBest_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *local_2e0;
  undefined *local_2d8;
  ulong local_298;
  ulong local_288;
  ulong local_250;
  ulong local_248;
  undefined *local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  undefined *local_1d0;
  byte local_1c1;
  ulong local_1c0;
  byte local_1b1;
  ulong local_1b0;
  ulong local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  undefined *local_158;
  int local_150;
  byte local_149;
  ulong local_148;
  SEL local_140;
  ID local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  uVar2 = local_148;
  local_149 = (byte)param_4;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    local_130 = (undefined *)0x0;
    local_150 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar1;
    _memset(auStack_1a0,0,0x40);
    uVar2 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_248 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
    if (local_248 != 0) {
      lVar5 = *local_190;
      local_250 = 0;
      do {
        do {
          if (*local_190 - lVar5 != 0) {
            _objc_enumerationMutation(*local_190 - lVar5,uVar2);
          }
          uVar6 = *(ulong *)(local_198 + local_250 * 8);
          local_1a8 = 0;
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_160 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
          uVar3 = local_160;
          if ((uVar6 & 1) == 0) {
            puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((uVar3 & 1) != 0) {
              uVar3 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
              _objc_retainAutoreleasedReturnValue();
              local_1b1 = 0;
              local_1c1 = 0;
              local_288 = uVar3;
              if (uVar3 == 0) {
                local_298 = local_160;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_uri);
                _objc_retainAutoreleasedReturnValue();
                local_1b1 = 1;
                local_1b0 = local_298;
                if (local_298 == 0) {
                  local_298 = local_160;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_playAddr);
                  _objc_retainAutoreleasedReturnValue();
                  local_1c1 = 1;
                  local_1c0 = local_298;
                }
                local_288 = local_298;
              }
              _objc_storeStrong(&local_1a8,local_288);
              if ((local_1c1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1c0);
              }
              if ((local_1b1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1b0);
              }
              (*(code *)PTR__objc_release_02578630)(uVar3);
              uVar3 = local_1a8;
              puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
              if ((uVar3 & 1) != 0) {
                uVar6 = local_1a8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_firstObject_0269d1f8);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = local_1a8;
                local_1a8 = uVar6;
                (*(code *)PTR__objc_release_02578630)(uVar3);
              }
            }
          }
          else {
            _objc_storeStrong(&local_1a8,local_160);
          }
          uVar3 = local_1a8;
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
          if (((uVar3 & 1) != 0) &&
             (uVar3 = local_1a8,
             (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_length_0269cca0),
             puVar1 = local_158, uVar3 != 0)) {
            IVar4 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_unescapeJSONString__026adcb8,local_1a8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(IVar4);
          }
          _objc_storeStrong(&local_1a8,0);
          local_250 = local_250 + 1;
        } while (local_250 < local_248);
        local_248 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10
                  );
        local_250 = 0;
      } while (local_248 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar1 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0);
    if (puVar1 == (undefined *)0x0) {
      local_130 = (undefined *)0x0;
      local_150 = 1;
    }
    else if ((local_149 & 1) == 0) {
      puVar1 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_150 = 1;
      local_130 = puVar1;
    }
    else {
      _memset(auStack_210,0,0x40);
      puVar1 = local_158;
      (*(code *)PTR__objc_retain_02578638)();
      local_2d8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_128,0x10
                );
      if (local_2d8 != (undefined *)0x0) {
        lVar5 = *local_200;
        local_2e0 = (undefined *)0x0;
        do {
          do {
            if (*local_200 - lVar5 != 0) {
              _objc_enumerationMutation(*local_200 - lVar5,puVar1);
            }
            puVar7 = *(undefined **)(local_208 + (long)local_2e0 * 8);
            local_1d0 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_lowercaseString_0269d9c0);
            _objc_retainAutoreleasedReturnValue();
            local_218 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_containsString__0269d0b0,&cf_origin);
            if ((((((ulong)puVar7 & 1) == 0) &&
                 (puVar7 = local_218,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_218,PTR_s_containsString__0269d0b0,&cf_download),
                 ((ulong)puVar7 & 1) == 0)) &&
                (puVar7 = local_218,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_218,PTR_s_containsString__0269d0b0,&cf_ratio_1080),
                ((ulong)puVar7 & 1) == 0)) &&
               (puVar7 = local_218,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_218,PTR_s_containsString__0269d0b0,&cf_uhd),
               ((ulong)puVar7 & 1) == 0)) {
              local_150 = 0;
            }
            else {
              puVar7 = local_1d0;
              (*(code *)PTR__objc_retain_02578638)();
              local_130 = puVar7;
              local_150 = 1;
            }
            _objc_storeStrong(&local_218,0);
            if (local_150 != 0) goto LAB_0101f658;
            local_2e0 = local_2e0 + 1;
          } while (local_2e0 < local_2d8);
          local_2d8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_128,
                     0x10);
          local_2e0 = (undefined *)0x0;
        } while (local_2d8 != (undefined *)0x0);
      }
      local_150 = 0;
LAB_0101f658:
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (local_150 == 0) {
        puVar1 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_150 = 1;
        local_130 = puVar1;
      }
    }
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

