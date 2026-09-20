// favoriteItem: @ 0094ffac

/* Function Stack Size: 0x18 bytes */

void WCRClipboardHistoryPanelController::favoriteItem_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct **ppcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  byte local_20c;
  undefined *local_1f0;
  undefined *local_1e8;
  cfstringStruct *local_1b0;
  ulong local_178;
  double local_170;
  byte local_161;
  undefined8 local_160;
  byte local_151;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  double local_108;
  ulong local_100;
  cfstringStruct **local_f8;
  bool local_e9;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined4 local_c4;
  cfstringStruct *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = (cfstringStruct *)0x0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  pcVar3 = local_c0;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_c4 = 1;
  }
  else {
    pcVar4 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isEqualToString__0269ccc8,&cf___current__);
    pcVar3 = local_d0;
    if (((ulong)pcVar4 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((((ulong)pcVar3 & 1) != 0) &&
         (pcVar3 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0),
         pcVar3 != (cfstringStruct *)0x0)) {
        puVar2 = PTR_WCRClipboardHistoryStore_026ce680;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
    }
    else {
      pcVar3 = local_c0;
      FUN_009463a8();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if (((ulong)pcVar4 & 1) == 0) {
        pcVar3 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_e9 = false;
        bVar1 = ((ulong)pcVar4 & 1) == 0;
        if (bVar1) {
          local_1b0 = &::cf___;
        }
        else {
          local_1b0 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
          _objc_retainAutoreleasedReturnValue();
          local_e8 = local_1b0;
        }
        local_e9 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_e0 = local_1b0;
        if ((local_e9 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_e8);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
        if (pcVar3 != (cfstringStruct *)0x0) {
          puVar2 = PTR_WCRClipboardHistoryStore_026ce680;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        ppcVar5 = &local_e0;
        _objc_storeStrong(ppcVar5,0);
      }
      else {
        pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___UIPasteboard_026ce040;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        FUN_009473cc();
        _objc_retainAutoreleasedReturnValue();
        local_d8 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        if (local_d8 != (cfstringStruct *)0x0) {
          puVar2 = PTR_WCRClipboardHistoryStore_026ce680;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        ppcVar5 = &local_d8;
        _objc_storeStrong(ppcVar5,0);
      }
      FUN_00950878();
      _objc_retainAutoreleasedReturnValue();
      local_100 = 0;
      dVar10 = -1.0;
      local_108 = -1.0;
      local_f8 = ppcVar5;
      _memset(auStack_150,0,0x40);
      puVar2 = PTR_WCRClipboardHistoryStore_026ce680;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_1e8 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10)
      ;
      if (local_1e8 != (undefined *)0x0) {
        lVar9 = *local_140;
        local_1f0 = (undefined *)0x0;
        do {
          do {
            if (*local_140 - lVar9 != 0) {
              _objc_enumerationMutation(*local_140 - lVar9,puVar6);
            }
            local_110 = *(undefined8 *)(local_148 + (long)local_1f0 * 8);
            ppcVar5 = local_f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
            local_161 = 0;
            local_20c = 0;
            if (ppcVar5 != (cfstringStruct **)0x0) {
              uVar7 = local_110;
              FUN_00950b10(ppcVar5);
              _objc_retainAutoreleasedReturnValue();
              local_161 = 1;
              local_160 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_20c = (byte)uVar7;
            }
            if ((local_161 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_160);
            }
            local_151 = local_20c & 1;
            uVar7 = local_110;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_110,PTR_s_objectForKeyedSubscript__0269d098,&cf_time);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar7);
            local_170 = dVar10;
            if (((local_151 & 1) != 0) && (local_108 <= dVar10)) {
              _objc_storeStrong(&local_100,local_110);
              local_108 = local_170;
            }
            local_1f0 = local_1f0 + 1;
            dVar10 = local_170;
          } while (local_1f0 < local_1e8);
          local_1e8 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                     0x10);
          local_1f0 = (undefined *)0x0;
        } while (local_1e8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar6);
      uVar8 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_178 = uVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((uVar8 & 1) != 0) &&
         (uVar8 = local_178, (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0),
         uVar8 != 0)) {
        puVar2 = PTR_WCRClipboardHistoryStore_026ce680;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      _objc_storeStrong(&local_178);
      _objc_storeStrong(&local_100,0);
      _objc_storeStrong(&local_f8,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reloadCardData_026aa890);
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

