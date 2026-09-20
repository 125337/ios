// FUN_00742628 @ 00742628

void FUN_00742628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ulong local_58;
  undefined4 local_4c;
  ulong local_48;
  byte local_3d;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  FUN_00747764();
  uVar2 = local_30;
  FUN_007485ec();
  local_3d = (byte)uVar2;
  uVar2 = local_30;
  FUN_00748910(local_30,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_30;
  local_48 = uVar2;
  FUN_00748ad4(local_30,&cf_m_uiMessageType);
  if ((int)uVar3 == 0x3f) {
    FUN_00748c34(0,local_30);
  }
  (*DAT_028cc6b0)(local_18,local_20,local_28,local_30);
  if ((local_3d & 1) != 0) {
    uVar2 = local_30;
    FUN_007490e0(0x3ff3333333333333,local_30,&cf_signal,local_48);
    uVar1 = (uint)uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_007493bc();
      if ((uVar1 & 1) == 0) {
        local_4c = 1;
      }
      else {
        FUN_00749564(local_30);
        puVar4 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_30;
        local_78 = PTR___NSConcreteStackBlock_02578660;
        local_70 = 0xc2000000;
        local_6c = 0;
        local_68 = FUN_007496b0;
        local_60 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = uVar2;
        _dispatch_async(puVar4,&local_78);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_storeStrong(&local_58,0);
        local_4c = 0;
      }
      goto LAB_00742858;
    }
  }
  local_4c = 1;
LAB_00742858:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

