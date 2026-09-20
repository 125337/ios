// filterSessionArraysInPlaceTop:allTop:normal: @ 01522bfc

/* Function Stack Size: 0x28 bytes */

void WCRefineTelegramGroupingStore::filterSessionArraysInPlaceTop_allTop_normal_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  uint local_cc;
  ulong local_c8;
  ulong local_b0;
  ulong local_98;
  ID local_70;
  byte local_61;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_invalidateFilteredSessionCache_026a2fc0);
  uVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_98 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_98 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_40;
  local_50 = local_98;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_b0 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_b0 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_48;
  local_58 = local_b0;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_c8 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_c8 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_c8;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasUnfilteredSnapshot_026a8210);
  local_cc = 1;
  if ((IVar3 & 1) != 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_incomingArraysLookUnfilteredTop__026b02c0,local_50,local_58,local_60);
    local_cc = (uint)IVar3;
  }
  local_61 = (byte)local_cc & 1;
  if ((local_cc & 1) == 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastUnfilteredTop_026b0208);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    FUN_015234d8();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    FUN_0151b01c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLastUnfilteredTop__026b0210);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastUnfilteredAllTop_026a8220);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    FUN_015234d8();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    FUN_0151b01c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLastUnfilteredAllTop__026b0218);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastUnfilteredNormal_026a8230);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    FUN_015234d8();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    FUN_0151b01c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLastUnfilteredNormal__026b0220);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  else {
    uVar2 = local_50;
    FUN_0151b01c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLastUnfilteredTop__026b0210);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_58;
    FUN_0151b01c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLastUnfilteredAllTop__026b0218);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_60;
    FUN_0151b01c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLastUnfilteredNormal__026b0220);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHasUnfilteredSnapshot__026b02c8,1);
  }
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_unreadCache_026b0270);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_28,PTR_s_setUnreadCacheTime__026b02d0);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedTab_026a2a78);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_28;
  local_70 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isFilteringActive_026a30c8);
  if ((IVar4 & 1) == 0) {
    IVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hidePinned_026a30d0);
    puVar1 = PTR____NSArray0___02578280;
    if ((IVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_replaceMutableArray_withArray__026b02d8,local_38,
                 *(undefined8 *)PTR____NSArray0___02578280);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_replaceMutableArray_withArray__026b02d8,local_40,
                 *(undefined8 *)puVar1);
    }
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_shouldFilterPinnedSessions_026b02e0);
    if ((((IVar3 & 1) != 0) ||
        (IVar3 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_kind_026a27e8),
        IVar3 == 5)) ||
       (IVar3 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_kind_026a27e8),
       IVar3 == 2)) {
      uVar2 = local_38;
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_filterMutableArray_tab__026b02e8,local_38,local_70);
      }
      uVar2 = local_40;
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_filterMutableArray_tab__026b02e8,local_40,local_70);
      }
    }
    uVar2 = local_48;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_filterMutableArray_tab__026b02e8,local_48,local_70);
    }
    IVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hidePinned_026a30d0);
    puVar1 = PTR____NSArray0___02578280;
    if ((IVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_replaceMutableArray_withArray__026b02d8,local_38,
                 *(undefined8 *)PTR____NSArray0___02578280);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_replaceMutableArray_withArray__026b02d8,local_40,
                 *(undefined8 *)puVar1);
    }
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

