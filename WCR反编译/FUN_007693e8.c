// FUN_007693e8 @ 007693e8

void FUN_007693e8(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = param_2;
  FUN_0076b520();
  if ((uVar1 & 1) == 0) {
    FUN_0076bfd0();
  }
  else {
    if (DAT_028cc8b0 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = DAT_028cc8b0;
      DAT_028cc8b0 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cc8b0,PTR_s_removeAllObjects_0269d508);
    }
    FUN_0076bc54();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_hasRewardAction);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_pendingTimestamp)
    ;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,
               &cf_fromPluginSponsorPage);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_pluginReward,
               &cf_rewardActionType);
    puVar3 = DAT_028cc8b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_editMoneyBtnClick,
               &cf_actionSource);
    FUN_0076be80();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_wxid);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar3,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_timestamp);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*DAT_028cc8d0)(param_2,param_3);
  return;
}

