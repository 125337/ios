// FUN_01005bd0 @ 01005bd0

void FUN_01005bd0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488,
             PTR_s_defaultSessionConfiguration_026a16f0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTimeoutIntervalForRequest__026a16f8);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4020000000000000,local_28,PTR_s_setTimeoutIntervalForResource__026a1700);
  puVar2 = PTR__OBJC_CLASS___NSURLSession_026ce498;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sessionWithConfiguration__026a5f58,
             local_28);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  local_30 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = local_30;
  local_38 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_dataTaskWithRequest_completionHa_026a5f60,uVar4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

