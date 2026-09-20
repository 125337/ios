// FUN_01bf1350 @ 01bf1350

void FUN_01bf1350(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_168;
  undefined *local_160;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  int local_d4;
  ulong local_d0;
  ulong local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  if (local_d0 == 0) {
    local_c8 = 0;
    local_d4 = 1;
  }
  else {
    _memset(auStack_120,0,0x40);
    local_c0 = &cf_poiName;
    local_b8 = &cf_nsPoiName;
    local_b0 = &cf_poiAddress;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_160 != (undefined *)0x0) {
      lVar5 = *local_110;
      local_168 = (undefined *)0x0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,puVar1);
          }
          local_e0 = *(undefined8 *)(local_118 + (long)local_168 * 8);
          uVar2 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_valueForKey__0269d128,local_e0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_128 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          uVar6 = uVar2 & 0xffffffff;
          if ((uVar2 & 1) == 0) {
LAB_01bf159c:
            local_d4 = 0;
          }
          else {
            uVar4 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
            uVar2 = local_128;
            uVar6 = 0;
            if (uVar4 == 0) goto LAB_01bf159c;
            (*(code *)PTR__objc_retain_02578638)();
            local_c8 = uVar2;
            uVar6 = 1;
            local_d4 = 1;
          }
          _objc_storeStrong(uVar6,&local_128,0);
          if (local_d4 != 0) goto LAB_01bf1628;
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_168 = (undefined *)0x0;
      } while (local_160 != (undefined *)0x0);
    }
    local_d4 = 0;
LAB_01bf1628:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_d4 == 0) {
      local_c8 = 0;
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

