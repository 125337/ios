// FUN_0035f744 @ 0035f744

void FUN_0035f744(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,&cf_sortUnread);
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,&cf_sortRecent);
      if ((uVar2 & 1) == 0) {
        uVar2 = *(ulong *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,&cf_searchPage);
        if ((uVar2 & 1) == 0) {
          uVar2 = *(ulong *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_isEqualToString__0269ccc8,&cf_copyGroupId);
          if ((uVar2 & 1) == 0) {
            uVar2 = *(ulong *)(param_1 + 0x20);
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_isEqualToString__0269ccc8,&cf_syncMembers);
            if ((uVar2 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_wcrGrouping_syncGroupMembers_026a26f0);
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrGrouping_copyGroupId_026a26e8);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_wcrGrouping_showSearchHeader_026a26e0);
        }
      }
      else {
        lVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sortMode_026a26b0);
        if (lVar1 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSortMode__026a26d0,0);
          lVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_groupId_0269ea88);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sortMode_026a26b0);
          FUN_0035fa54(lVar1,lVar3);
          (*(code *)PTR__objc_release_02578630)(lVar1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_wcrGrouping_reloadItemsKeepingSo_026a26d8);
        }
      }
    }
    else {
      lVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sortMode_026a26b0);
      if (lVar1 != 1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSortMode__026a26d0,1);
        lVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_groupId_0269ea88);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sortMode_026a26b0);
        FUN_0035fa54(lVar1,lVar3);
        (*(code *)PTR__objc_release_02578630)(lVar1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcrGrouping_reloadItemsKeepingSo_026a26d8);
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

