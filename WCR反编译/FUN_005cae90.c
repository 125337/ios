// FUN_005cae90 @ 005cae90

void FUN_005cae90(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *local_5c0;
  undefined *local_5b8;
  ulong local_560;
  ulong local_558;
  ulong local_4f8;
  ulong local_4f0;
  ulong local_498;
  ulong local_490;
  ulong local_410 [2];
  ulong local_400;
  undefined1 auStack_3f8 [8];
  long local_3f0;
  long *local_3e8;
  undefined8 local_3b8;
  undefined *local_3b0;
  undefined1 auStack_3a8 [8];
  long local_3a0;
  long *local_398;
  undefined8 local_368;
  ulong local_360;
  undefined1 auStack_358 [8];
  long local_350;
  long *local_348;
  undefined8 local_318;
  undefined1 auStack_310 [8];
  long local_308;
  long *local_300;
  undefined8 local_2d0;
  undefined4 local_2b4;
  ulong local_2b0;
  undefined8 local_2a8;
  ulong local_2a0;
  undefined1 auStack_298 [128];
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_2a0 = 0;
  _objc_storeStrong(&local_2a0,param_1);
  local_2a8 = 0;
  _objc_storeStrong(&local_2a8,param_2);
  uVar2 = local_2a0;
  local_2b0 = param_3;
  if (((local_2a0 == 0) || (local_2a0 == *(ulong *)PTR__kCFNull_025782b0)) || (5 < param_3)) {
    local_2b4 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar3 = local_2a0;
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      uVar2 = local_2a0;
      if ((uVar3 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar3 = local_2a0;
        if ((uVar2 & 1) == 0) {
          puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
          uVar2 = local_2a0;
          if ((uVar3 & 1) == 0) {
            puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
            uVar3 = local_2a0;
            if ((uVar2 & 1) == 0) {
              local_218 = &cf_m_nsLabelIDList;
              local_210 = &cf_m_nsLabelNameList;
              local_208 = &cf_labelIDList;
              local_200 = &cf_labelNameList;
              local_1f8 = &cf_labelIds;
              local_1f0 = &cf_labelIDs;
              local_1e8 = &cf_labelNames;
              local_1e0 = &cf_labels;
              local_1d8 = &cf_labelList;
              local_1d0 = &cf_tagIds;
              local_1c8 = &cf_tagIDs;
              local_1c0 = &cf_tagNames;
              local_1b8 = &cf_tags;
              local_1b0 = &cf_tagList;
              puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_218,0xe);
              _objc_retainAutoreleasedReturnValue();
              local_3b0 = puVar1;
              _memset(auStack_3f8,0,0x40);
              puVar1 = local_3b0;
              (*(code *)PTR__objc_retain_02578638)();
              local_5b8 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3f8,
                         auStack_298,0x10);
              if (local_5b8 != (undefined *)0x0) {
                lVar4 = *local_3e8;
                local_5c0 = (undefined *)0x0;
                do {
                  do {
                    if (*local_3e8 - lVar4 != 0) {
                      _objc_enumerationMutation(*local_3e8 - lVar4,puVar1);
                    }
                    local_3b8 = *(undefined8 *)(local_3f0 + (long)local_5c0 * 8);
                    uVar2 = local_2a0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2a0,PTR_s_valueForKey__0269d128,local_3b8);
                    _objc_retainAutoreleasedReturnValue();
                    local_400 = uVar2;
                    FUN_005cae90(uVar2,local_2a8,local_2b0 + 1);
                    _objc_storeStrong(&local_400,0);
                    local_5c0 = local_5c0 + 1;
                  } while (local_5c0 < local_5b8);
                  local_5b8 = puVar1;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3f8,
                             auStack_298,0x10);
                  local_5c0 = (undefined *)0x0;
                } while (local_5b8 != (undefined *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar1);
              uVar2 = local_2a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2a0,PTR_s_respondsToSelector__026ca818,PTR_s_stringValue_0269ef08);
              if ((uVar2 & 1) != 0) {
                uVar2 = local_2a0;
                (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_stringValue_0269ef08);
                _objc_retainAutoreleasedReturnValue();
                local_410[0] = uVar2;
                FUN_005cc950(uVar2,local_2a8);
                _objc_storeStrong(local_410,0);
              }
              _objc_storeStrong(&local_3b0,0);
              local_2b4 = 0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_360 = uVar3;
              _memset(auStack_3a8,0,0x40);
              uVar2 = local_360;
              (*(code *)PTR__objc_retain_02578638)();
              local_558 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3a8,
                         auStack_1a8,0x10);
              if (local_558 != 0) {
                lVar4 = *local_398;
                local_560 = 0;
                do {
                  do {
                    if (*local_398 - lVar4 != 0) {
                      _objc_enumerationMutation(*local_398 - lVar4,uVar2);
                    }
                    local_368 = *(undefined8 *)(local_3a0 + local_560 * 8);
                    FUN_005cae90(local_368,local_2a8,local_2b0 + 1);
                    uVar3 = local_360;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_360,PTR_s_objectForKeyedSubscript__0269d098,local_368);
                    _objc_retainAutoreleasedReturnValue();
                    FUN_005cae90();
                    (*(code *)PTR__objc_release_02578630)(uVar3);
                    local_560 = local_560 + 1;
                  } while (local_560 < local_558);
                  local_558 = uVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3a8,
                             auStack_1a8,0x10);
                  local_560 = 0;
                } while (local_558 != 0);
              }
              (*(code *)PTR__objc_release_02578630)(uVar2);
              local_2b4 = 1;
              _objc_storeStrong(&local_360,0);
            }
          }
          else {
            _memset(auStack_358,0,0x40);
            uVar2 = local_2a0;
            (*(code *)PTR__objc_retain_02578638)();
            local_4f0 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_358,auStack_128
                       ,0x10);
            if (local_4f0 != 0) {
              lVar4 = *local_348;
              local_4f8 = 0;
              do {
                do {
                  if (*local_348 - lVar4 != 0) {
                    _objc_enumerationMutation(*local_348 - lVar4,uVar2);
                  }
                  local_318 = *(undefined8 *)(local_350 + local_4f8 * 8);
                  FUN_005cae90(local_318,local_2a8,local_2b0 + 1);
                  local_4f8 = local_4f8 + 1;
                } while (local_4f8 < local_4f0);
                local_4f0 = uVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_358,
                           auStack_128,0x10);
                local_4f8 = 0;
              } while (local_4f0 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar2);
            local_2b4 = 1;
          }
        }
        else {
          _memset(auStack_310,0,0x40);
          uVar2 = local_2a0;
          (*(code *)PTR__objc_retain_02578638)();
          local_490 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_310,auStack_a8,
                     0x10);
          if (local_490 != 0) {
            lVar4 = *local_300;
            local_498 = 0;
            do {
              do {
                if (*local_300 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_300 - lVar4,uVar2);
                }
                local_2d0 = *(undefined8 *)(local_308 + local_498 * 8);
                FUN_005cae90(local_2d0,local_2a8,local_2b0 + 1);
                local_498 = local_498 + 1;
              } while (local_498 < local_490);
              local_490 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_310,
                         auStack_a8,0x10);
              local_498 = 0;
            } while (local_490 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar2);
          local_2b4 = 1;
        }
        goto LAB_005cba64;
      }
    }
    FUN_005cc950(local_2a0,local_2a8);
    local_2b4 = 1;
  }
LAB_005cba64:
  _objc_storeStrong(&local_2a8);
  _objc_storeStrong(&local_2a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

