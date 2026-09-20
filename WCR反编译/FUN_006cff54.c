// FUN_006cff54 @ 006cff54

void FUN_006cff54(double param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30 [3];
  double local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = 0.0 < local_18;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) != 0 && bVar1) {
    local_30[0] = (undefined *)0x0;
    if (local_18 == (double)(long)local_18) {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_30[0];
      local_30[0] = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_30[0];
      local_30[0] = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = PTR_WCRefineSpeechBroadcast_026ce140;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_6e0R_S_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_speakText__0269d910);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(local_30,0);
  }
  return;
}

