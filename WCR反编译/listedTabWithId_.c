// listedTabWithId: @ 01e46fbc

/* Function Stack Size: 0x18 bytes */

ID WCRefineTelegramGroupingTabsViewController::listedTabWithId_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined *local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  _memset(auStack_110,0,0x40);
  IVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_listedTabs_026c6550);
  _objc_retainAutoreleasedReturnValue();
  local_138 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_138 != 0) {
    lVar4 = *local_100;
    local_140 = 0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,IVar2);
        }
        puVar5 = *(undefined **)(local_108 + local_140 * 8);
        local_d0 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_tabId_026a8270);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = local_d0;
        if (((ulong)puVar3 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = puVar5;
          bVar1 = true;
          goto LAB_01e471b0;
        }
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  bVar1 = false;
LAB_01e471b0:
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (!bVar1) {
    puVar5 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

