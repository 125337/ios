// tapSortButton: @ 01983198

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerViewController::tapSortButton_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRFileManagerState_026cf1c8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  puVar1 = (undefined *)(lVar2 + -0x1c20);
  puVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sortOrder_026ba3b8);
  if (puVar3 == puVar1) {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sortAscending_026ba3c0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setSortAscending__026ba3d8,(uint)puVar1 ^ 1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSortOrder__026ba3e0,puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setSortAscending__026ba3d8,puVar1 == (undefined *)0x0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateSortButtons_026ba3a8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reload_026af6c8);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

