// URLSession:task:didCompleteWithError: @ 01014b3c

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x28 bytes */

void WCRLinkMediaDownloader::URLSession_task_didCompleteWithError_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ID local_70;
  ID local_68;
  ID local_60;
  uint local_58;
  byte local_51;
  ID local_50;
  long local_48 [4];
  ID local_28;
  
  local_48[2] = 0;
  local_48[3] = param_2;
  local_28 = param_1;
  _objc_storeStrong(local_48 + 2,param_3);
  local_48[1] = 0;
  _objc_storeStrong(local_48 + 1,param_4);
  local_48[0] = 0;
  _objc_storeStrong(local_48,param_5);
  local_51 = 0;
  bVar2 = true;
  if (local_48[0] != 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_finished_026a15b0);
    bVar2 = true;
    if ((IVar3 & 1) == 0) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_completion_0269fb98);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      bVar2 = IVar3 == 0;
      local_50 = IVar3;
    }
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (!bVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFinished__026a15b8,1);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_completion_0269fb98);
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCompletion__0269fdc8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setProgress__026ad8f8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_48[2],PTR_s_finishTasksAndInvalidate_026a15a8);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_28;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_01014e38;
    local_78 = &DAT_0257ca68;
    (*(code *)PTR__objc_retain_02578638)();
    IVar3 = local_60;
    local_70 = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = IVar3;
    _dispatch_async(puVar4,&local_90);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_60,0);
  }
  local_58 = (uint)bVar2;
  _objc_storeStrong(local_48);
  _objc_storeStrong(local_48 + 1,0);
  _objc_storeStrong(local_48 + 2,0);
  return;
}

