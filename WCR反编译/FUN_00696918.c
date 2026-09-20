// FUN_00696918 @ 00696918

void FUN_00696918(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ulong local_58;
  undefined8 local_50;
  undefined4 local_44;
  ulong local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_view_026cabd8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  local_28 = 0;
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_valueForKey__0269d128,&cf_m_headerSearchView);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_28 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_28 == 0) {
    local_44 = 1;
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_becomeFirstResponder_0269d108);
    }
    dVar3 = _dispatch_time(0,200000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_00696bb0;
    local_60 = &DAT_02578e60;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar2;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar5;
    _dispatch_after(dVar3,puVar4,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

