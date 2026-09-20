// FUN_005d6e7c @ 005d6e7c

void FUN_005d6e7c(long param_1)

{
  ulong uVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,
             PTR_s_dismissWithClickedButtonIndex_an_026a2160);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_dismissWithClickedButtonIndex_an_026a2160,
               0xffffffffffffffff,1);
  }
  dVar2 = _dispatch_time(0,200000000);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_005d6ff8;
  local_38 = &DAT_02578e60;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  local_30 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar5;
  _dispatch_after(dVar2,puVar3,&local_50);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_30,0);
  return;
}

