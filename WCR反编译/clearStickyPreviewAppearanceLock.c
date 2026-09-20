// clearStickyPreviewAppearanceLock @ 018c91d8

/* Function Stack Size: 0x10 bytes */

void WCRefineChatToolbarViewController::clearStickyPreviewAppearanceLock(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPreviewAppearanceLocked__026b7f60,0);
  IVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_performWithoutAnimation__0269e7e0);
  _objc_storeStrong(&local_28,0);
  return;
}

