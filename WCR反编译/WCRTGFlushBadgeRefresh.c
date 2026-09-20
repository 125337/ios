// WCRTGFlushBadgeRefresh @ 007ad748

/* WCRTGFlushBadgeRefresh(objc_object*) */

void WCRTGFlushBadgeRefresh(objc_object *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long local_40;
  uint local_38;
  undefined1 local_31;
  long local_30;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_31 = 0;
  bVar2 = true;
  uVar1 = local_18 != 0;
  if ((bool)uVar1) {
    lVar3 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026f4650);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar3 == 0;
    local_31 = uVar1;
    local_30 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  if (bVar2) {
    local_38 = 1;
  }
  else {
    _objc_setAssociatedObject(local_18,DAT_026f4650,0,1);
    _objc_setAssociatedObject(local_18,DAT_026f4648,0,1);
    lVar3 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026f4658);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar3 != 0) {
      puVar4 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_refreshBadges_026a81d0);
    }
    local_38 = (uint)(lVar3 == 0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

