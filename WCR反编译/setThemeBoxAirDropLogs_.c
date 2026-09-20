// setThemeBoxAirDropLogs: @ 0211ddac

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setThemeBoxAirDropLogs_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0;
  ID local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c8 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar3;
  _memset(auStack_118,0,0x40);
  uVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_138 != 0) {
    lVar4 = *local_108;
    local_140 = 0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,uVar1);
        }
        uVar5 = *(ulong *)(local_110 + local_140 * 8);
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_d8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar5 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_d8);
        }
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_setObject_forKey__026ca9e8,local_d0,&cf_themeBoxAirDropLogs);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

