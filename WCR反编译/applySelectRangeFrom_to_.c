// applySelectRangeFrom:to: @ 01b6ab00

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineLocalEmoticonLibraryViewController::applySelectRangeFrom_to_
               (ID param_1,SEL param_2,long_long param_3,long_long param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long_long local_108;
  long_long local_100;
  long_long local_f8;
  long_long local_f0;
  ulong local_c8;
  long_long local_c0;
  undefined *local_b8;
  long_long local_b0;
  long_long local_a8;
  long_long local_a0;
  long_long local_98;
  long_long local_90;
  long_long local_88;
  long_long local_80;
  long_long local_78;
  long_long local_70;
  long_long local_68;
  long_long local_60;
  long_long local_58;
  undefined4 local_4c;
  long_long local_48;
  long_long local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  lVar2 = *(long *)(param_1 + (long)_displayItems);
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_count_0269cfe0);
  if (lVar2 != 0) {
    local_4c = 0;
    local_60 = local_38;
    local_68 = local_40;
    local_f0 = local_68;
    if ((long)local_38 < (long)local_40) {
      local_f0 = local_60;
    }
    local_70 = local_f0;
    local_58 = local_f0;
    if ((long)local_f0 < 1) {
      local_f8 = 0;
    }
    else {
      local_f8 = local_f0;
    }
    local_78 = local_f8;
    local_48 = local_f8;
    lVar2 = *(long *)(local_28 + (long)_displayItems);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_count_0269cfe0);
    local_88 = lVar2 - 1;
    local_98 = local_38;
    local_a0 = local_40;
    local_100 = local_98;
    if ((long)local_38 < (long)local_40) {
      local_100 = local_a0;
    }
    local_a8 = local_100;
    local_90 = local_100;
    local_108 = local_88;
    if ((long)local_100 <= (long)local_88) {
      local_108 = local_100;
    }
    local_b0 = local_108;
    local_80 = local_108;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = puVar3;
    for (local_c0 = local_48; (long)local_c0 <= (long)local_80; local_c0 = local_c0 + 1) {
      uVar4 = *(ulong *)(local_28 + (long)_displayItems);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectAtIndexedSubscript__0269cc78,local_c0)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_c8 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isPack_026ae428);
      bVar1 = true;
      if ((uVar4 & 1) == 0) {
        uVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_relativePath_026ac370);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = uVar6 == 0;
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      if (!bVar1) {
        uVar6 = *(ulong *)(local_28 + (long)_selectedExportRels);
        uVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_relativePath_026ac370);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_containsObject__0269cbb8);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        if ((*(byte *)(local_28 + (long)_selectPanSelecting) & 1) == 0) {
          if ((uVar6 & 1) != 0) {
            uVar7 = *(undefined8 *)(local_28 + (long)_selectedExportRels);
            uVar4 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_relativePath_026ac370);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_removeObject__0269d678);
            (*(code *)PTR__objc_release_02578630)(uVar4);
            goto LAB_01b6afa8;
          }
        }
        else if ((uVar6 & 1) == 0) {
          uVar7 = *(undefined8 *)(local_28 + (long)_selectedExportRels);
          uVar4 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_relativePath_026ac370);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(uVar4);
LAB_01b6afa8:
          puVar3 = local_b8;
          puVar5 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSIndexPath_026ce288,
                     PTR_s_indexPathForItem_inSection__026a3d28,local_c0,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
      }
      _objc_storeStrong(&local_c8,0);
    }
    puVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
    if (puVar3 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_28 + (long)_collectionView),
                 PTR_s_reloadItemsAtIndexPaths__026b6488,local_b8);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_refreshTitle_026ab820);
    _objc_storeStrong(&local_b8,0);
  }
  return;
}

