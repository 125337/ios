// FUN_00f06374 @ 00f06374

void FUN_00f06374(long param_1,byte param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  uint local_34;
  long local_30;
  undefined8 local_28;
  byte local_19;
  long local_18;
  
  local_28 = 0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  bVar1 = (local_19 & 1) != 0;
  local_30 = param_1;
  if (bVar1) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_00f064c4;
    local_50 = &DAT_02582378;
    local_40 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_putData_remotePath_completion__026abb80,uVar4,uVar5,&local_68);
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x38),PTR_s_finish_success_message__026abb10,
               *(undefined8 *)(param_1 + 0x30),0,local_28);
  }
  local_34 = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

