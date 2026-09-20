// FUN_0016e060 @ 0016e060

void FUN_0016e060(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char *pcVar2;
  char *local_40;
  uint local_38;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar2 = "WCUIAlertView";
  local_20 = param_2;
  _objc_getClass();
  bVar1 = pcVar2 != (char *)0x0;
  local_28 = pcVar2;
  if (bVar1) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_initWithTitle_message__0269d260,&cf_WCRefine,&cf__gd_O_vsgMn_);
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_fN,local_18,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_b_Y,local_18,
               PTR_s_performRestoreFromZip__0269f8d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
    _objc_storeStrong(&local_40,0);
  }
  else {
    FUN_0016f790(local_18,0,&cf___N_ec);
  }
  local_38 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

