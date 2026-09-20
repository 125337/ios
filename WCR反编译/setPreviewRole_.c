// setPreviewRole: @ 018247e8

/* Function Stack Size: 0x18 bytes */

void WCRefineAvatarFrameLibraryViewController::setPreviewRole_
               (ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  
  if (*(long_long *)(param_1 + (long)_previewRole) != param_3) {
    *(long_long *)(param_1 + (long)_previewRole) = param_3;
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isViewLoaded_0269cde0);
    if (((IVar1 & 1) != 0) && (*(long *)(param_1 + (long)_collectionView) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + (long)_collectionView),PTR_s_reloadData_0269e400);
    }
  }
  return;
}

