// firstDouyinImageURLWithoutWatermarkTemplate: @ 0103718c

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::firstDouyinImageURLWithoutWatermarkTemplate_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  _memset(auStack_110,0,0x40);
  uVar2 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_138 != 0) {
    lVar4 = *local_100;
    local_140 = 0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,uVar2);
        }
        uVar5 = *(ulong *)(local_108 + local_140 * 8);
        local_d0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
        if (((uVar5 != 0) &&
            (uVar5 = local_d0,
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_hasPrefix__0269d320,&cf_http),
            (uVar5 & 1) != 0)) &&
           (IVar3 = local_b8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_b8,PTR_s_douyinImageURLLooksWatermarkTemp_026adb38,local_d0),
           uVar5 = local_d0, (IVar3 & 1) == 0)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar5;
          bVar1 = true;
          goto LAB_01037384;
        }
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  bVar1 = false;
LAB_01037384:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (!bVar1) {
    local_b0 = 0;
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

