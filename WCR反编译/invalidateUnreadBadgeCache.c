// invalidateUnreadBadgeCache @ 01524a60

/* Function Stack Size: 0x10 bytes */

void WCRefineTelegramGroupingStore::invalidateUnreadBadgeCache(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_unreadCache_026b0270);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(0,param_1,PTR_s_setUnreadCacheTime__026b02d0);
  return;
}

