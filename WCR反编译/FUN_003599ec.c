// FUN_003599ec @ 003599ec

void FUN_003599ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong local_e8;
  long local_d8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  ulong local_78;
  ulong local_70;
  bool local_61;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_44;
  undefined8 local_40;
  long local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  if (local_38 == 0) {
    local_d8 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_d8 = local_38;
  }
  local_40 = param_3;
  _objc_storeStrong(&local_38,local_d8);
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  lVar6 = local_38;
  if (lVar3 == 0 || lVar3 + -1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar6;
    local_44 = 1;
    goto LAB_00359d28;
  }
  uVar4 = local_30;
  FUN_003b4688(lVar3 + -1);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = local_30;
  local_50 = uVar4;
  FUN_003b4b34();
  local_61 = false;
  bVar1 = (local_e8 & 1) == 0;
  if (bVar1) {
    local_e8 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    FUN_003b4c6c();
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_e8;
  }
  local_61 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_e8;
  if ((local_61 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  uVar4 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
  if (uVar4 == 0) {
    uVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
    if (uVar4 != 0) goto LAB_00359bd0;
    lVar6 = local_38;
    FUN_003b4ff8(local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_44 = 1;
    local_28 = lVar6;
  }
  else {
LAB_00359bd0:
    uVar4 = local_50;
    FUN_003b5138();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_58;
    local_70 = uVar4;
    FUN_003b5138();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = local_38;
    uVar2 = local_70;
    local_b0 = PTR___NSConcreteGlobalBlock_02578658;
    local_a8 = 0xd0800000;
    local_a4 = 0;
    local_a0 = FUN_003b52dc;
    local_98 = &DAT_0257cae8;
    local_78 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_78;
    local_90 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = uVar4;
    local_80 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar6,PTR_s_sortedArrayUsingComparator__0269fae8,&local_b0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar6;
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_90,0);
    local_44 = 1;
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
LAB_00359d28:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

