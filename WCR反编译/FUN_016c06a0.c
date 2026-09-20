// FUN_016c06a0 @ 016c06a0

void FUN_016c06a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  dispatch_time_t dVar4;
  ulong local_c0;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  undefined4 local_40;
  ulong local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_40 = 1;
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    uVar3 = local_30;
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_48 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_c0 = 0;
    }
    else {
      local_c0 = local_30;
    }
    _objc_initWeak(auStack_50,local_c0);
    dVar4 = _dispatch_time(0,350000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_016c0940;
    local_68 = &DAT_025797f0;
    _objc_copyWeak(auStack_58,auStack_50);
    lVar1 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = lVar1;
    _dispatch_after(dVar4,puVar2,&local_80);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_60);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

