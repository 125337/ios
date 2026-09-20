// wcrHomeAvatarStrip_scrollViewDidEndDecelerating: @ 0034ea84

/* Function Stack Size: 0x18 bytes */

void WCRefineHomeAvatarStripHook::wcrHomeAvatarStrip_scrollViewDidEndDecelerating_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcrHomeAvatarStrip_scrollViewDid_026a2478,local_28);
  FUN_0034d318();
  if ((IVar1 & 1) == 0) {
    local_2c = 1;
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrHomeAvatarStrip_findMainTable_026a23a8);
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar1;
    if ((IVar1 != 0) && (local_28 == IVar1)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHomeTableHeaderHost_026ce570,
                 PTR_s_scheduleSettleOnTableView_owner__026a2470,IVar1,local_18);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

