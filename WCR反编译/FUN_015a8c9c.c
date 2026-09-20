// FUN_015a8c9c @ 015a8c9c

void FUN_015a8c9c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_24 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  _WCRefineVoiceDataFromMediaPath(lVar2,&local_24);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (lVar2 != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_30;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_015a8ea4;
    local_60 = &DAT_02586e68;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = lVar1;
    local_38 = local_24;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    local_50 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    local_48 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar4;
    _dispatch_async(puVar3,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_58,0);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,&cf_lx1Y_);
  }
  local_34 = (uint)(lVar2 == 0);
  _objc_storeStrong(&local_30,0);
  return;
}

