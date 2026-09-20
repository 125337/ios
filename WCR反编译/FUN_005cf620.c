// FUN_005cf620 @ 005cf620

void FUN_005cf620(long param_1)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined **local_38;
  undefined *local_30;
  char *local_28;
  long local_20;
  long local_18;
  
  pcVar1 = "WCUIAlertView";
  local_20 = param_1;
  local_18 = param_1;
  _objc_getClass();
  local_30 = PTR_s_showAlertWithTitle_message_cance_026a5b88;
  if (pcVar1 != (char *)0x0) {
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,
               PTR_s_showAlertWithTitle_message_cance_026a5b88);
    if (((ulong)pcVar1 & 1) != 0) {
      ppuVar2 = &PTR___NSConcreteGlobalBlock_0257e378;
      _objc_retainBlock();
      ppuVar5 = &local_70;
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_005cf818;
      local_58 = &DAT_02578e60;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      local_38 = ppuVar2;
      (*(code *)PTR__objc_retain_02578638)();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      local_50 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = uVar4;
      _objc_retainBlock();
      local_40 = ppuVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,local_30,&cf_c_y,&cf_RZSOeNN_1Y__f_TN_lS,&cf_Sm,local_38,&cf___lS,ppuVar5)
      ;
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_38,0);
    }
  }
  return;
}

