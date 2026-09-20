// handleGroupSwitchPan: @ 01b655b8

/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonLibraryViewController::handleGroupSwitchPan_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  int iVar9;
  double in_d0;
  double in_d1;
  cfstringStruct *local_100;
  cfstringStruct *local_e0;
  undefined *local_b8;
  undefined1 *local_b0;
  cfstringStruct *local_a8;
  byte local_99;
  cfstringStruct *local_98;
  byte local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined1 local_69;
  cfstringStruct *local_68;
  undefined4 local_5c;
  double local_48;
  double local_40;
  long local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_translationInView__026cabb0,
             *(undefined8 *)((long)&local_28->field0_0x0 + (long)_collectionView));
  local_48 = in_d0;
  local_40 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_velocityInView__026cabd0,
             *(undefined8 *)((long)&local_28->field0_0x0 + (long)_collectionView));
  lVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if (lVar5 == 1) {
    _objc_setAssociatedObject(local_38,DAT_028c6780,0,1);
    local_5c = 1;
  }
  else {
    lVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
    if (lVar5 == 4) {
      local_5c = 1;
    }
    else {
      lVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
      if ((lVar5 == 2) ||
         (lVar5 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20),
         lVar5 == 3)) {
        lVar5 = local_38;
        _objc_getAssociatedObject(local_38,DAT_028c6780);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (lVar5 == 0) {
          local_69 = 0;
          bVar4 = true;
          uVar2 = (*(byte *)((long)&local_28->field0_0x0 + (long)_exportSelectMode) & 1) == 0;
          if ((bool)uVar2) {
            pcVar6 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewOverlay_026bf960);
            _objc_retainAutoreleasedReturnValue();
            bVar4 = pcVar6 != (cfstringStruct *)0x0;
            local_69 = uVar2;
            local_68 = pcVar6;
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            uVar2 = local_69;
          }
          local_69 = uVar2;
          if (bVar4) {
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
            local_5c = 1;
          }
          else if (ABS(local_48) < 56.0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
            local_5c = 1;
          }
          else if (ABS(local_48) <= ABS(local_40)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
            local_5c = 1;
          }
          else {
            pcVar6 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_filterChipPackRels_026bf968);
            _objc_retainAutoreleasedReturnValue();
            local_78 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_count_0269cfe0);
            if ((cfstringStruct *)((long)&MACH_HEADER.magic + 1) < pcVar6) {
              pcVar6 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_filterPackRel_026bf8f8);
              _objc_retainAutoreleasedReturnValue();
              pcVar7 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_89 = 0;
              local_99 = 0;
              if (pcVar7 == (cfstringStruct *)0x0) {
                local_e0 = (cfstringStruct *)PTR_WCRefineLocalEmoticonStore_026ce440;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineLocalEmoticonStore_026ce440,
                           PTR_s_selectedFilterPackRel_026a3dd0);
                _objc_retainAutoreleasedReturnValue();
                local_99 = 1;
                local_98 = local_e0;
              }
              else {
                local_e0 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_filterPackRel_026bf8f8);
                _objc_retainAutoreleasedReturnValue();
                local_89 = 1;
                local_88 = local_e0;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_80 = local_e0;
              if ((local_99 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_98);
              }
              if ((local_89 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_88);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              if (local_80 == (cfstringStruct *)0x0) {
                local_100 = &::cf___;
              }
              else {
                local_100 = local_80;
              }
              pcVar6 = local_78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_78,PTR_s_indexOfObject__0269e870,local_100);
              local_a8 = pcVar6;
              if (pcVar6 == (cfstringStruct *)0x7fffffffffffffff) {
                local_a8 = (cfstringStruct *)0x0;
              }
              iVar9 = -1;
              if (local_48 < 0.0) {
                iVar9 = 1;
              }
              puVar1 = (undefined1 *)((long)&local_a8->field0_0x0 + (long)iVar9);
              local_b0 = puVar1;
              if (((long)puVar1 < 0) ||
                 (pcVar6 = local_78,
                 (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0),
                 lVar5 = local_38, uVar3 = DAT_028c6780, (long)pcVar6 <= (long)puVar1)) {
                local_5c = 1;
              }
              else {
                puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
                _objc_retainAutoreleasedReturnValue();
                _objc_setAssociatedObject(lVar5,uVar3,puVar8,1);
                (*(code *)PTR__objc_release_02578630)(puVar8);
                puVar8 = PTR__OBJC_CLASS___UISelectionFeedbackGenerator_026ce280;
                _objc_alloc_init();
                local_b8 = puVar8;
                (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_selectionChanged_0269e718);
                _objc_storeStrong(&local_b8,0);
                pcVar6 = local_28;
                pcVar7 = local_78;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_78,PTR_s_objectAtIndexedSubscript__0269cc78,local_b0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_applyFilterPackRel__026bf950);
                (*(code *)PTR__objc_release_02578630)(pcVar7);
                (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setEnabled__026ca938,0);
                (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setEnabled__026ca938,1);
                local_5c = 0;
              }
              _objc_storeStrong(&local_80,0);
            }
            else {
              local_5c = 1;
            }
            _objc_storeStrong(&local_78,0);
          }
        }
        else {
          local_5c = 1;
        }
      }
      else {
        local_5c = 1;
      }
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

