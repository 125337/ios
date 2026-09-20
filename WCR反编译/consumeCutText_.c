// consumeCutText: @ 00959894

/* Function Stack Size: 0x18 bytes */

void WCRClipboardHistoryStore::consumeCutText_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong local_1b0;
  ulong local_168;
  ulong local_160;
  undefined *local_138;
  bool local_129;
  ulong local_128;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  long local_d0;
  int local_c4;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  uVar7 = local_c0;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar7 & 1) == 0) ||
     (uVar7 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
     uVar7 == 0)) {
    local_c4 = 1;
  }
  else {
    local_d0 = 0;
    _memset(auStack_118,0,0x40);
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    local_160 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_160 != 0) {
      lVar6 = *local_108;
      local_168 = 0;
      do {
        do {
          if (*local_108 - lVar6 != 0) {
            _objc_enumerationMutation(*local_108 - lVar6,IVar3);
          }
          uVar7 = *(ulong *)(local_110 + local_168 * 8);
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_d8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((uVar7 & 1) != 0) && (uVar7 = local_d8, FUN_009464dc(), (uVar7 & 1) == 0)) {
            uVar7 = local_d8;
            FUN_009463a8();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar7);
            if ((uVar4 & 1) != 0) {
              uVar7 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_120 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
              if (((uVar7 & 1) == 0) ||
                 (uVar7 = local_120,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_120,PTR_s_isEqualToString__0269ccc8,local_c0), (uVar7 & 1) == 0))
              {
                local_c4 = 0;
              }
              else {
                uVar7 = local_d8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                uVar4 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
                local_129 = false;
                bVar1 = (uVar4 & 1) == 0;
                if (bVar1) {
                  local_1b0 = 0;
                }
                else {
                  local_1b0 = local_d8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
                  _objc_retainAutoreleasedReturnValue();
                  local_128 = local_1b0;
                }
                local_129 = !bVar1;
                _objc_storeStrong(&local_d0,local_1b0);
                if ((local_129 & 1U) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_128);
                }
                (*(code *)PTR__objc_release_02578630)(uVar7);
                local_c4 = 2;
              }
              _objc_storeStrong(&local_120,0);
              if (local_c4 != 0) goto LAB_00959d00;
            }
          }
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    local_c4 = 0;
LAB_00959d00:
    (*(code *)PTR__objc_release_02578630)(IVar3);
    lVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
    if (lVar6 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_removeItemId__026aaaa8,local_d0);
    }
    puVar2 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
    _objc_retainAutoreleasedReturnValue();
    local_138 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar5 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_suppressCurrentPasteboardCapture_026aaaa0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_setItems__026a17a8,*(undefined8 *)PTR____NSArray0___02578280);
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setString__0269ccf8,&::cf___);
      puVar2 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_changeCount_026aab30);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLastChangeCount__026aab38,puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLastCapturedText__026aab98,0);
    }
    _objc_storeStrong(&local_138);
    _objc_storeStrong(&local_d0,0);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

