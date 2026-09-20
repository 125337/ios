// wcrHomeAvatarStrip_viewWillAppear: @ 0034f0e4

/* Function Stack Size: 0x14 bytes */

void WCRefineHomeAvatarStripHook::wcrHomeAvatarStrip_viewWillAppear_
               (ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  ID IVar2;
  ID local_50;
  ID local_38;
  ID local_30;
  undefined1 local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (undefined1)param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_wcrHomeAvatarStrip_viewWillAppea_026a2338,param_3 & 1);
  FUN_0034e7a8();
  if ((param_1 & 1) != 0) {
    FUN_0034e734();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_wcrHomeAvatarStrip_findMainTable_026a23a8);
    bVar1 = (IVar2 & 1) == 0;
    if (bVar1) {
      local_50 = 0;
    }
    else {
      local_50 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcrHomeAvatarStrip_findMainTable_026a23a8);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_50;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_50;
    if (!bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    if (local_30 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHomeTableHeaderHost_026ce570,PTR_s_applyOnTableView_owner__026a23c8,
                 local_30,local_18);
    }
    FUN_0034ec20(local_18,&cf_viewWillAppear);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

