// saveLiftOverrideForSession:value: @ 00ecc6b0

/* Function Stack Size: 0x20 bytes */

void WCRefineChatIndentOverrideHelper::saveLiftOverrideForSession_value_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long_long lVar4;
  undefined *local_60;
  undefined *local_40;
  undefined4 local_34;
  long_long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_34 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_60 = *(undefined **)PTR____NSDictionary0___02578288;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_mutableCopy_0269d8a0);
    local_40 = local_60;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    lVar4 = local_30;
    FUN_00ecc428(local_30,500);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,lVar4);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_28);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

