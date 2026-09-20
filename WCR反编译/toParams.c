// toParams @ 01136b9c

/* Function Stack Size: 0x10 bytes */

ID WCRefineRedEnvelopParam::toParams(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  cfstringStruct *local_138;
  cfstringStruct *local_128;
  cfstringStruct *local_118;
  cfstringStruct *local_108;
  cfstringStruct *local_f8;
  cfstringStruct *local_e8;
  cfstringStruct *local_d8;
  cfstringStruct *local_c8;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a8 = &cf_msgType;
  pcVar1 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_msgType_026a6a60);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_c8 = &::cf___;
  }
  local_68 = local_c8;
  local_a0 = &cf_sendId;
  pcVar2 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sendId_026a69f8);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_d8 = &::cf___;
  }
  local_60 = local_d8;
  local_98 = &cf_channelId;
  pcVar3 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_channelId_026af380);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_e8 = &::cf___;
  }
  local_58 = local_e8;
  local_90 = &cf_nickName;
  pcVar4 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_nickName_026af388);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_f8 = &::cf___;
  }
  local_50 = local_f8;
  local_88 = &cf_headImg;
  pcVar5 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_headImg_026af390);
  _objc_retainAutoreleasedReturnValue();
  local_108 = pcVar5;
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_108 = &::cf___;
  }
  local_48 = local_108;
  local_80 = &cf_nativeUrl;
  pcVar6 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_nativeUrl_026af398);
  _objc_retainAutoreleasedReturnValue();
  local_118 = pcVar6;
  if (pcVar6 == (cfstringStruct *)0x0) {
    local_118 = &::cf___;
  }
  local_40 = local_118;
  local_78 = &cf_sessionUserName;
  pcVar7 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sessionUserName_026a6a48);
  _objc_retainAutoreleasedReturnValue();
  local_128 = pcVar7;
  if (pcVar7 == (cfstringStruct *)0x0) {
    local_128 = &::cf___;
  }
  local_38 = local_128;
  local_70 = &cf_timingIdentifier;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_timingIdentifier_026af3a0);
  _objc_retainAutoreleasedReturnValue();
  local_138 = (cfstringStruct *)param_1;
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    local_138 = &::cf___;
  }
  local_30 = local_138;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_68,&local_a8,8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(pcVar7);
  (*(code *)PTR__objc_release_02578630)(pcVar6);
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

