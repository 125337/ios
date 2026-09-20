// FUN_0170a270 @ 0170a270

void FUN_0170a270(long param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_98;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  _CGAffineTransformMakeScale(0x3ff8000000000000);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _memcpy(auStack_90,auStack_60,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setTransform__026caad0,auStack_90);
  dVar1 = _dispatch_time(0,50000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = uVar3;
  _dispatch_after(dVar1,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_98,0);
  return;
}

