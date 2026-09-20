// FUN_006a615c @ 006a615c

void FUN_006a615c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  undefined8 local_58;
  uint local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_7);
  uVar5 = local_30;
  bVar1 = DAT_028cbe70 != (code *)0x0;
  if (bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    uVar9 = local_18;
    uVar8 = local_20;
    uVar7 = local_28;
    uVar6 = local_30;
    uVar4 = local_38;
    uVar3 = local_40;
    pcVar2 = DAT_028cbe70;
    local_58 = uVar5;
    uVar10 = 0;
    FUN_006a67d4(0,uVar5,local_48);
    _objc_retainAutoreleasedReturnValue();
    (*pcVar2)(uVar9,uVar8,uVar7,uVar6,uVar4,uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar10);
    _objc_storeStrong(&local_58,0);
  }
  local_4c = (uint)!bVar1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

