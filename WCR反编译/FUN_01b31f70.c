// FUN_01b31f70 @ 01b31f70

void FUN_01b31f70(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  byte local_30;
  uint local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = lVar1;
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_01b320c4;
    local_48 = &DAT_0258b2b8;
    local_38 = *(undefined8 *)(param_1 + 0x40);
    local_30 = *(byte *)(param_1 + 0x50) & 1;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_attemptLocateMessageWrap_forSess_026bee98,uVar3,uVar4,uVar5,uVar6,0x1c,
               &local_60);
    _objc_storeStrong(&local_40,0);
  }
  local_2c = (uint)(lVar1 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

