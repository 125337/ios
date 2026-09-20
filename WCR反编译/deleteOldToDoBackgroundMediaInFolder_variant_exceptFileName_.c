// deleteOldToDoBackgroundMediaInFolder:variant:exceptFileName: @ 01ecf7ac

/* Function Stack Size: 0x28 bytes */

void WCRefineToDoListSettingsViewController::
     deleteOldToDoBackgroundMediaInFolder_variant_exceptFileName_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_190;
  undefined *local_188;
  undefined *local_160;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  byte local_d1;
  long local_d0;
  undefined8 local_c8;
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
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  uVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isEqualToString__0269ccc8,&cf_dark);
  local_d1 = (byte)uVar1;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_160 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_160 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = local_160;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _memset(auStack_128,0,0x40);
  puVar2 = local_e0;
  (*(code *)PTR__objc_retain_02578638)();
  local_188 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_188 != (undefined *)0x0) {
    lVar7 = *local_118;
    local_190 = (undefined *)0x0;
    do {
      do {
        if (*local_118 - lVar7 != 0) {
          _objc_enumerationMutation(*local_118 - lVar7,puVar2);
        }
        local_e8 = *(ulong *)(local_120 + (long)local_190 * 8);
        IVar4 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_isSupportedToDoBackgroundMediaFi_026c7c98,local_e8);
        if (((IVar4 & 1) != 0) &&
           (((lVar5 = local_d0,
             (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0), lVar5 == 0 ||
             (uVar6 = local_e8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_e8,PTR_s_isEqualToString__0269ccc8,local_d0), (uVar6 & 1) == 0)) &&
            (IVar4 = local_b0,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_isToDoBackgroundDarkFileName__026c7c90,local_e8),
            ((byte)IVar4 & 1) == (local_d1 & 1))))) {
          puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,local_e8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_removeItemAtPath_error__0269f910,uVar1,0);
          (*(code *)PTR__objc_release_02578630)(uVar1);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        local_190 = local_190 + 1;
      } while (local_190 < local_188);
      local_188 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      local_190 = (undefined *)0x0;
    } while (local_188 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

