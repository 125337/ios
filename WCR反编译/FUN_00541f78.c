// FUN_00541f78 @ 00541f78

void FUN_00541f78(long param_1)

{
  long lVar1;
  ulong uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48 [3];
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 == 0) {
    local_2c = 1;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_respondsToSelector__026ca818,
               PTR_s_dismissWithClickedButtonIndex_an_026a2160);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_dismissWithClickedButtonIndex_an_026a2160,
                 0xffffffffffffffff,1);
    }
    dVar3 = _dispatch_time(0,200000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_00542124;
    local_50 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_48[0] = lVar1;
    _dispatch_after(dVar3,puVar4,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(local_48,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

