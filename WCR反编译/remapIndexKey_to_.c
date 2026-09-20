// remapIndexKey:to: @ 0107faec

/* Function Stack Size: 0x20 bytes */

void WCRefineLocalEmoticonStore::remapIndexKey_to_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  undefined *puVar5;
  ulong uVar6;
  ID IVar7;
  cfstringStruct *pcVar8;
  ID IVar9;
  long lVar10;
  ulong uVar11;
  ulong local_440;
  ulong local_438;
  cfstringStruct *local_418;
  cfstringStruct *local_410;
  cfstringStruct *local_3f8;
  cfstringStruct *local_3d0;
  ulong local_380;
  ulong local_378;
  ID local_310;
  ID local_308;
  ID local_300;
  ulong local_2f8;
  ID local_2f0;
  undefined1 auStack_2e8 [8];
  long local_2e0;
  long *local_2d8;
  ulong local_2a8;
  ID local_2a0;
  byte local_292;
  bool local_291;
  cfstringStruct *local_290;
  cfstringStruct *local_288;
  bool local_279;
  cfstringStruct *local_278;
  cfstringStruct *local_270;
  bool local_261;
  cfstringStruct *local_260;
  byte local_251;
  cfstringStruct *local_250;
  byte local_241;
  cfstringStruct *local_240;
  cfstringStruct *local_238;
  bool local_229;
  cfstringStruct *local_228;
  byte local_219;
  cfstringStruct *local_218;
  byte local_209;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  ID local_1f8;
  ID local_1f0;
  cfstringStruct *local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  ulong local_1a0;
  undefined *local_198;
  ID local_190;
  ID local_188;
  ID local_180;
  ID local_178;
  ulong local_170;
  ID local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  undefined4 local_14c;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = (cfstringStruct *)0x0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  local_148 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_148,param_4);
  pcVar2 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
  if (((pcVar2 == (cfstringStruct *)0x0) ||
      (pcVar2 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0),
      pcVar2 == (cfstringStruct *)0x0)) ||
     (pcVar2 = local_140,
     (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isEqualToString__0269ccc8,local_148),
     ((ulong)pcVar2 & 1) != 0)) {
    local_14c = 1;
  }
  else {
    pcVar2 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_stringByAppendingString__0269d398);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_148;
    local_158 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_130;
    local_160 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_pinnedMutable_026ae270);
    _objc_retainAutoreleasedReturnValue();
    local_168 = IVar4;
    for (local_170 = 0; uVar11 = local_170, IVar4 = local_168,
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0), uVar11 < IVar4;
        local_170 = local_170 + 1) {
      IVar4 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_168,PTR_s_objectAtIndexedSubscript__0269cc78,local_170);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_178 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((IVar4 & 1) == 0) {
        local_14c = 4;
      }
      else {
        IVar4 = local_178;
        (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_isEqualToString__0269ccc8,local_140);
        if ((IVar4 & 1) == 0) {
          IVar7 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_hasPrefix__0269d320,local_158);
          pcVar2 = local_160;
          IVar4 = local_178;
          if ((IVar7 & 1) != 0) {
            pcVar3 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
            (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_substringFromIndex__0269d120,pcVar3);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByAppendingString__0269d398);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168,PTR_s_setObject_atIndexedSubscript__0269e970,pcVar2,local_170);
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            (*(code *)PTR__objc_release_02578630)(IVar4);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_168,PTR_s_setObject_atIndexedSubscript__0269e970,local_148,local_170);
        }
        local_14c = 0;
      }
      _objc_storeStrong(&local_178,0);
    }
    IVar4 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_packOrderMutable_026ae278);
    _objc_retainAutoreleasedReturnValue();
    local_180 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_indexOfObject__0269e870,local_140);
    local_188 = IVar4;
    if (IVar4 != 0x7fffffffffffffff) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_180,PTR_s_setObject_atIndexedSubscript__0269e970,local_148,IVar4);
    }
    IVar4 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_remarksMutable_026ae280);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_190 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_198 = puVar5;
    _memset(auStack_1e0,0,0x40);
    IVar4 = local_190;
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    local_378 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_378 != 0) {
      lVar10 = *local_1d0;
      local_380 = 0;
      do {
        do {
          if (*local_1d0 - lVar10 != 0) {
            _objc_enumerationMutation(*local_1d0 - lVar10,IVar4);
          }
          uVar11 = *(ulong *)(local_1d8 + local_380 * 8);
          local_1e8 = (cfstringStruct *)0x0;
          local_1a0 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isEqualToString__0269ccc8,local_140);
          if ((uVar11 & 1) == 0) {
            uVar6 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_hasPrefix__0269d320,local_158);
            pcVar2 = local_160;
            uVar11 = local_1a0;
            if ((uVar6 & 1) != 0) {
              pcVar3 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar11,PTR_s_substringFromIndex__0269d120,pcVar3);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByAppendingString__0269d398);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_1e8;
              local_1e8 = pcVar2;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              (*(code *)PTR__objc_release_02578630)(uVar11);
            }
          }
          else {
            _objc_storeStrong(&local_1e8,local_148);
          }
          if (local_1e8 == (cfstringStruct *)0x0) {
            local_14c = 6;
          }
          else {
            IVar7 = local_190;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_190,PTR_s_objectForKeyedSubscript__0269d098,local_1a0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,IVar7,local_1e8);
            (*(code *)PTR__objc_release_02578630)(IVar7);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_190,PTR_s_removeObjectForKey__0269d700,local_1a0);
            local_14c = 0;
          }
          _objc_storeStrong(&local_1e8,0);
          local_380 = local_380 + 1;
        } while (local_380 < local_378);
        local_378 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_a8,0x10
                  );
        local_380 = 0;
      } while (local_378 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_190,PTR_s_addEntriesFromDictionary__026a2e30,local_198);
    IVar4 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_itemOrderMutable_026ae258);
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_objectForKeyedSubscript__0269d098,local_140);
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = IVar4;
    if (IVar4 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1f0,PTR_s_setObject_forKeyedSubscript__0269d248,IVar4,local_148);
      (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_removeObjectForKey__0269d700,local_140);
    }
    pcVar2 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = pcVar3;
    FUN_0107bd28();
    local_209 = 0;
    local_219 = 0;
    local_229 = false;
    bVar1 = ((ulong)pcVar8 & 1) == 0;
    if (bVar1) {
      local_3d0 = local_140;
    }
    else {
      local_3d0 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      local_209 = 1;
      local_208 = local_3d0;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_219 = 1;
      local_218 = local_3d0;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_228 = local_3d0;
    }
    local_229 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_200 = local_3d0;
    if ((local_229 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_228);
    }
    if ((local_219 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_218);
    }
    if ((local_209 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_208);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = pcVar3;
    FUN_0107bd28();
    local_241 = 0;
    local_251 = 0;
    local_261 = false;
    bVar1 = ((ulong)pcVar8 & 1) == 0;
    if (bVar1) {
      local_3f8 = local_148;
    }
    else {
      local_3f8 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      local_241 = 1;
      local_240 = local_3f8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_251 = 1;
      local_250 = local_3f8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_260 = local_3f8;
    }
    local_261 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_238 = local_3f8;
    if ((local_261 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_260);
    }
    if ((local_251 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_250);
    }
    if ((local_241 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_240);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_containsString__0269d0b0,&cf__);
    local_279 = false;
    bVar1 = ((ulong)pcVar2 & 1) == 0;
    if (bVar1) {
      local_410 = &::cf___;
    }
    else {
      local_410 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_140,PTR_s_stringByDeletingLastPathComponen_0269fb90);
      _objc_retainAutoreleasedReturnValue();
      local_278 = local_410;
    }
    local_279 = !bVar1;
    FUN_0107e3b0();
    _objc_retainAutoreleasedReturnValue();
    local_270 = local_410;
    if ((local_279 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_278);
    }
    pcVar2 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_containsString__0269d0b0,&cf__);
    local_291 = false;
    bVar1 = ((ulong)pcVar2 & 1) == 0;
    if (bVar1) {
      local_418 = &::cf___;
    }
    else {
      local_418 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_stringByDeletingLastPathComponen_0269fb90);
      _objc_retainAutoreleasedReturnValue();
      local_290 = local_418;
    }
    local_291 = !bVar1;
    FUN_0107e3b0();
    _objc_retainAutoreleasedReturnValue();
    local_288 = local_418;
    if ((local_291 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_290);
    }
    local_292 = local_1f8 == 0;
    local_2a0 = 0x7fffffffffffffff;
    _memset(auStack_2e8,0,0x40);
    IVar4 = local_1f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    local_438 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_438 != 0) {
      lVar10 = *local_2d8;
      local_440 = 0;
      do {
        do {
          if (*local_2d8 - lVar10 != 0) {
            _objc_enumerationMutation(*local_2d8 - lVar10,IVar4);
          }
          local_2a8 = *(ulong *)(local_2e0 + local_440 * 8);
          IVar7 = local_1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,local_2a8);
          _objc_retainAutoreleasedReturnValue();
          local_2f0 = IVar7;
          for (local_2f8 = 0; uVar11 = local_2f8, IVar7 = local_2f0,
              (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_count_0269cfe0), uVar11 < IVar7;
              local_2f8 = local_2f8 + 1) {
            IVar7 = local_2f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2f0,PTR_s_objectAtIndexedSubscript__0269cc78,local_2f8);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_300 = IVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
            if ((IVar7 & 1) == 0) {
              local_14c = 0xb;
            }
            else {
              IVar7 = local_300;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_300,PTR_s_isEqualToString__0269ccc8,local_140);
              if ((IVar7 & 1) == 0) {
                IVar9 = local_300;
                (*(code *)PTR__objc_msgSend_02578628)(local_300,PTR_s_hasPrefix__0269d320,local_158)
                ;
                pcVar2 = local_160;
                IVar7 = local_300;
                if ((IVar9 & 1) != 0) {
                  pcVar3 = local_158;
                  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar7,PTR_s_substringFromIndex__0269d120,pcVar3);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar2,PTR_s_stringByAppendingString__0269d398);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2f0,PTR_s_setObject_atIndexedSubscript__0269e970,pcVar2,local_2f8
                            );
                  (*(code *)PTR__objc_release_02578630)(pcVar2);
                  (*(code *)PTR__objc_release_02578630)(IVar7);
                }
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2f0,PTR_s_setObject_atIndexedSubscript__0269e970,local_148,
                           local_2f8);
              }
              local_14c = 0;
            }
            _objc_storeStrong(&local_300,0);
          }
          if ((local_292 & 1) != 0) {
            IVar7 = local_2f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_indexOfObject__0269e870,local_200)
            ;
            local_308 = IVar7;
            if (IVar7 == 0x7fffffffffffffff) {
              IVar7 = local_2f0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2f0,PTR_s_indexOfObject__0269e870,local_140);
              local_308 = IVar7;
            }
            if (local_308 != 0x7fffffffffffffff) {
              uVar11 = local_2a8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2a8,PTR_s_isEqualToString__0269ccc8,local_270);
              if ((uVar11 & 1) != 0) {
                local_2a0 = local_308;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2f0,PTR_s_removeObject__0269d678,local_200);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2f0,PTR_s_removeObject__0269d678,local_140);
            }
          }
          _objc_storeStrong(&local_2f0,0);
          local_440 = local_440 + 1;
        } while (local_440 < local_438);
        local_438 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,auStack_128,
                   0x10);
        local_440 = 0;
      } while (local_438 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if (((local_292 & 1) != 0) &&
       (pcVar2 = local_238, (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_length_0269cca0),
       pcVar2 != (cfstringStruct *)0x0)) {
      IVar4 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_itemOrderMutableForPack__026ae260,local_288);
      _objc_retainAutoreleasedReturnValue();
      local_310 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_removeObject__0269d678,local_238);
      (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_removeObject__0269d678,local_148);
      IVar4 = local_2a0;
      if ((local_2a0 == 0x7fffffffffffffff) ||
         ((IVar7 = local_310, (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_count_0269cfe0),
          (long)IVar7 < (long)IVar4 ||
          (pcVar2 = local_270,
          (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_isEqualToString__0269ccc8,local_288)
          , ((ulong)pcVar2 & 1) == 0)))) {
        (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_addObject__0269d180,local_238);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_310,PTR_s_insertObject_atIndex__0269eac0,local_238,local_2a0);
      }
      _objc_storeStrong(&local_310,0);
    }
    _objc_storeStrong(&local_288);
    _objc_storeStrong(&local_270,0);
    _objc_storeStrong(&local_238,0);
    _objc_storeStrong(&local_200,0);
    _objc_storeStrong(&local_1f8,0);
    _objc_storeStrong(&local_1f0,0);
    _objc_storeStrong(&local_198,0);
    _objc_storeStrong(&local_190,0);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_158,0);
    local_14c = 0;
  }
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

