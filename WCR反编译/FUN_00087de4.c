// FUN_00087de4 @ 00087de4

undefined8
FUN_00087de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_58 = 0;
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  uStack_38 = param_4;
  _objc_storeStrong(&local_58,param_5);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_6);
  if (((local_58 == 0) || (local_60 == 0)) || (local_60 == local_58)) {
    uStack_28 = uStack_48;
    local_30 = local_50;
    uStack_18 = uStack_38;
    local_20 = local_40;
  }
  else {
    uVar1 = local_50;
    uVar2 = uStack_48;
    uVar3 = local_40;
    uVar4 = uStack_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_convertRect_toView__0269ded8,local_60);
    local_30 = uVar1;
    uStack_28 = uVar2;
    local_20 = uVar3;
    uStack_18 = uVar4;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  return local_30;
}

