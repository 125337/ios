// wcr_openActivityForUsr:name:result: @ 01dd3198

/* Function Stack Size: 0x28 bytes */

void WCRefineSessionStatsViewController::wcr_openActivityForUsr_name_result_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  ID IVar4;
  ID local_d8;
  uint local_ac;
  ID local_a0;
  undefined *local_88;
  undefined *local_80;
  byte local_71;
  long local_70;
  long local_68;
  undefined4 local_60;
  byte local_59;
  ID local_58;
  ID local_50;
  long local_48;
  ID local_40;
  ID local_38;
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
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  local_59 = 0;
  if (IVar1 == 0) {
    local_a0 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatUsr_026c5438);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_a0;
  }
  else {
    local_a0 = local_38;
  }
  local_59 = IVar1 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_a0;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  IVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if ((IVar1 == 0) ||
     (puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_isChatRoomID__0269ec68,local_50),
     lVar3 = local_48, ((ulong)puVar2 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Sg_SNw_mTUS);
    local_60 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = lVar3;
    local_71 = 0;
    local_ac = 0;
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_usr_026af770);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_ac = (uint)lVar3 ^ 1;
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if ((local_ac & 1) != 0) {
      _objc_storeStrong(&local_68,0);
    }
    puVar2 = PTR_WCRefineSessionStatsActivityViewController_026cf5d8;
    _objc_alloc();
    IVar1 = local_50;
    IVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    lVar3 = local_68;
    if (IVar4 == 0) {
      local_d8 = local_50;
    }
    else {
      local_d8 = local_40;
    }
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_rangeTitle_026c5558);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_initWithRoomUsr_displayName_resu_026c5628,IVar1,local_d8,lVar3);
    local_80 = puVar2;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_88 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setModalPresentationStyle__0269d2a8,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_88,1);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_68,0);
    local_60 = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

