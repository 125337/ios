// FUN_0054d068 @ 0054d068

void FUN_0054d068(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_1d0;
  undefined *local_1c8;
  char *local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined *local_e8;
  uint local_e0;
  uint local_dc;
  char *local_d8;
  undefined4 local_d0;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  char *pcVar5;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = (undefined *)0x0;
  _objc_storeStrong(&local_c0,param_2);
  puVar3 = local_c0;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)puVar3 & 1) == 0) ||
     (puVar3 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
     puVar3 == (undefined *)0x0)) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = 1;
    local_b0 = puVar3;
  }
  else {
    if (DAT_028cb3f8 == (char *)0x0) {
      pcVar4 = "WCUserComment";
      _objc_getClass();
      DAT_028cb3f8 = pcVar4;
    }
    pcVar4 = DAT_028cb3f8;
    pcVar5 = DAT_028cb3f8;
    _objc_retainAutoreleaseReturnValue();
    puVar3 = local_c0;
    uVar1 = (uint)pcVar5;
    local_d8 = pcVar4;
    if (pcVar4 == (char *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar3;
      local_d0 = 1;
    }
    else {
      FUN_0054fab4();
      uVar6 = local_b8;
      local_dc = uVar1;
      FUN_0054fb5c();
      local_e8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_e0 = (uint)uVar6;
      if (local_dc < local_e0) {
        local_e0 = local_dc;
      }
      puVar3 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_arrayWithCapacity__0269d9b8,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _memset(auStack_130,0,0x40);
      puVar3 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1c8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10)
      ;
      if (local_1c8 != (undefined *)0x0) {
        lVar7 = *local_120;
        local_1d0 = (undefined *)0x0;
        do {
          do {
            if (*local_120 - lVar7 != 0) {
              _objc_enumerationMutation(*local_120 - lVar7,puVar3);
            }
            uVar8 = *(ulong *)(local_128 + (long)local_1d0 * 8);
            local_f0 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,local_d8);
            if ((uVar8 & 1) != 0) {
              pcVar4 = local_d8;
              _objc_alloc_init();
              uVar8 = local_f0;
              local_138 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_username_026a2238);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setUsername__026a2510);
              (*(code *)PTR__objc_release_02578630)(uVar8);
              uVar8 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_nickname_026a4ee0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setNickname__026a4eb8);
              (*(code *)PTR__objc_release_02578630)(uVar8);
              uVar8 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_type_0269e6f8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_setType__026a3cb8,uVar8 & 0xffffffff);
              uVar8 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_commentID_026a4ee8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setCommentID__026a4ef0);
              (*(code *)PTR__objc_release_02578630)(uVar8);
              uVar8 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_content_026a4a90);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setContent__026a4ad8);
              (*(code *)PTR__objc_release_02578630)(uVar8);
              uVar8 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_isRichText_026a4ef8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_setIsRichText__026a4ec0,uVar8 & 0xffffffff);
              uVar1 = local_e0;
              FUN_0054fc40(local_e0,local_dc);
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setCreateTime__026a4ec8,uVar1);
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_138);
              _objc_storeStrong(&local_138,0);
            }
            local_1d0 = local_1d0 + 1;
          } while (local_1d0 < local_1c8);
          local_1c8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_1d0 = (undefined *)0x0;
        } while (local_1c8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar3;
      local_d0 = 1;
      _objc_storeStrong(&local_e8,0);
    }
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

