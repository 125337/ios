// setAvatarFrameSpecialUserConfig:forUsername: @ 020bf358

/* Function Stack Size: 0x20 bytes */

void WCRefineConfig::setAvatarFrameSpecialUserConfig_forUsername_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_80;
  long local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  uint local_3c;
  long local_38;
  long local_30;
  long local_28;
  SEL local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (undefined *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar2 = local_30;
  FUN_020bdc24();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_3c = 1;
  }
  else {
    puVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_avatarFrameSpecialUserConfigs_0269e040);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_51 = 0;
    local_80 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_80 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_80;
    }
    local_51 = puVar4 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_80;
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    bVar1 = local_28 != 0;
    if (bVar1) {
      lVar2 = local_28;
      FUN_020bdd94();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_60 = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_configured);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      lVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,lVar2,local_38);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setAvatarFrameSpecialUserConfigs_026ca350,local_48);
      _objc_storeStrong(&local_60,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObjectForKey__0269d700,local_38);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setAvatarFrameSpecialUserConfigs_026ca350,local_48);
    }
    local_3c = (uint)!bVar1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

