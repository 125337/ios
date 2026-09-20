// FUN_001bb568 @ 001bb568

void FUN_001bb568(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined8 local_20;
  long local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c8af8)(param_1,param_2);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 != 0) {
    FUN_001e8ccc(local_18);
    _objc_initWeak(auStack_28,local_18);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_001eb128;
    local_38 = &DAT_02578da0;
    _objc_copyWeak(auStack_30,auStack_28);
    _dispatch_async(puVar2,&local_50);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}

