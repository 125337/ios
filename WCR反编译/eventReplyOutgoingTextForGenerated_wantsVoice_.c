// eventReplyOutgoingTextForGenerated:wantsVoice: @ 009b84b0

/* Function Stack Size: 0x1c bytes */

ID WCRefineAIStore::eventReplyOutgoingTextForGenerated_wantsVoice_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  byte local_31;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_31 = (byte)param_4;
  pcVar1 = local_30;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  pcVar5 = local_40;
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_44 = 1;
  }
  else if ((local_31 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar5;
    local_44 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_009af3fc();
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if ((puVar2 == (undefined *)0x0) ||
       (pcVar5 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,local_50),
       ((ulong)pcVar5 & 1) != 0)) {
      pcVar5 = local_40;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar5;
    }
    else {
      pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar5;
    }
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

