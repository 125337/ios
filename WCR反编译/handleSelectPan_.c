// handleSelectPan: @ 01b6a5a0

/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonLibraryViewController::handleSelectPan_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 in_d0;
  undefined8 in_d1;
  ulong local_50;
  long local_48 [3];
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (((*(byte *)(local_18 + (long)_exportSelectMode) & 1) == 0) ||
     ((*(byte *)(local_18 + (long)_selectSingleMode) & 1) != 0)) {
    local_2c = 1;
    goto LAB_01b6aae8;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_locationInView__026ca798,
             *(undefined8 *)(local_18 + (long)_collectionView));
  lVar3 = *(long *)(local_18 + (long)_collectionView);
  (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,lVar3,PTR_s_indexPathForItemAtPoint__026a3d40);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = local_28;
  local_48[0] = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar4 == 1) {
    if ((local_48[0] != 0) &&
       (lVar4 = local_48[0], (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_item_026a1890),
       -1 < lVar4)) {
      lVar4 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_item_026a1890);
      lVar3 = *(long *)(local_18 + (long)_displayItems);
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_count_0269cfe0);
      if (lVar4 < lVar3) {
        uVar6 = *(ulong *)(local_18 + (long)_displayItems);
        lVar4 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_item_026a1890);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_objectAtIndexedSubscript__0269cc78,lVar4);
        _objc_retainAutoreleasedReturnValue();
        local_50 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isPack_026ae428);
        bVar2 = true;
        if ((uVar6 & 1) == 0) {
          uVar6 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_relativePath_026ac370);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar2 = uVar5 == 0;
          (*(code *)PTR__objc_release_02578630)(uVar6);
        }
        if (!bVar2) {
          lVar4 = local_48[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_item_026a1890);
          *(long *)(local_18 + (long)_selectPanStartIndex) = lVar4;
          uVar7 = *(undefined8 *)(local_18 + (long)_selectedExportRels);
          uVar6 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_relativePath_026ac370);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_containsObject__0269cbb8);
          *(byte *)(local_18 + (long)_selectPanSelecting) = ((byte)uVar7 ^ 1) & 1;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(local_18 + (long)_collectionView),
                     PTR_s_setScrollEnabled__0269e428,0);
          IVar1 = local_18;
          uVar7 = *(undefined8 *)(local_18 + (long)_selectPanStartIndex);
          lVar4 = local_48[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_item_026a1890);
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_applySelectRangeFrom_to__026bf9d0,uVar7,lVar4);
        }
        local_2c = 1;
        _objc_storeStrong(&local_50,0);
        goto LAB_01b6aad8;
      }
    }
    local_2c = 1;
  }
  else {
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
    IVar1 = local_18;
    if (lVar4 == 2) {
      if (local_48[0] == 0) {
        local_2c = 1;
      }
      else {
        uVar7 = *(undefined8 *)(local_18 + (long)_selectPanStartIndex);
        lVar4 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_item_026a1890);
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_applySelectRangeFrom_to__026bf9d0,uVar7,lVar4);
        local_2c = 1;
      }
    }
    else {
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
      if ((lVar4 == 3) ||
         (lVar4 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20),
         lVar4 == 4)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(local_18 + (long)_collectionView),
                   PTR_s_setScrollEnabled__0269e428,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshTitle_026ab820);
      }
      local_2c = 0;
    }
  }
LAB_01b6aad8:
  _objc_storeStrong(local_48,0);
LAB_01b6aae8:
  _objc_storeStrong(&local_28,0);
  return;
}

