// FUN_0076a5d4 @ 0076a5d4

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0076a5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_40;
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_3;
  local_18 = param_2;
  FUN_0076c714();
  FUN_00772918();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (DAT_028cc8b0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = DAT_028cc8b0;
    DAT_028cc8b0 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  FUN_0076bc54();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
             &cf_fromPluginSponsorPage);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = DAT_028cc8b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_pluginReward,
             &cf_rewardActionType);
  FUN_0076be80();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_wxid);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar2,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_sessionTimestamp);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_appreciationQRCodeBase64_026a7e70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineRemoteUpdateManager_026ce600;
  local_38[0] = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (puVar2 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setAppreciationQRCodeBase64__026a7e80,local_40);
  }
  (*DAT_028cc8e8)(local_18,local_20);
  if (puVar2 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setAppreciationQRCodeBase64__026a7e80,local_38[0]);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(local_38,0);
  return;
}

