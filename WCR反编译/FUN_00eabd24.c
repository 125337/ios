// FUN_00eabd24 @ 00eabd24

void FUN_00eabd24(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  ulong local_168;
  ulong local_160;
  cfstringStruct *local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  ulong local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  _memset(auStack_108,0,0x40);
  uVar3 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_160 != 0) {
    lVar7 = *local_f8;
    local_168 = 0;
    do {
      do {
        if (*local_f8 - lVar7 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar7,uVar3);
        }
        local_c8 = *(undefined8 *)(local_100 + local_168 * 8);
        pcVar4 = local_b8;
        FUN_00eacaa4(local_b8,local_c8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_110 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((((ulong)pcVar4 & 1) == 0) ||
           (pcVar4 = local_110,
           (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0),
           pcVar4 == (cfstringStruct *)0x0)) {
          pcVar6 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_valueForKey__0269d128,local_c8);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_110;
          local_110 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
        pcVar4 = local_110;
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((((ulong)pcVar4 & 1) == 0) ||
           (pcVar4 = local_110,
           (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0),
           pcVar4 == (cfstringStruct *)0x0)) {
          bVar1 = false;
        }
        else {
          pcVar6 = local_110;
          FUN_00eaa404(pcVar4);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          local_b0 = pcVar6;
        }
        _objc_storeStrong(&local_110,0);
        bVar2 = true;
        if (bVar1) goto LAB_00eac07c;
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_168 = 0;
    } while (local_160 != 0);
  }
  bVar2 = false;
LAB_00eac07c:
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (!bVar2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

