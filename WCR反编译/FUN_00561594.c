// FUN_00561594 @ 00561594

void FUN_00561594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_e8;
  long local_98;
  byte local_89;
  ulong local_88;
  ulong local_80;
  ulong local_78 [3];
  byte local_59;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  plVar2 = &local_58;
  local_58 = 0;
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  _objc_storeStrong(plVar2,param_7);
  local_59 = (byte)plVar2;
  FUN_0056db84();
  uVar3 = local_48;
  FUN_0056e540();
  _objc_retainAutoreleasedReturnValue();
  local_89 = 0;
  uVar4 = local_48;
  local_78[0] = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_dataItem_026a13c8);
  if ((uVar4 & 1) == 0) {
    local_e8 = 0;
  }
  else {
    local_e8 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_dataItem_026a13c8);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_88 = local_e8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_e8;
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  lVar5 = local_58;
  FUN_00565ddc(local_58,local_78[0]);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  local_98 = lVar5;
  if (((local_59 & 1) != 0) && (bVar1 = false, local_80 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
    bVar1 = lVar5 != 0;
  }
  if (bVar1) {
    FUN_00566210(local_80,local_78[0],local_98,local_48);
    DAT_028cb54c = 1;
  }
  (*DAT_028cb488)(local_40,uStack_38,local_30,uStack_28,local_48,local_50,local_58);
  if (bVar1) {
    FUN_0056e5bc();
    DAT_028cb54c = 0;
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(local_78,0);
  _objc_storeStrong(&local_58,0);
  return;
}

