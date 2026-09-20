// FUN_015acbac @ 015acbac

void FUN_015acbac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
  if (lVar3 < lVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_objectAtIndexedSubscript__0269cc78);
    _objc_retainAutoreleasedReturnValue();
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_015acd14;
    local_48 = &DAT_02586fe8;
    local_40 = *(undefined8 *)(param_1 + 0x40);
    local_38 = *(undefined8 *)(param_1 + 0x48);
    local_30 = *(undefined8 *)(param_1 + 0x50);
    local_28 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x58),PTR_s_sendItem_toChatName_completion__026b0bd8,uVar2,
               *(undefined8 *)(param_1 + 0x28),&local_60);
    _objc_storeStrong(&local_28,0);
  }
  else if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18));
  }
  return;
}

