// ____NSStringPathScale_block_invoke @0x9c81c

void ____NSStringPathScale_block_invoke(long param_1)

{
  ulong uVar1;
  long lVar2;
  long extraout_x1;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_a0;
  undefined8 local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_40 = 0;
  local_38 = param_1;
  _objc_storeStrong(&local_40);
  uVar1 = _objc_msgSend_range(local_40,local_a0);
  if (2 < uVar1) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = _objc_msgSend_range(local_40,local_a0);
    lVar2 = lVar2 + 1;
    _objc_msgSend_range(local_40,local_a0);
    local_30 = extraout_x1 + -2;
    local_28 = lVar2;
    local_20 = lVar2;
    local_18 = local_30;
    _objc_msgSend_substringWithRange_(uVar3,local_a0,lVar2,local_30);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend_doubleValue(uVar3,local_a0);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar4;
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  _objc_storeStrong(&local_40,0);
  return;
}

