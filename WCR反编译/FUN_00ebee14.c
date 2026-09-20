// FUN_00ebee14 @ 00ebee14

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ebee14(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_200;
  undefined *local_1c0;
  ulong local_198;
  ulong local_190;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  byte local_121;
  undefined *local_120;
  undefined *local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined *local_d0;
  undefined *local_c8;
  byte local_b9;
  byte *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_b9 = 0;
  uVar1 = local_b0;
  local_b8 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_arrayWithCapacity__0269d9b8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar5;
  _memset(auStack_110,0,0x40);
  uVar1 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_190 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_190 != 0) {
    lVar4 = *local_100;
    local_198 = 0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,uVar1);
        }
        puVar5 = *(undefined **)(local_108 + local_198 * 8);
        local_d0 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_mutableCopy_0269d8a0);
        local_121 = 0;
        local_1c0 = puVar5;
        if (puVar5 == (undefined *)0x0) {
          local_1c0 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
          _objc_retainAutoreleasedReturnValue();
          local_120 = local_1c0;
        }
        local_121 = puVar5 == (undefined *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = local_1c0;
        if ((local_121 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_120);
        }
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_customIcon);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar5;
        FUN_00ebd790();
        _objc_retainAutoreleasedReturnValue();
        local_130 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar5;
        FUN_00ebd790();
        _objc_retainAutoreleasedReturnValue();
        local_138 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
        if ((puVar5 == (undefined *)0x0) &&
           (puVar5 = local_138, FUN_00ec370c(), ((ulong)puVar5 & 1) != 0)) {
          puVar5 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_sourceTitle);
          _objc_retainAutoreleasedReturnValue();
          local_200 = puVar2;
          if (puVar2 == (undefined *)0x0) {
            local_148 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            local_200 = local_148;
          }
          puVar3 = puVar5;
          _WCRChatAttachmentCatalogIconName(puVar5,local_200);
          _objc_retainAutoreleasedReturnValue();
          local_140 = puVar3;
          if (puVar2 == (undefined *)0x0) {
            (*(code *)PTR__objc_release_02578630)(local_148);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
          if (puVar5 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_setObject_forKeyedSubscript__0269d248,local_140,&cf_icon);
            local_b9 = 1;
          }
          _objc_storeStrong(puVar5 != (undefined *)0x0,&local_140,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_118);
        _objc_storeStrong(&local_138);
        _objc_storeStrong(&local_130,0);
        _objc_storeStrong(&local_118,0);
        local_198 = local_198 + 1;
      } while (local_198 < local_190);
      local_190 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_198 = 0;
    } while (local_190 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar5 = local_c8;
  if (local_b8 != (byte *)0x0) {
    *local_b8 = local_b9 & 1;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

