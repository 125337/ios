// cleanupWithReason: @ 00596b88

/* Function Stack Size: 0x18 bytes */

void WCRefineQuickPostTemporaryFavoriteCleanup::cleanupWithReason_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_48;
  ID local_40;
  undefined4 local_38;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cleaned_026a5590);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCleaned__026a5598,1);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_favoritesMgr_026a55a0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    local_40 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_favItem_026a55a8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar2;
    if ((local_40 != 0) && (IVar2 != 0)) {
      IVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_delFavoritesItem__026a55b0);
      if ((IVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_delFavoritesItem__026a55b0,local_48);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFavoritesMgr__026a55b8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFavItem__026a55c0,0);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  else {
    local_38 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

