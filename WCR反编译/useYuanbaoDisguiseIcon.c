// useYuanbaoDisguiseIcon @ 01cbb76c

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendViewController::useYuanbaoDisguiseIcon(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [12];
  undefined4 local_2c;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_yuanbaoUserName_026c3368);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_isSelectedUsername__026afed0,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_isYuanbaoFriend_026af098);
    if (((ulong)puVar2 & 1) == 0) {
      _objc_initWeak(auStack_38,local_18);
      IVar1 = local_18;
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_01cbb928;
      local_48 = &DAT_0258a048;
      _objc_copyWeak(auStack_40,auStack_38);
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_promptAddYuanbaoThen__026c3370,&local_60);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
      local_2c = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_applyYuanbaoDisguise_026c3478);
      local_2c = 1;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbCQ_yQy__YSTUS);
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

