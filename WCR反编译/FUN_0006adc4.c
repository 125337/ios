// FUN_0006adc4 @ 0006adc4

void FUN_0006adc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_40;
  local_40 = 0;
  local_38 = param_4;
  local_30 = param_3;
  local_28 = param_1;
  uStack_20 = param_2;
  _objc_storeStrong(puVar2,param_5);
  uVar1 = (uint)puVar2;
  FUN_00077820();
  if ((uVar1 & 1) == 0) {
    uVar3 = local_30;
    (*DAT_028c7da0)(local_28,uStack_20,local_30,local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar3;
  }
  else {
    uVar3 = local_40;
    FUN_00077868(local_28,uStack_20);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar3;
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

