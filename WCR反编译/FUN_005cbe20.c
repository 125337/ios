// FUN_005cbe20 @ 005cbe20

void FUN_005cbe20(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_570;
  ulong local_568;
  ulong local_510;
  ulong local_508;
  ulong local_4b0;
  ulong local_4a8;
  ulong local_448;
  ulong local_440;
  ulong local_418;
  undefined1 auStack_398 [8];
  long local_390;
  long *local_388;
  undefined8 local_358;
  undefined1 auStack_350 [8];
  long local_348;
  long *local_340;
  undefined8 local_310;
  undefined1 auStack_308 [8];
  long local_300;
  long *local_2f8;
  undefined8 local_2c8;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  ulong local_280;
  byte local_271;
  ulong local_270;
  ulong local_268 [3];
  ulong local_250;
  undefined4 local_244;
  ulong local_240;
  undefined8 local_238;
  ulong local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_230 = 0;
  _objc_storeStrong(&local_230,param_1);
  local_238 = 0;
  _objc_storeStrong(&local_238,param_2);
  local_240 = param_3;
  if (((local_230 == 0) || (local_230 == *(ulong *)PTR__kCFNull_025782b0)) ||
     (4 < param_3 && param_3 - 5 != 0)) {
    local_244 = 1;
    goto LAB_005cc8cc;
  }
  uVar4 = local_230;
  FUN_005cd174(param_3 - 5);
  _objc_retainAutoreleasedReturnValue();
  local_250 = uVar4;
  FUN_005ca0b4();
  uVar2 = local_230;
  if ((uVar4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_addObject__0269d180,local_250);
    local_244 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar4 = local_230;
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
      uVar2 = local_230;
      if ((uVar4 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar4 = local_230;
        if ((uVar2 & 1) == 0) {
          puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
          uVar2 = local_230;
          if ((uVar4 & 1) == 0) {
            puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((uVar2 & 1) != 0) {
              _memset(auStack_398,0,0x40);
              uVar2 = local_230;
              (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_allValues_0269dae8);
              _objc_retainAutoreleasedReturnValue();
              local_568 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_568 != 0) {
                lVar3 = *local_388;
                local_570 = 0;
                do {
                  do {
                    if (*local_388 - lVar3 != 0) {
                      _objc_enumerationMutation(*local_388 - lVar3,uVar2);
                    }
                    local_358 = *(undefined8 *)(local_390 + local_570 * 8);
                    FUN_005cbe20(local_358,local_238,local_240 + 1);
                    local_570 = local_570 + 1;
                  } while (local_570 < local_568);
                  local_568 = uVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_398,
                             auStack_228,0x10);
                  local_570 = 0;
                } while (local_568 != 0);
              }
              (*(code *)PTR__objc_release_02578630)(uVar2);
            }
            local_244 = 0;
          }
          else {
            _memset(auStack_350,0,0x40);
            uVar2 = local_230;
            (*(code *)PTR__objc_retain_02578638)();
            local_508 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_350,auStack_1a8
                       ,0x10);
            if (local_508 != 0) {
              lVar3 = *local_340;
              local_510 = 0;
              do {
                do {
                  if (*local_340 - lVar3 != 0) {
                    _objc_enumerationMutation(*local_340 - lVar3,uVar2);
                  }
                  local_310 = *(undefined8 *)(local_348 + local_510 * 8);
                  FUN_005cbe20(local_310,local_238,local_240 + 1);
                  local_510 = local_510 + 1;
                } while (local_510 < local_508);
                local_508 = uVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_350,
                           auStack_1a8,0x10);
                local_510 = 0;
              } while (local_508 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar2);
            local_244 = 1;
          }
        }
        else {
          _memset(auStack_308,0,0x40);
          uVar2 = local_230;
          (*(code *)PTR__objc_retain_02578638)();
          local_4a8 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_308,auStack_128,
                     0x10);
          if (local_4a8 != 0) {
            lVar3 = *local_2f8;
            local_4b0 = 0;
            do {
              do {
                if (*local_2f8 - lVar3 != 0) {
                  _objc_enumerationMutation(*local_2f8 - lVar3,uVar2);
                }
                local_2c8 = *(undefined8 *)(local_300 + local_4b0 * 8);
                FUN_005cbe20(local_2c8,local_238,local_240 + 1);
                local_4b0 = local_4b0 + 1;
              } while (local_4b0 < local_4a8);
              local_4a8 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_308,
                         auStack_128,0x10);
              local_4b0 = 0;
            } while (local_4a8 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar2);
          local_244 = 1;
        }
        goto LAB_005cc8bc;
      }
    }
    uVar2 = local_230;
    local_271 = 0;
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      local_418 = local_230;
    }
    else {
      local_418 = local_230;
      (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_stringValue_0269ef08);
      _objc_retainAutoreleasedReturnValue();
      local_271 = 1;
      local_270 = local_418;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_268[0] = local_418;
    if ((local_271 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_270);
    }
    _memset(auStack_2c0,0,0x40);
    uVar2 = local_268[0];
    FUN_005ccce0();
    _objc_retainAutoreleasedReturnValue();
    local_440 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_440 != 0) {
      lVar3 = *local_2b0;
      local_448 = 0;
      do {
        do {
          if (*local_2b0 - lVar3 != 0) {
            _objc_enumerationMutation(*local_2b0 - lVar3,uVar2);
          }
          uVar4 = *(ulong *)(local_2b8 + local_448 * 8);
          local_280 = uVar4;
          FUN_005ca0b4();
          if ((uVar4 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_addObject__0269d180,local_280);
          }
          local_448 = local_448 + 1;
        } while (local_448 < local_440);
        local_440 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_a8,0x10
                  );
        local_448 = 0;
      } while (local_440 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_244 = 1;
    _objc_storeStrong(local_268,0);
  }
LAB_005cc8bc:
  _objc_storeStrong(&local_250,0);
LAB_005cc8cc:
  _objc_storeStrong(&local_238);
  _objc_storeStrong(&local_230,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

