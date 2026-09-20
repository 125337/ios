// allowedUsernamesForScope: @ 01abdf88

/* Function Stack Size: 0x18 bytes */

ID WCRGroupListViewController::allowedUsernamesForScope_
             (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *local_170;
  undefined *local_168;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  long local_100;
  ulong local_f8;
  undefined *local_f0;
  unsigned_long_long local_e8;
  SEL local_e0;
  ID local_d8;
  undefined1 auStack_d0 [128];
  ulong local_50 [6];
  
  local_50[5] = *(ulong *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_e8 = param_3;
  local_e0 = param_2;
  local_d8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar1;
  _memset(local_50,0,0x28);
  local_50[0] = 1;
  local_50[1] = 2;
  local_50[2] = 4;
  local_50[3] = 8;
  local_50[4] = 0x10;
  for (local_f8 = 0; puVar1 = local_f0, local_f8 < 5; local_f8 = local_f8 + 1) {
    if ((local_e8 & local_50[local_f8]) != 0) {
      _memset(auStack_140,0,0x40);
      puVar1 = PTR_WCRefineGroupDataProvider_026ce540;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_168 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_d0,0x10)
      ;
      if (local_168 != (undefined *)0x0) {
        lVar4 = *local_130;
        local_170 = (undefined *)0x0;
        do {
          do {
            if (*local_130 - lVar4 != 0) {
              _objc_enumerationMutation(*local_130 - lVar4,puVar2);
            }
            lVar5 = *(long *)(local_138 + (long)local_170 * 8);
            local_100 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_username_026a2238);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar5);
            puVar1 = local_f0;
            if (lVar3 != 0) {
              lVar3 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_username_026a2238);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(lVar3);
            }
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_d0,
                     0x10);
          local_170 = (undefined *)0x0;
        } while (local_168 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_50[5]) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

