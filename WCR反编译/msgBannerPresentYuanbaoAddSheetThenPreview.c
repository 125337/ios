// msgBannerPresentYuanbaoAddSheetThenPreview @ 01b91c4c

/* Function Stack Size: 0x10 bytes */

bool WCRefineMessageBannerBeautifyViewController::msgBannerPresentYuanbaoAddSheetThenPreview
               (ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **local_b0 [3];
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [8];
  undefined **local_70;
  undefined1 auStack_68 [12];
  undefined4 local_5c;
  char *local_58;
  undefined *local_50;
  undefined *local_48;
  char *local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  pcVar3 = "ChatBotPrivacyPageSheet";
  local_38 = param_2;
  local_30 = param_1;
  _objc_getClass();
  local_48 = PTR_s_initWithUserName_confirmHandler__026af0c0;
  local_50 = PTR_s_showWithAnimated__0269e5a8;
  if ((pcVar3 == (char *)0x0) ||
     (local_40 = pcVar3,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar3,PTR_s_instancesRespondToSelector__0269da90,
                PTR_s_initWithUserName_confirmHandler__026af0c0), ((ulong)pcVar3 & 1) == 0)) {
    local_21 = 0;
  }
  else {
    pcVar3 = local_40;
    _objc_alloc();
    local_58 = pcVar3;
    if ((pcVar3 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_respondsToSelector__026ca818,local_48),
       ((ulong)pcVar3 & 1) == 0)) {
      local_21 = 0;
      local_5c = 1;
    }
    else {
      _objc_initWeak(auStack_68,local_30);
      ppuVar4 = &local_98;
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_01b91fc0;
      local_80 = &DAT_0257be28;
      _objc_copyWeak(auStack_78,auStack_68);
      (*(code *)PTR__objc_msgSend_02578628)(ppuVar4,PTR_s_copy_0269d150);
      ppuVar5 = &PTR___NSConcreteGlobalBlock_0258b4a8;
      local_70 = ppuVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (&PTR___NSConcreteGlobalBlock_0258b4a8,PTR_s_copy_0269d150);
      puVar2 = local_48;
      pcVar3 = local_58;
      ppuVar4 = local_70;
      local_b0[0] = ppuVar5;
      _objc_retainBlock();
      ppuVar5 = local_b0[0];
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2,&cf_wxid_wi_1d142z0zdj03,ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_58;
      local_58 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(ppuVar5);
      (*(code *)PTR__objc_release_02578630)(ppuVar4);
      if ((local_58 == (char *)0x0) ||
         (pcVar3 = local_58,
         (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,local_50)
         , ((ulong)pcVar3 & 1) == 0)) {
        local_21 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_setMsgBannerYuanbaoPrivacySheet__026bffd0,local_58);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,local_50,1);
        local_21 = 1;
      }
      local_5c = 1;
      _objc_storeStrong(local_b0);
      _objc_storeStrong(&local_70,0);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_68);
    }
    _objc_storeStrong(&local_58,0);
  }
  return local_21 & 1;
}

