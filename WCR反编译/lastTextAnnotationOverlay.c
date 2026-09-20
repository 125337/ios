// lastTextAnnotationOverlay @ 0164f038

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatCropViewController::lastTextAnnotationOverlay(ID param_1,SEL param_2)

{
  bool bVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  _memset(auStack_108,0,0x40);
  IVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_floatingOverlays_026b1e00);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  local_138 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_138 != 0) {
    lVar5 = *local_f8;
    local_140 = 0;
    do {
      do {
        if (*local_f8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar5,IVar4);
        }
        uVar6 = *(ulong *)(local_100 + local_140 * 8);
        local_c8 = uVar6;
        FUN_0164f268();
        uVar2 = local_c8;
        if ((uVar6 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar2;
          bVar1 = true;
          goto LAB_0164f200;
        }
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  bVar1 = false;
LAB_0164f200:
  (*(code *)PTR__objc_release_02578630)(IVar4);
  if (!bVar1) {
    local_b0 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

