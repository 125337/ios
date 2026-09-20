// FUN_004fa3a8 @ 004fa3a8

void FUN_004fa3a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long local_a0 [3];
  ulong local_88;
  undefined *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulong local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  ulong local_30;
  undefined *local_28;
  
  local_60 = 0;
  local_58 = param_1;
  _objc_storeStrong(&local_60);
  uVar1 = local_60;
  puVar2 = PTR_s_range_0269ef50;
  local_78 = param_1;
  local_70 = param_4;
  local_68 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_88 = uVar1;
  local_80 = puVar2;
  if (**(ulong **)(param_1 + 0x40) < uVar1) {
    lVar4 = *(long *)(param_1 + 0x20);
    uVar3 = **(undefined8 **)(param_1 + 0x40);
    uVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = uVar1 - **(long **)(param_1 + 0x40);
    local_48 = uVar3;
    local_40 = uVar3;
    local_38 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_substringWithRange__0269d138,uVar3,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_a0[0] = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
    if (lVar4 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      lVar4 = local_a0[0];
      FUN_004fa134(local_a0[0],*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x30),
                   *(undefined8 *)(param_1 + 0x38));
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_appendString__0269ccb0);
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    _objc_storeStrong(local_a0,0);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = local_60;
  puVar2 = PTR_s_range_0269ef50;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_substringWithRange__0269d138,uVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_appendString__0269ccb0);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar1 = local_60;
  puVar2 = PTR_s_range_0269ef50;
  (*(code *)PTR__objc_msgSend_02578628)();
  **(long **)(param_1 + 0x40) = (long)(puVar2 + uVar1);
  local_30 = uVar1;
  local_28 = puVar2;
  _objc_storeStrong(&local_60,0);
  return;
}

