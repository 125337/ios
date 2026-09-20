// deleteOldFloatingBackgroundMediaInFolder:type: @ 019c5548

/* Function Stack Size: 0x20 bytes */

void WCRefineFloatingTabBarSettingsViewController::deleteOldFloatingBackgroundMediaInFolder_type_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *local_178;
  undefined *local_170;
  undefined *local_148;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  undefined *local_d0;
  ulong local_c8;
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
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_148 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_148;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _memset(auStack_118,0,0x40);
  puVar2 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_170 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_170 != (undefined *)0x0) {
    lVar8 = *local_108;
    local_178 = (undefined *)0x0;
    do {
      do {
        if (*local_108 - lVar8 != 0) {
          _objc_enumerationMutation(*local_108 - lVar8,puVar2);
        }
        lVar9 = *(long *)(local_110 + (long)local_178 * 8);
        local_d8 = lVar9;
        (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar9;
        FUN_019c3a4c();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar4);
        (*(code *)PTR__objc_release_02578630)(lVar9);
        if (lVar5 != 0) {
          lVar4 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsString__0269d0b0,&cf__dark);
          bVar1 = (byte)lVar4;
          uVar6 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isEqualToString__0269ccc8,&cf_night);
          if ((uVar6 & 1) == 0) {
            bVar1 = bVar1 ^ 1;
          }
          if ((bVar1 & 1) != 0) {
            puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,local_d8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_removeItemAtPath_error__0269f910,uVar7,0);
            (*(code *)PTR__objc_release_02578630)(uVar7);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
        }
        local_178 = local_178 + 1;
      } while (local_178 < local_170);
      local_170 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_178 = (undefined *)0x0;
    } while (local_170 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

