// applyFilterPackRel: @ 01b65298

/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonLibraryViewController::applyFilterPackRel_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  cfstringStruct *local_98;
  long local_48;
  cfstringStruct *local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  uVar3 = local_28;
  if (uVar1 == 0) {
    local_2c = 1;
  }
  else {
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_filterPackRel_026bf8f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if ((uVar3 & 1) == 0) {
      pcVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_filterPackRel_026bf8f8);
      _objc_retainAutoreleasedReturnValue();
      local_98 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_98 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = local_98;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      _CFAbsoluteTimeGetCurrent();
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFilterPackRel__026bf900,local_28);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_setSelectedFilterPackRel__026a3ac0,
                 local_28);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadItems_026ae4d8);
      local_48 = 0;
      lVar4 = *(long *)((long)&local_18->field0_0x0 + (long)_collectionView);
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_numberOfSections_026a2068);
      if (0 < lVar4) {
        local_48 = *(long *)((long)&local_18->field0_0x0 + (long)_collectionView);
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_numberOfItemsInSection__026be810,0);
        if (0 < local_48) {
          uVar6 = *(undefined8 *)((long)&local_18->field0_0x0 + (long)_collectionView);
          puVar5 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSIndexPath_026ce288,
                     PTR_s_indexPathForItem_inSection__026a3d28,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_scrollToItemAtIndexPath_atScroll_026bf958,puVar5,1,0);
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
      }
      if (local_48 < 1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)PTR__CGPointZero_025782e0,
                   *(undefined8 *)(PTR__CGPointZero_025782e0 + 8),
                   *(undefined8 *)((long)&local_18->field0_0x0 + (long)_collectionView),
                   PTR_s_setContentOffset__0269e780);
      }
      _objc_storeStrong(&local_38,0);
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

