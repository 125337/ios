// FUN_00ec01bc @ 00ec01bc

void FUN_00ec01bc(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  ulong local_1a8;
  ulong local_1a0;
  cfstringStruct *local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  uint local_bc;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  pcVar3 = local_b8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
    local_bc = 1;
    goto LAB_00ec085c;
  }
  pcVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  pcVar7 = pcVar3;
  FUN_00ebd790();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = pcVar7;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_sourceTitle);
  _objc_retainAutoreleasedReturnValue();
  pcVar7 = pcVar3;
  FUN_00ebd790();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar7;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar7 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar7;
    FUN_00ebd790();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_d0;
    local_d0 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
  }
  pcVar7 = local_c8;
  _WCRChatAttachmentCatalogIconName(local_c8,local_d0);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = pcVar7;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_length_0269cca0);
  pcVar3 = local_d8;
  if (pcVar7 == (cfstringStruct *)0x0) {
    pcVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_kind)
    ;
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar3;
    FUN_00ebd790();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = pcVar7;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8,&cf_toolbar);
    if ((((ulong)pcVar3 & 1) == 0) &&
       (pcVar3 = local_e0,
       (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8,&cf_plugin),
       ((ulong)pcVar3 & 1) == 0)) {
LAB_00ec0770:
      pcVar3 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8,&cf_custom);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = pcVar3;
        FUN_00ebd790();
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        local_bc = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = &cf_icons_outlined_more_circle;
        local_bc = 1;
      }
    }
    else {
      pcVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar3;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      local_e8 = pcVar7;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      _memset(auStack_130,0,0x40);
      uVar5 = 0;
      _WCRChatToolbarRefreshActions();
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1a0 != 0) {
        lVar6 = *local_120;
        local_1a8 = 0;
        do {
          do {
            if (*local_120 - lVar6 != 0) {
              _objc_enumerationMutation(*local_120 - lVar6,uVar5);
            }
            pcVar7 = *(cfstringStruct **)(local_128 + local_1a8 * 8);
            local_f0 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar7,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarActionKey);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            if (((ulong)pcVar3 & 1) != 0) {
              pcVar3 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f0,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarIconKey);
              _objc_retainAutoreleasedReturnValue();
              pcVar7 = pcVar3;
              FUN_00ebd790();
              _objc_retainAutoreleasedReturnValue();
              local_138 = pcVar7;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              pcVar7 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
              pcVar3 = local_138;
              bVar1 = pcVar7 != (cfstringStruct *)0x0;
              if (bVar1) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = pcVar3;
              }
              local_bc = (uint)bVar1;
              _objc_storeStrong(bVar1,&local_138,0);
              if (local_bc != 0) goto LAB_00ec072c;
            }
            local_1a8 = local_1a8 + 1;
          } while (local_1a8 < local_1a0);
          local_1a0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_1a8 = 0;
        } while (local_1a0 != 0);
      }
      local_bc = 0;
LAB_00ec072c:
      (*(code *)PTR__objc_release_02578630)(uVar5);
      if (local_bc == 0) {
        local_bc = 0;
      }
      _objc_storeStrong(&local_e8,0);
      if (local_bc == 0) goto LAB_00ec0770;
    }
    _objc_storeStrong(&local_e0,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar3;
    local_bc = 1;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
LAB_00ec085c:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

