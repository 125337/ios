// FUN_006a7350 @ 006a7350

void FUN_006a7350(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  bool bVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_78;
  uint local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  byte local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38,param_3);
  local_48 = 0;
  local_39 = param_4;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_9);
  uVar6 = local_48;
  bVar1 = DAT_028cbe90 != (code *)0x0;
  if (bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    uVar11 = local_28;
    uVar10 = local_30;
    uVar9 = local_38;
    bVar8 = local_39;
    uVar7 = local_48;
    uVar5 = local_50;
    uVar4 = local_58;
    uVar3 = local_60;
    pcVar2 = DAT_028cbe90;
    local_78 = uVar6;
    uVar12 = 0;
    FUN_006a67d4(0,uVar6,local_68);
    _objc_retainAutoreleasedReturnValue();
    (*pcVar2)(uVar11,uVar10,uVar9,bVar8 & 1,uVar7,uVar5,uVar4,uVar3,uVar12);
    (*(code *)PTR__objc_release_02578630)(uVar12);
    _objc_storeStrong(&local_78,0);
  }
  local_6c = (uint)!bVar1;
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

