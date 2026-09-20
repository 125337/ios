// FUN_0113cdac @ 0113cdac

undefined8 FUN_0113cdac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_3a0;
  ulong local_398;
  ulong local_360;
  ulong local_358;
  ulong local_320;
  ulong local_318;
  undefined1 auStack_2c8 [8];
  long local_2c0;
  long *local_2b8;
  ulong local_288;
  undefined1 auStack_280 [8];
  long local_278;
  long *local_270;
  ulong local_240;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  ulong local_1f8;
  undefined *local_1f0;
  ulong local_1e8;
  ulong local_1e0;
  int local_1d4;
  ulong local_1d0;
  undefined8 local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  undefined8 local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = 0;
  _objc_storeStrong(&local_1b8,param_1);
  local_1c0 = 0;
  _objc_storeStrong(&local_1c0,param_2);
  local_1c8 = 0;
  _objc_storeStrong(&local_1c8,param_3);
  uVar1 = local_1c0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_menu_visibility);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_1d0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
    local_1b0 = 0;
    local_1d4 = 1;
    goto LAB_0113d78c;
  }
  uVar1 = local_1d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_gates)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_1e0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
LAB_0113d2d4:
    _memset(auStack_238,0,0x40);
    uVar1 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_cloudHiddenMenuFeatureIDs_026af3f0);
    _objc_retainAutoreleasedReturnValue();
    local_318 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_318 != 0) {
      lVar4 = *local_228;
      local_320 = 0;
      do {
        do {
          if (*local_228 - lVar4 != 0) {
            _objc_enumerationMutation(*local_228 - lVar4,uVar1);
          }
          uVar5 = *(ulong *)(local_230 + local_320 * 8);
          local_1f8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isEqualToString__0269ccc8,local_1c8);
          if ((uVar5 & 1) != 0) {
            local_1b0 = 1;
            local_1d4 = 1;
            goto LAB_0113d43c;
          }
          local_320 = local_320 + 1;
        } while (local_320 < local_318);
        local_318 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_a8,0x10
                  );
        local_320 = 0;
      } while (local_318 != 0);
    }
    local_1d4 = 0;
LAB_0113d43c:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_1d4 == 0) {
      _memset(auStack_280,0,0x40);
      uVar1 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b8,PTR_s_cloudInternalOnlyMenuFeatureIDs_026af3f8);
      _objc_retainAutoreleasedReturnValue();
      local_358 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_358 != 0) {
        lVar4 = *local_270;
        local_360 = 0;
        do {
          do {
            if (*local_270 - lVar4 != 0) {
              _objc_enumerationMutation(*local_270 - lVar4,uVar1);
            }
            uVar5 = *(ulong *)(local_278 + local_360 * 8);
            local_240 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isEqualToString__0269ccc8,local_1c8);
            if ((uVar5 & 1) != 0) {
              local_1b0 = 3;
              local_1d4 = 1;
              goto LAB_0113d5c4;
            }
            local_360 = local_360 + 1;
          } while (local_360 < local_358);
          local_358 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,auStack_128,
                     0x10);
          local_360 = 0;
        } while (local_358 != 0);
      }
      local_1d4 = 0;
LAB_0113d5c4:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_1d4 == 0) {
        _memset(auStack_2c8,0,0x40);
        uVar1 = local_1b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_cloudBetaOnlyMenuFeatureIDs_026af400);
        _objc_retainAutoreleasedReturnValue();
        local_398 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_398 != 0) {
          lVar4 = *local_2b8;
          local_3a0 = 0;
          do {
            do {
              if (*local_2b8 - lVar4 != 0) {
                _objc_enumerationMutation(*local_2b8 - lVar4,uVar1);
              }
              uVar5 = *(ulong *)(local_2c0 + local_3a0 * 8);
              local_288 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isEqualToString__0269ccc8,local_1c8)
              ;
              if ((uVar5 & 1) != 0) {
                local_1b0 = 4;
                local_1d4 = 1;
                goto LAB_0113d74c;
              }
              local_3a0 = local_3a0 + 1;
            } while (local_3a0 < local_398);
            local_398 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_1a8
                       ,0x10);
            local_3a0 = 0;
          } while (local_398 != 0);
        }
        local_1d4 = 0;
LAB_0113d74c:
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (local_1d4 == 0) {
          local_1b0 = 0;
          local_1d4 = 1;
        }
      }
    }
  }
  else {
    uVar1 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1e0,PTR_s_objectForKeyedSubscript__0269d098,local_1c8);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = uVar1;
    if (uVar1 == 0) {
LAB_0113d2b0:
      local_1d4 = 0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_1f0 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_1f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_isEqualToString__0269ccc8,&cf_hidden);
      if (((((ulong)puVar2 & 1) == 0) &&
          (puVar2 = local_1f0,
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_isEqualToString__0269ccc8,&cf_hide),
          ((ulong)puVar2 & 1) == 0)) &&
         (puVar2 = local_1f0,
         (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_isEqualToString__0269ccc8,&cf_off),
         ((ulong)puVar2 & 1) == 0)) {
        puVar2 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1f0,PTR_s_isEqualToString__0269ccc8,&cf_internal_only);
        if (((((ulong)puVar2 & 1) == 0) &&
            (puVar2 = local_1f0,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1f0,PTR_s_isEqualToString__0269ccc8,&cf_internal),
            ((ulong)puVar2 & 1) == 0)) &&
           (puVar2 = local_1f0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_1f0,PTR_s_isEqualToString__0269ccc8,&cf_insider),
           ((ulong)puVar2 & 1) == 0)) {
          puVar2 = local_1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f0,PTR_s_isEqualToString__0269ccc8,&cf_beta_only);
          if (((((ulong)puVar2 & 1) == 0) &&
              (puVar2 = local_1f0,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f0,PTR_s_isEqualToString__0269ccc8,&cf_debug_only),
              ((ulong)puVar2 & 1) == 0)) &&
             ((puVar2 = local_1f0,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f0,PTR_s_isEqualToString__0269ccc8,&cf_beta),
              ((ulong)puVar2 & 1) == 0 &&
              (puVar2 = local_1f0,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f0,PTR_s_isEqualToString__0269ccc8,&cf_debug),
              ((ulong)puVar2 & 1) == 0)))) {
            puVar2 = local_1f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1f0,PTR_s_isEqualToString__0269ccc8,&cf_authorized_only);
            if (((((ulong)puVar2 & 1) == 0) &&
                (puVar2 = local_1f0,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1f0,PTR_s_isEqualToString__0269ccc8,&cf_authorized),
                ((ulong)puVar2 & 1) == 0)) &&
               (puVar2 = local_1f0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_1f0,PTR_s_isEqualToString__0269ccc8,&cf_auth),
               ((ulong)puVar2 & 1) == 0)) {
              puVar2 = local_1f0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f0,PTR_s_isEqualToString__0269ccc8,&cf_all);
              if (((((ulong)puVar2 & 1) == 0) &&
                  (puVar2 = local_1f0,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1f0,PTR_s_isEqualToString__0269ccc8,&cf_visible),
                  ((ulong)puVar2 & 1) == 0)) &&
                 (puVar2 = local_1f0,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_1f0,PTR_s_isEqualToString__0269ccc8,&cf_on),
                 ((ulong)puVar2 & 1) == 0)) {
                local_1d4 = 0;
              }
              else {
                local_1b0 = 2;
                local_1d4 = 1;
              }
            }
            else {
              local_1b0 = 5;
              local_1d4 = 1;
            }
          }
          else {
            local_1b0 = 4;
            local_1d4 = 1;
          }
        }
        else {
          local_1b0 = 3;
          local_1d4 = 1;
        }
      }
      else {
        local_1b0 = 1;
        local_1d4 = 1;
      }
      _objc_storeStrong(&local_1f0,0);
      if (local_1d4 == 0) goto LAB_0113d2b0;
    }
    _objc_storeStrong(&local_1e8,0);
    if (local_1d4 == 0) goto LAB_0113d2d4;
  }
  _objc_storeStrong(&local_1e0,0);
LAB_0113d78c:
  _objc_storeStrong(&local_1d0);
  _objc_storeStrong(&local_1c8,0);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_1b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

