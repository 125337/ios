// FUN_0029be9c @ 0029be9c

void FUN_0029be9c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_24 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  _WCRefineVoiceDataFromMediaPath(lVar1,&local_24);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    _WCRefineSendVoiceDataToChat
              (local_30,local_24,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x30));
  }
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_30,0);
  return;
}

