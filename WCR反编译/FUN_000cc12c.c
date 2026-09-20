// FUN_000cc12c @ 000cc12c

double FUN_000cc12c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong local_a0;
  ulong local_98;
  undefined4 local_8c;
  double local_88;
  double local_70;
  ulong local_68;
  double local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  double local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_68 = 0;
  local_60 = param_1;
  uStack_58 = param_2;
  local_50 = param_3;
  uStack_48 = param_4;
  _objc_storeStrong(&local_68,param_5);
  FUN_000cb95c(local_68);
  local_70 = param_1;
  FUN_000cba84(local_68);
  local_88 = param_1;
  if ((local_70 <= 0.0) && (param_1 <= 0.0)) {
    uStack_38 = uStack_58;
    local_40 = local_60;
    uStack_28 = uStack_48;
    local_30 = local_50;
    local_8c = 1;
    goto LAB_000cc50c;
  }
  uVar1 = local_68;
  _objc_getAssociatedObject(local_68,&DAT_028c8299);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_68;
  local_98 = uVar1;
  _objc_getAssociatedObject(local_68,&DAT_028c829a);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uStack_48;
  uVar5 = local_50;
  uVar4 = uStack_58;
  dVar3 = local_60;
  local_a0 = uVar2;
  if ((local_98 == 0) || (uVar2 == 0)) {
LAB_000cc34c:
    if (local_98 != 0) {
      uVar1 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_CGRectValue_0269e128);
      dVar3 = local_60;
      uVar4 = uStack_58;
      uVar5 = local_50;
      uVar6 = uStack_48;
      FUN_000ca628();
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_CGRectValue_0269e128);
        local_40 = dVar3;
        uStack_38 = uVar4;
        local_30 = uVar5;
        uStack_28 = uVar6;
        goto LAB_000cc4dc;
      }
    }
    uStack_38 = uStack_58;
    local_40 = local_60;
    uStack_28 = uStack_48;
    local_30 = local_50;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_CGRectValue_0269e128);
    FUN_000ca628();
    if ((uVar2 & 1) == 0) goto LAB_000cc34c;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_CGRectValue_0269e128);
    local_40 = dVar3;
    uStack_38 = uVar4;
    local_30 = uVar5;
    uStack_28 = uVar6;
  }
LAB_000cc4dc:
  local_8c = 1;
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_98,0);
LAB_000cc50c:
  _objc_storeStrong(&local_68,0);
  return local_40;
}

