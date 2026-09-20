// previewItem: @ 01f8022c

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackManagerViewController::previewItem_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  dispatch_queue_t pdVar3;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ulong local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  ulong local_38;
  uint local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDirectory_026b0ba0);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_absolutePath_026ae300);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    _objc_initWeak(auStack_40,local_18);
    pdVar3 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_38;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01f803ac;
    local_58 = &DAT_02579c60;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar2;
    _objc_copyWeak(auStack_48,auStack_40);
    _dispatch_async(pdVar3,&local_70);
    (*(code *)PTR__objc_release_02578630)(pdVar3);
    _objc_destroyWeak(auStack_48);
    _objc_storeStrong(&local_50);
    _objc_destroyWeak(auStack_40);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

