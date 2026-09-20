// FUN_00417114 @ 00417114

void FUN_00417114(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 local_80;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (lVar2 == 0) {
    if (local_28 != 0) {
      _NSLog(&cf__wcr__ai_keyword_eventreplyerror___);
    }
  }
  else {
    puVar3 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAIStore_026ce048,PTR_s_eventReplyOutgoingTextForGenerat_0269d788,local_20
               ,*(byte *)(param_1 + 0x30) & 1);
    _objc_retainAutoreleasedReturnValue();
    if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
      local_80 = 0;
    }
    else {
      local_80 = *(undefined8 *)(param_1 + 0x28);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_sendOutgoingText_toContactUsrNam_026a3630,puVar3,
               *(undefined8 *)(param_1 + 0x20),0,local_80,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

