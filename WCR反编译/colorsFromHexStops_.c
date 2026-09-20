// colorsFromHexStops: @ 00f8d8f4

/* Function Stack Size: 0x18 bytes */

ID WCRefineGradientPalette::colorsFromHexStops_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar1;
  _memset(auStack_110,0,0x40);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_normalizedHexStops__026acc78,local_c0);
  _objc_retainAutoreleasedReturnValue();
  local_130 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_130 != 0) {
    lVar4 = *local_100;
    local_138 = 0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,IVar2);
        }
        puVar1 = local_c8;
        local_d0 = *(undefined8 *)(local_108 + local_138 * 8);
        IVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_colorFromHex__026acc68,local_d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_138 = 0;
    } while (local_130 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

