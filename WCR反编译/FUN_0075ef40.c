// FUN_0075ef40 @ 0075ef40

void FUN_0075ef40(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = param_2;
  if ((((DAT_028cc880 & 1) != 0) || (param_2 + -1 != 0 && 0 < param_2)) ||
     (uVar1 = local_18, FUN_0075f108(param_2 + -1), (uVar1 & 1) == 0)) {
    local_24 = 1;
    goto LAB_0075f0f0;
  }
  DAT_028cc880 = 1;
  uVar2 = local_18;
  FUN_0075f444(local_18,&cf_MMTransparentButton);
  uVar1 = local_18;
  if ((uVar2 & 1) == 0) {
LAB_0075f024:
    uVar2 = local_18;
    FUN_0075fef8();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_18;
    local_58 = PTR___NSConcreteGlobalBlock_02578658;
    local_50 = 0xd0800000;
    local_4c = 0;
    local_48 = FUN_0076023c;
    local_40 = &DAT_0257fa18;
    local_30 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_58);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) == 0) goto LAB_0075f024;
    FUN_0075f4f8(local_18);
  }
  DAT_028cc880 = 0;
  local_24 = 0;
LAB_0075f0f0:
  _objc_storeStrong(&local_18,0);
  return;
}

