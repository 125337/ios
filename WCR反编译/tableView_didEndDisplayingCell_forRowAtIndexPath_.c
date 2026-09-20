// tableView:didEndDisplayingCell:forRowAtIndexPath: @ 01bdd494

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x28 bytes */

void WCRefineMomentsCacheViewController::tableView_didEndDisplayingCell_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40 [4];
  SEL local_20;
  ID local_18;
  
  local_40[3] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_40 + 3,param_3);
  local_40[2] = 0;
  _objc_storeStrong(local_40 + 2,param_4);
  local_40[1] = 0;
  _objc_storeStrong(local_40 + 1,param_5);
  uVar2 = local_40[2];
  puVar1 = PTR_WCRMomentsAlbumCell_026cf438;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRMomentsAlbumCell_026cf438,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_40[2];
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_40[0] = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_thumbnailOperation_026c0650);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_setThumbnailOperation__026c0658);
    _objc_storeStrong(local_40,0);
  }
  _objc_storeStrong(local_40 + 1);
  _objc_storeStrong(local_40 + 2,0);
  _objc_storeStrong(local_40 + 3,0);
  return;
}

