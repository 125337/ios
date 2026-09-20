// wcr_requestGroupGenderRefreshForUsr: @ 014e1d18

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineSessionStatsEngine::wcr_requestGroupGenderRefreshForUsr_
          (WCRefineSessionStatsEngine *this,ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  undefined **ppuVar8;
  dispatch_time_t dVar9;
  double in_d0;
  double dVar10;
  undefined *local_f8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  long local_b0;
  long local_a8;
  undefined **local_a0;
  long local_98;
  char *local_90;
  char *local_88;
  byte local_79;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  double local_60;
  undefined4 local_54;
  long local_50;
  long local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  long *local_28;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  lVar2 = local_48;
  FUN_014dfa54();
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (puVar3 = PTR_WCRefineMessageBlockSupport_026ce0f8,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,local_50),
     ((ulong)puVar3 & 1) == 0)) {
    local_54 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    local_60 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_dictionaryForKey__026ca600,&cf_WCRSessionStatsGenderRefreshAt);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_79 = 0;
    local_f8 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_f8 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_f8;
    }
    local_79 = puVar4 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_f8;
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    dVar1 = local_60;
    puVar3 = local_70;
    dVar10 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_objectForKeyedSubscript__0269d098,local_50)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (180.0 <= dVar1 - dVar10) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,local_50);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setObject_forKey__026ca9e8,local_70,
                 &cf_WCRSessionStatsGenderRefreshAt);
      pcVar5 = "CContactMgr";
      _objc_getClass();
      FUN_014e23b8();
      _objc_retainAutoreleasedReturnValue();
      local_90 = (char *)0x0;
      local_88 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
      if (((ulong)pcVar5 & 1) != 0) {
        pcVar6 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_getContactByName__0269d178,local_50);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = local_90;
        local_90 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      if (local_90 != (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                   PTR_s_refreshGroupGenderDisplayForCont_026a3a70,local_90);
      }
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_88,0);
    }
    local_28 = &DAT_028e36c8;
    local_30 = 0;
    _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_02586038);
    if (*local_28 + 1 != 0) {
      _dispatch_once(*local_28 + 1,local_28,local_30);
    }
    _objc_storeStrong(&local_30);
    lVar2 = DAT_028e36c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e36c0,PTR_s_objectForKeyedSubscript__0269d098,local_50);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_98 = lVar7 + 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,lVar7 + 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e36c0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,local_50);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar2 = local_50;
    ppuVar8 = &local_d0;
    local_d0 = PTR___NSConcreteStackBlock_02578660;
    local_c8 = 0xc2000000;
    local_c4 = 0;
    local_c0 = FUN_014e2694;
    local_b8 = &DAT_0257cc98;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = lVar2;
    local_a8 = local_98;
    _objc_retainBlock();
    local_a0 = ppuVar8;
    dVar9 = _dispatch_time(0,1600000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    puVar4 = puVar3;
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar9,puVar4,local_a0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    dVar9 = _dispatch_time(0,4000000000);
    _objc_retainAutoreleaseReturnValue(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar9,puVar3,local_a0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  return;
}

