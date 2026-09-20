// FUN_004cf99c @ 004cf99c

double FUN_004cf99c(double param_1,double param_2,undefined8 param_3,double param_4,
                   undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  long local_90;
  long local_88;
  undefined4 local_80;
  double local_70;
  long local_68;
  double local_60;
  double dStack_58;
  undefined8 local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  undefined8 local_30;
  double dStack_28;
  
  local_68 = 0;
  local_60 = param_1;
  dStack_58 = param_2;
  local_50 = param_3;
  dStack_48 = param_4;
  _objc_storeStrong(&local_68,param_5);
  FUN_004ce780(local_68);
  local_70 = param_1;
  if (param_1 <= 0.0) {
    dStack_38 = dStack_58;
    local_40 = local_60;
    dStack_28 = dStack_48;
    local_30 = local_50;
    local_80 = 1;
    goto LAB_004cfe24;
  }
  lVar6 = local_68;
  _objc_getAssociatedObject(local_68,&DAT_028cac92);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = local_68;
  local_88 = lVar6;
  _objc_getAssociatedObject(local_68,&DAT_028cac93);
  _objc_retainAutoreleasedReturnValue();
  local_90 = lVar7;
  if (local_88 == 0) {
    dStack_38 = dStack_58;
    local_40 = local_60;
    dStack_28 = dStack_48;
    local_30 = local_50;
  }
  else {
    lVar6 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_CGRectValue_0269e128);
    dVar4 = dStack_48;
    uVar3 = local_50;
    dVar2 = dStack_58;
    dVar1 = local_60;
    uVar5 = (uint)lVar6;
    local_40 = param_1;
    dStack_38 = param_2;
    local_30 = param_3;
    dStack_28 = param_4;
    if (local_90 != 0) {
      lVar6 = local_90;
      uVar8 = local_50;
      uVar9 = param_3;
      dVar10 = param_2;
      dVar11 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_CGRectValue_0269e128);
      uVar5 = (uint)lVar6;
      FUN_004d035c(dVar1,dVar2,uVar3,dVar4,uVar8,uVar9,dVar10,dVar11);
      if ((uVar5 & 1) != 0) goto LAB_004cfdf4;
    }
    FUN_004d035c(local_60,dStack_58 - local_70,local_50,dStack_48 + local_70,param_1,param_2,param_3
                 ,param_4);
    if ((((uVar5 & 1) == 0) &&
        (FUN_004d035c(local_60,dStack_58,local_50,dStack_48,param_1,param_2 + local_70,param_3,
                      param_4), (uVar5 & 1) == 0)) &&
       (FUN_004d035c(local_60,dStack_58,local_50,dStack_48,param_1,param_2,param_3,param_4),
       (uVar5 & 1) == 0)) {
      if (0.5 <= ABS(dStack_58 - (param_2 + local_70))) {
        dStack_38 = dStack_58;
        local_40 = local_60;
        dStack_28 = dStack_48;
        local_30 = local_50;
      }
      else {
        local_40 = local_60;
        local_30 = local_50;
        dStack_38 = dStack_58 - local_70;
        dStack_28 = dStack_48 + local_70;
      }
    }
  }
LAB_004cfdf4:
  local_80 = 1;
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
LAB_004cfe24:
  _objc_storeStrong(&local_68,0);
  return local_40;
}

