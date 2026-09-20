// wcrHomeAvatarStrip_scrollViewDidEndDragging:willDecelerate: @ 0034e964

/* Function Stack Size: 0x1c bytes */

void WCRefineHomeAvatarStripHook::wcrHomeAvatarStrip_scrollViewDidEndDragging_willDecelerate_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  ID local_38;
  undefined4 local_30;
  byte local_29;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcrHomeAvatarStrip_scrollViewDid_026a2468,local_28,param_4 & 1);
  if ((local_29 & 1) == 0) {
    FUN_0034d318();
    if ((IVar1 & 1) == 0) {
      local_30 = 1;
    }
    else {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcrHomeAvatarStrip_findMainTable_026a23a8);
      _objc_retainAutoreleasedReturnValue();
      local_38 = IVar1;
      if ((IVar1 != 0) && (local_28 == IVar1)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHomeTableHeaderHost_026ce570,
                   PTR_s_scheduleSettleOnTableView_owner__026a2470,IVar1,local_18);
      }
      _objc_storeStrong(&local_38,0);
      local_30 = 0;
    }
  }
  else {
    local_30 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

