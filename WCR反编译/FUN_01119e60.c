// FUN_01119e60 @ 01119e60

void FUN_01119e60(void)

{
  bool bVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  uint local_184;
  void *local_168;
  void *local_160;
  undefined *local_128;
  undefined *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  uint local_cc;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar2;
  _WCRSideloadShareFixResolvedGroupID();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
  if (puVar2 != (undefined *)0x0) {
    puVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_containerURLForSecurityApplicati_026a7b88,local_c0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = puVar2 != (undefined *)0x0;
    local_c8 = puVar2;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_URLByAppendingPathComponent__026a7b98,
                 &cf_Library_ApplicationSupport_WCRefine_private_friend_snapshot_plist);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = puVar2;
    }
    local_cc = (uint)bVar1;
    _objc_storeStrong(&local_c8,0);
    if (local_cc != 0) goto LAB_0111a2d0;
  }
  pvVar3 = _memset(auStack_118,0,0x40);
  _WCRSideloadShareFixApplicationGroupIDs();
  _objc_retainAutoreleasedReturnValue();
  local_160 = pvVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_160 != (void *)0x0) {
    lVar6 = *local_108;
    local_168 = (void *)0x0;
    do {
      do {
        if (*local_108 - lVar6 != 0) {
          _objc_enumerationMutation(*local_108 - lVar6,pvVar3);
        }
        lVar7 = *(long *)(local_110 + (long)local_168 * 8);
        local_d8 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
        if (lVar7 != 0) {
          puVar2 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_containerURLForSecurityApplicati_026a7b88,local_d8);
          _objc_retainAutoreleasedReturnValue();
          local_120 = puVar2;
          if (puVar2 == (undefined *)0x0) {
            local_cc = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_URLByAppendingPathComponent__026a7b98,
                       &cf_Library_ApplicationSupport_WCRefine_private_friend_snapshot_plist);
            _objc_retainAutoreleasedReturnValue();
            local_128 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_path_0269d4d8);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            puVar5 = local_b8;
            local_184 = 0;
            if (puVar4 != (undefined *)0x0) {
              puVar4 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_path_0269d4d8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_fileExistsAtPath__026ca630);
              local_184 = (uint)puVar5;
              (*(code *)PTR__objc_release_02578630)(puVar4);
            }
            (*(code *)PTR__objc_release_02578630)(puVar2);
            puVar2 = local_128;
            bVar1 = (local_184 & 1) != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = puVar2;
            }
            local_cc = (uint)bVar1;
            _objc_storeStrong(&local_128,0);
          }
          _objc_storeStrong(&local_120,0);
          if ((local_cc != 0) && (local_cc != 3)) goto LAB_0111a29c;
        }
        local_168 = (void *)((long)local_168 + 1);
      } while (local_168 < local_160);
      local_160 = pvVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_168 = (void *)0x0;
    } while (local_160 != (void *)0x0);
  }
  local_cc = 0;
LAB_0111a29c:
  (*(code *)PTR__objc_release_02578630)(pvVar3);
  if (local_cc == 0) {
    local_b0 = (undefined *)0x0;
    local_cc = 1;
  }
LAB_0111a2d0:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

