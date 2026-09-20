// FUN_006a714c @ 006a714c

void FUN_006a714c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_70;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  uVar6 = local_40;
  bVar1 = DAT_028cbe88 != (code *)0x0;
  if (bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    uVar10 = local_28;
    uVar9 = local_30;
    uVar8 = local_38;
    uVar7 = local_40;
    uVar5 = local_48;
    uVar4 = local_50;
    uVar3 = local_58;
    pcVar2 = DAT_028cbe88;
    local_70 = uVar6;
    uVar11 = 0;
    FUN_006a67d4(0,uVar6,local_60);
    _objc_retainAutoreleasedReturnValue();
    (*pcVar2)(uVar10,uVar9,uVar8,uVar7,uVar5,uVar4,uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar11);
    _objc_storeStrong(&local_70,0);
  }
  local_64 = (uint)!bVar1;
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

