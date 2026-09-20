// fillXHSResult:fromJSON: @ 0104c324

/* Function Stack Size: 0x20 bytes */

void WCRefineLinkParser::fillXHSResult_fromJSON_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *local_448;
  undefined *local_440;
  undefined *local_3f0;
  undefined *local_3e8;
  ulong local_390;
  ulong local_360;
  ulong local_358;
  undefined1 auStack_310 [8];
  long local_308;
  long *local_300;
  ulong local_2d0;
  undefined1 auStack_2c8 [8];
  long local_2c0;
  long *local_2b8;
  ulong local_288;
  byte local_279;
  undefined *local_278;
  byte local_269;
  undefined *local_268;
  byte local_259;
  undefined *local_258;
  undefined *local_250;
  undefined *local_248;
  undefined *local_240;
  int local_234;
  ulong local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  ulong local_1e8;
  ID local_1e0;
  undefined8 local_1d8;
  ulong local_1d0;
  SEL local_1c8;
  ID local_1c0;
  undefined1 auStack_1b8 [128];
  undefined1 auStack_138 [128];
  undefined1 auStack_b8 [128];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1d0 = 0;
  local_1c8 = param_2;
  local_1c0 = param_1;
  _objc_storeStrong(&local_1d0,param_3);
  local_1d8 = 0;
  _objc_storeStrong(&local_1d8,param_4);
  IVar4 = local_1c0;
  uVar1 = local_1d8;
  local_38 = &cf_note;
  local_30 = &cf_noteDetailMap;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_deepValue_path__026ae010,uVar1);
  _objc_retainAutoreleasedReturnValue();
  local_1e0 = IVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar4 = local_1e0;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((IVar4 & 1) != 0) {
    _memset(auStack_228,0,0x40);
    IVar4 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_allValues_0269dae8);
    _objc_retainAutoreleasedReturnValue();
    local_358 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_358 != 0) {
      lVar6 = *local_218;
      local_360 = 0;
      do {
        do {
          if (*local_218 - lVar6 != 0) {
            _objc_enumerationMutation(*local_218 - lVar6,IVar4);
          }
          uVar7 = *(ulong *)(local_220 + local_360 * 8);
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_1e8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar7 & 1) != 0) {
            uVar7 = local_1e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_note);
            _objc_retainAutoreleasedReturnValue();
            local_390 = uVar7;
            if (uVar7 == 0) {
              local_390 = local_1e8;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_230 = local_390;
            (*(code *)PTR__objc_release_02578630)(uVar7);
            uVar7 = local_230;
            puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
            if ((uVar7 & 1) == 0) {
LAB_0104c678:
              local_234 = 0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c0,PTR_s_fillXHSResult_fromNoteDict__026ae058,local_1d0,local_230);
              uVar7 = local_1d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_hasMedia_026ada58);
              if ((uVar7 & 1) == 0) goto LAB_0104c678;
              local_234 = 1;
            }
            _objc_storeStrong(&local_230,0);
            if (local_234 != 0) goto LAB_0104c700;
          }
          local_360 = local_360 + 1;
        } while (local_360 < local_358);
        local_358 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_b8,0x10
                  );
        local_360 = 0;
      } while (local_358 != 0);
    }
    local_234 = 0;
LAB_0104c700:
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if (local_234 != 0) goto LAB_0104ceb8;
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_1d8);
  _objc_retainAutoreleasedReturnValue();
  local_240 = puVar3;
  do {
    puVar3 = local_240;
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_count_0269cfe0);
    if (puVar3 == (undefined *)0x0) {
      local_234 = 0;
      break;
    }
    puVar3 = local_240;
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_lastObject_0269d200);
    _objc_retainAutoreleasedReturnValue();
    local_248 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_removeLastObject_0269e830);
    puVar3 = local_248;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    puVar5 = local_248;
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)puVar5 & 1) != 0) {
        _memset(auStack_310,0,0x40);
        puVar3 = local_248;
        (*(code *)PTR__objc_retain_02578638)();
        local_440 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_310,auStack_1b8,
                   0x10);
        if (local_440 != (undefined *)0x0) {
          lVar6 = *local_300;
          local_448 = (undefined *)0x0;
          do {
            do {
              if (*local_300 - lVar6 != 0) {
                _objc_enumerationMutation(*local_300 - lVar6,puVar3);
              }
              uVar8 = *(ulong *)(local_308 + (long)local_448 * 8);
              puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_2d0 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar5);
              uVar7 = local_2d0;
              if ((uVar8 & 1) == 0) {
                puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
                if ((uVar7 & 1) != 0) goto LAB_0104cde0;
              }
              else {
LAB_0104cde0:
                (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_addObject__0269d180,local_2d0)
                ;
              }
              local_448 = local_448 + 1;
            } while (local_448 < local_440);
            local_440 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_310,
                       auStack_1b8,0x10);
            local_448 = (undefined *)0x0;
          } while (local_440 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
LAB_0104ce7c:
      local_234 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_250 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_imageList);
      _objc_retainAutoreleasedReturnValue();
      local_259 = 0;
      local_269 = 0;
      local_279 = 0;
      bVar2 = true;
      if (puVar5 == (undefined *)0x0) {
        puVar3 = local_250;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_250,PTR_s_objectForKeyedSubscript__0269d098,&cf_image_list);
        _objc_retainAutoreleasedReturnValue();
        local_259 = 1;
        bVar2 = true;
        local_258 = puVar3;
        if (puVar3 == (undefined *)0x0) {
          puVar3 = local_250;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_250,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
          _objc_retainAutoreleasedReturnValue();
          local_269 = 1;
          bVar2 = true;
          local_268 = puVar3;
          if (puVar3 == (undefined *)0x0) {
            puVar3 = local_250;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_250,PTR_s_objectForKeyedSubscript__0269d098,&cf_media);
            _objc_retainAutoreleasedReturnValue();
            local_279 = 1;
            bVar2 = puVar3 != (undefined *)0x0;
            local_278 = puVar3;
          }
        }
      }
      if ((local_279 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_278);
      }
      if ((local_269 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_268);
      }
      if ((local_259 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_258);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (bVar2) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_fillXHSResult_fromNoteDict__026ae058,local_1d0,local_250);
        uVar7 = local_1d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_hasMedia_026ada58);
        if ((uVar7 & 1) == 0) goto LAB_0104ca3c;
        local_234 = 1;
      }
      else {
LAB_0104ca3c:
        _memset(auStack_2c8,0,0x40);
        puVar3 = local_250;
        (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_allValues_0269dae8);
        _objc_retainAutoreleasedReturnValue();
        local_3e8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_3e8 != (undefined *)0x0) {
          lVar6 = *local_2b8;
          local_3f0 = (undefined *)0x0;
          do {
            do {
              if (*local_2b8 - lVar6 != 0) {
                _objc_enumerationMutation(*local_2b8 - lVar6,puVar3);
              }
              uVar8 = *(ulong *)(local_2c0 + (long)local_3f0 * 8);
              puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_288 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar5);
              uVar7 = local_288;
              if ((uVar8 & 1) == 0) {
                puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
                if ((uVar7 & 1) != 0) goto LAB_0104cb94;
              }
              else {
LAB_0104cb94:
                (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_addObject__0269d180,local_288)
                ;
              }
              local_3f0 = local_3f0 + 1;
            } while (local_3f0 < local_3e8);
            local_3e8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,
                       auStack_138,0x10);
            local_3f0 = (undefined *)0x0;
          } while (local_3e8 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_234 = 0;
      }
      _objc_storeStrong(&local_250,0);
      if (local_234 == 0) goto LAB_0104ce7c;
    }
    _objc_storeStrong(&local_248,0);
  } while (local_234 == 0);
  _objc_storeStrong(local_234,&local_240,0);
LAB_0104ceb8:
  _objc_storeStrong(&local_1e0);
  _objc_storeStrong(&local_1d8,0);
  _objc_storeStrong(&local_1d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

