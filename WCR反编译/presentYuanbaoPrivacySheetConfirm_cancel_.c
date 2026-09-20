// presentYuanbaoPrivacySheetConfirm:cancel: @ 0111ea48

/* Function Stack Size: 0x20 bytes */

bool WCRefinePrivateFriendManager::presentYuanbaoPrivacySheetConfirm_cancel_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined **local_78;
  cfstringStruct *local_70;
  undefined4 local_64;
  undefined *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  pcVar4 = &cf_ChatBotPrivacyPageSheet;
  _NSClassFromString();
  local_58 = PTR_s_initWithUserName_confirmHandler__026af0c0;
  local_60 = PTR_s_showWithAnimated__0269e5a8;
  local_50 = pcVar4;
  if ((pcVar4 == (cfstringStruct *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_instancesRespondToSelector__0269da90,
                 PTR_s_initWithUserName_confirmHandler__026af0c0), ((ulong)pcVar4 & 1) == 0)) {
    local_21 = 0;
    local_64 = 1;
  }
  else {
    pcVar4 = local_50;
    _objc_alloc();
    local_70 = pcVar4;
    if ((pcVar4 == (cfstringStruct *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_respondsToSelector__026ca818,local_58),
       uVar3 = local_40, puVar1 = PTR___NSConcreteStackBlock_02578660, ((ulong)pcVar4 & 1) == 0)) {
      local_21 = 0;
      local_64 = 1;
    }
    else {
      ppuVar5 = &local_a0;
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_0111edf4;
      local_88 = &DAT_025814c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(ppuVar5,PTR_s_copy_0269d150);
      uVar3 = local_48;
      ppuVar6 = &local_d0;
      local_d0 = puVar1;
      local_c8 = 0xc2000000;
      local_c4 = 0;
      local_c0 = FUN_0111ef14;
      local_b8 = &DAT_025814c8;
      local_78 = ppuVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(ppuVar6,PTR_s_copy_0269d150);
      puVar1 = local_58;
      pcVar4 = local_70;
      ppuVar5 = local_78;
      local_a8 = ppuVar6;
      _objc_retainBlock();
      ppuVar6 = local_a8;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar1,&cf_wxid_wi_1d142z0zdj03,ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_70;
      local_70 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(ppuVar6);
      (*(code *)PTR__objc_release_02578630)(ppuVar5);
      if ((local_70 == (cfstringStruct *)0x0) ||
         (pcVar4 = local_70,
         (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,local_60)
         , ((ulong)pcVar4 & 1) == 0)) {
        local_21 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_setYuanbaoPrivacySheet__026af0c8,local_70);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,local_60,1);
        local_21 = 1;
      }
      local_64 = 1;
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

