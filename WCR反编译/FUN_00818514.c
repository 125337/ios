// FUN_00818514 @ 00818514

void FUN_00818514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *local_68 [3];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  puVar2 = &local_48;
  local_48 = 0;
  _objc_storeStrong(puVar2,param_7);
  local_50 = param_8;
  FUN_0083b53c();
  if ((((ulong)puVar2 & 1) != 0) && (local_28 != 0)) {
    uVar5 = 0x4034000000000000;
    uVar4 = 0x4034000000000000;
    FUN_0083b734();
    FUN_0083b588(uVar4,uVar5);
    _objc_retainAutoreleasedReturnValue();
    local_68[0] = puVar2;
    if ((puVar2 == (undefined8 *)0x0) ||
       (uVar3 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setIconImage__0269f708),
       (uVar3 & 1) == 0)) {
      bVar1 = false;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setIconImage__0269f708,local_68[0]);
      bVar1 = true;
    }
    _objc_storeStrong(local_68,0);
    if (bVar1) goto LAB_008186fc;
  }
  (*DAT_028cd138)(local_18,local_20,local_28,local_30,local_38,local_40,local_48,local_50);
LAB_008186fc:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

