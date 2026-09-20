// FUN_02205808 @ 02205808

void FUN_02205808(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 local_88;
  long local_60;
  long local_40;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  
  local_18 = param_3;
  FUN_02206a88();
  uVar1 = 0;
  FUN_021c80bc(0);
  plVar2 = &local_40;
  _swift_dynamicCast(plVar2,auStack_38,PTR___sypN_02578b08 + 8,uVar1,6);
  if (((ulong)plVar2 & 1) == 0) {
    local_60 = 0;
  }
  else {
    local_60 = local_40;
  }
  if (local_60 == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    FUN_02222360(local_60,local_88);
    (*(code *)PTR__objc_release_02578630)(local_60);
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}

