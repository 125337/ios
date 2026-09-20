// forwardFileAtPath:cleanupAfterSend:token: @ 019aad88

/* Function Stack Size: 0x28 bytes */

void WCRefineFileManagerViewController::forwardFileAtPath_cleanupAfterSend_token_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  dispatch_queue_t pdVar3;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  _objc_initWeak(auStack_50,local_28);
  pdVar3 = _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_38;
  local_70 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar2;
  _objc_copyWeak(auStack_58,auStack_50);
  uVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = uVar1;
  _dispatch_async(pdVar3);
  (*(code *)PTR__objc_release_02578630)(pdVar3);
  _objc_storeStrong(&local_60,0);
  _objc_destroyWeak(auStack_58);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_70,0);
  _objc_destroyWeak(auStack_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

