// FUN_000d5050 @ 000d5050

/* WARNING: Removing unreachable block (ram,0x000d53b8) */
/* WARNING: Removing unreachable block (ram,0x000d5398) */

void FUN_000d5050(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar7;
  ulong uVar8;
  ulong local_78 [3];
  undefined8 local_60;
  byte local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 *puVar6;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  local_50 = 0;
  local_60 = 0;
  uVar5 = local_28;
  FUN_000db8b8(local_28,local_38,&local_48,&local_60);
  puVar6 = &local_50;
  _objc_storeStrong(puVar6,local_60);
  uVar4 = (uint)puVar6;
  local_51 = (byte)uVar5;
  local_78[0] = 0;
  if ((uVar5 & 1) == 0) {
    FUN_000d8808();
    uVar5 = local_38;
    bVar3 = false;
    if ((uVar4 & 1) != 0) {
      uVar7 = local_28;
      FUN_000db77c();
      _objc_retainAutoreleasedReturnValue();
      bVar3 = uVar5 == uVar7;
      (*(code *)PTR__objc_release_02578630)(uVar7);
    }
    uVar7 = local_28;
    uVar2 = local_30;
    uVar5 = local_38;
    pcVar1 = DAT_028c82f8;
    if (bVar3) {
      uVar8 = local_28;
      FUN_000dbdb8(local_28,local_40);
      _objc_retainAutoreleasedReturnValue();
      (*pcVar1)(uVar7,uVar2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_78[0];
      local_78[0] = uVar7;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_release_02578630)(uVar8);
    }
    else {
      (*DAT_028c82f8)(local_28,local_30,local_38,local_40);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_78[0];
      local_78[0] = uVar7;
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
  }
  else {
    uVar7 = local_28;
    (*DAT_028c82f8)(local_28,local_30,local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_78[0];
    local_78[0] = uVar7;
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  if ((local_51 & 1) != 0) {
    FUN_000dc214(local_28,local_48,local_50);
  }
  uVar5 = local_78[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_78);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(uVar5);
  return;
}

