// FUN_022187f8 @ 022187f8

void FUN_022187f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_60;
  ulong local_58;
  undefined8 local_50;
  code *local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  long local_28;
  
  lVar1 = 0;
  local_60 = param_1;
  local_50 = param_2;
  __s10Foundation12NotificationVMa();
  local_38 = *(long *)(lVar1 + -8);
  local_58 = *(long *)(local_38 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar2 = local_60;
  local_28 = lVar1;
  (*(code *)PTR____chkstk_darwin_02578668)();
  local_30 = (long)&local_60 - local_58;
  local_48 = *(code **)(lVar2 + 0x20);
  local_40 = *(undefined8 *)(lVar2 + 0x28);
  _swift_retain(local_40);
  (*(code *)PTR__objc_retain_02578638)(local_50);
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (local_30,local_50);
  (*(code *)PTR__objc_release_02578630)(local_50);
  (*local_48)(local_30);
  _swift_release(local_40);
  (**(code **)(local_38 + 8))(local_30,local_28);
  return;
}

