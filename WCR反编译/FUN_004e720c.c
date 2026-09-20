// FUN_004e720c @ 004e720c

void FUN_004e720c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 == 0) || (uVar2 = local_18, FUN_004e2694(), (uVar2 & 1) != 0)) {
    local_28 = 1;
  }
  else {
    uVar2 = local_18;
    FUN_004e7498();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if ((uVar2 == 0) ||
       (uVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__chatroom),
       puVar3 = PTR___dispatch_main_q_02578680, (uVar2 & 1) != 0)) {
      local_28 = 1;
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_18;
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_004e7724;
      local_48 = &DAT_02578e60;
      (*(code *)PTR__objc_retain_02578638)();
      uVar2 = local_30;
      local_40 = uVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = uVar2;
      _dispatch_async(puVar3,&local_60);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_40,0);
      local_28 = 0;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

