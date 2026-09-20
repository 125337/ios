// FUN_00fc57e0 @ 00fc57e0

void FUN_00fc57e0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_88;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ulong local_48;
  uint local_40;
  bool local_39;
  ulong local_38;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_21 = param_3;
  local_20 = param_2;
  if (DAT_028e2fd0 != (code *)0x0) {
    (*DAT_028e2fd0)(local_18,param_2,param_3 & 1);
  }
  _objc_storeWeak(&DAT_028e2ee8,local_18);
  uVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_viewIfLoaded_026a1fc8);
  local_39 = false;
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_88 = 0;
  }
  else {
    local_88 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewIfLoaded_026a1fc8);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_88;
  }
  local_39 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_88;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  puVar4 = PTR___dispatch_main_q_02578680;
  if (uVar3 != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_18;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_00fc5b94;
    local_50 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar2;
    _dispatch_async(puVar4,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_48,0);
  }
  local_40 = (uint)(uVar3 == 0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_18,0);
  return;
}

