// FUN_002b64a4 @ 002b64a4

void FUN_002b64a4(void)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined *local_218;
  undefined *local_210;
  undefined *local_1e8;
  cfstringStruct *local_190;
  cfstringStruct *local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  cfstringStruct *local_110;
  undefined *local_108;
  undefined *local_100 [2];
  uint local_f0;
  byte local_e9;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0 [3];
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar5 = &cf_CAppViewControllerManager;
  _NSClassFromString();
  pcVar2 = &cf_getTabBarController;
  local_b8 = pcVar5;
  _NSSelectorFromString();
  local_c0 = pcVar2;
  if ((local_b8 != (cfstringStruct *)0x0) &&
     (pcVar5 = local_b8,
     (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar5 & 1) != 0)) {
    pcVar5 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,local_c0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UITabBarController_026ce108;
    local_c8 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar5 & 1) == 0) {
LAB_002b67cc:
      local_f0 = 0;
    }
    else {
      pcVar5 = local_c8;
      FUN_002b7bc4();
      _objc_retainAutoreleasedReturnValue();
      local_e9 = 0;
      local_190 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_190 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_tabBar_0269e518);
        _objc_retainAutoreleasedReturnValue();
        local_e8 = local_190;
      }
      local_e9 = pcVar5 == (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_e0[0] = local_190;
      if ((local_e9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_e8);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_e0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_e0[0];
      bVar1 = ((ulong)pcVar2 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = pcVar5;
      }
      local_f0 = (uint)bVar1;
      _objc_storeStrong(local_e0,0);
      if (local_f0 == 0) goto LAB_002b67cc;
    }
    _objc_storeStrong(&local_c8,0);
    if (local_f0 != 0) goto LAB_002b6b74;
  }
  puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  local_100[0] = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_windows_0269dde0);
  _objc_retainAutoreleasedReturnValue();
  local_1e8 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_1e8 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_108 = local_1e8;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _memset(auStack_150,0,0x40);
  puVar3 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_reverseObjectEnumerator_0269d220);
  _objc_retainAutoreleasedReturnValue();
  local_210 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_210 != (undefined *)0x0) {
    lVar4 = *local_140;
    local_218 = (undefined *)0x0;
    do {
      do {
        if (*local_140 - lVar4 != 0) {
          _objc_enumerationMutation(*local_140 - lVar4,puVar3);
        }
        pcVar5 = *(cfstringStruct **)(local_148 + (long)local_218 * 8);
        local_110 = pcVar5;
        FUN_002b7f4c(pcVar5,0);
        _objc_retainAutoreleasedReturnValue();
        local_158 = pcVar5;
        if (pcVar5 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = pcVar5;
        }
        local_f0 = (uint)(pcVar5 != (cfstringStruct *)0x0);
        _objc_storeStrong(&local_158,0);
        if (local_f0 != 0) goto LAB_002b6b04;
        local_218 = local_218 + 1;
      } while (local_218 < local_210);
      local_210 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10)
      ;
      local_218 = (undefined *)0x0;
    } while (local_210 != (undefined *)0x0);
  }
  local_f0 = 0;
LAB_002b6b04:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_f0 == 0) {
    local_b0 = (cfstringStruct *)0x0;
    local_f0 = 1;
  }
  _objc_storeStrong(&local_108);
  _objc_storeStrong(local_100,0);
LAB_002b6b74:
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

