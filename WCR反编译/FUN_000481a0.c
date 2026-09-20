// FUN_000481a0 @ 000481a0

void FUN_000481a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_38;
  long local_30;
  undefined4 local_28;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_28 = 1;
  }
  else {
    lVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_payerName);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_0003102c();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      _objc_storeStrong(&local_30,&cf__e);
    }
    lVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_amount);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_0003102c();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      lVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_rawAmount);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      FUN_0003102c();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      FUN_000453b4();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_38;
      local_38 = lVar6;
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(lVar5);
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      _objc_storeStrong(&local_38,&cf__gw);
    }
    puVar1 = PTR_WCRefineSpeechBroadcast_026ce140;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_6e0R_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_speakText__0269d910);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

