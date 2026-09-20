// selectDisguiseIcon @ 01cbb3a0

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendViewController::selectDisguiseIcon(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  ID local_70;
  ID local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = "WCUIActionSheet";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_CQ_,local_18,
             PTR_s_useYuanbaoDisguiseIcon_026c3438);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addBtnTitle_target_sel__0269d278,&cf__OR,local_18,
             PTR_s_useWeRunDisguiseIcon_026c3440);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addBtnTitle_target_sel__0269d278,&cf__O8nb,local_18,
             PTR_s_useWeChatGameDisguiseIcon_026c3448);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addBtnTitle_target_sel__0269d278,&cf__O_eN,local_18,
             PTR_s_useWeChatPayDisguiseIcon_026c3450);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addBtnTitle_target_sel__0269d278,&cf__OV,local_18,
             PTR_s_useWeChatTeamDisguiseIcon_026c3458);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addBtnTitle_target_sel__0269d278,&cf_fY_eVh,local_18,
             PTR_s_selectOtherOfficialDisguiseIcon_026c3460);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addBtnTitle_target_sel__0269d278,&cf_b_YS,local_18,
             PTR_s_selectDisguiseFriend_026c3178);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addBtnTitle_target_sel__0269d278,&cf__IN4YP,local_18,
             PTR_s_selectCustomDisguiseIcon_026c3468);
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_addDestructiveButtonTitle_target_0269f800,&cf_ndVh,local_18,
               PTR_s_clearDisguiseIcon_026c3470);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
  pcVar1 = local_28;
  IVar5 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_70 = IVar6;
  if (IVar6 == 0) {
    local_30 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_30;
  }
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310,local_70);
  if (IVar6 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  _objc_storeStrong(&local_28,0);
  return;
}

