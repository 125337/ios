// FUN_0008d1bc @ 0008d1bc

undefined8
FUN_0008d1bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  uVar1 = local_48;
  FUN_0008d3c0(local_48,local_50,0);
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  FUN_0007e6b8();
  if ((uVar1 & 1) == 0) {
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
    local_40 = param_1;
    uStack_38 = param_2;
    local_30 = param_3;
    uStack_28 = param_4;
  }
  uVar2 = local_40;
  uVar3 = uStack_38;
  uVar4 = local_30;
  uVar5 = uStack_28;
  FUN_0007e6b8();
  if ((uVar1 & 1) == 0) {
    FUN_0008c210(local_48,local_50);
    local_40 = uVar2;
    uStack_38 = uVar3;
    local_30 = uVar4;
    uStack_28 = uVar5;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  return local_40;
}

