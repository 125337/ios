// FUN_000420a0 @ 000420a0

void FUN_000420a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
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
  if ((lVar2 == 0) ||
     (puVar3 = PTR_WCRefineDoNotDisturbSupport_026ce118,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineDoNotDisturbSupport_026ce118,PTR_s_isEffectivelyActive_0269d708),
     puVar1 = PTR_WCRefineHelper_026ce000, ((ulong)puVar3 & 1) != 0)) {
    if (local_28 != 0) {
      _NSLog(&cf__wcr__ai_transferreplyerror___);
    }
  }
  else {
    puVar3 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAIStore_026ce048,PTR_s_eventReplyOutgoingTextForGenerat_0269d788,local_20
               ,*(byte *)(param_1 + 0x28) & 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_sendOutgoingText_toContactUsrNam_0269d790,puVar3,
               *(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

