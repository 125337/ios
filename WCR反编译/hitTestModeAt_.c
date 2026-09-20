// hitTestModeAt: @ 0164a07c

/* Function Stack Size: 0x20 bytes */

long_long WCRSuperFloatCropViewController::hitTestModeAt_(ID param_1,SEL param_2,CGPoint param_3)

{
  ID IVar1;
  int iVar2;
  double in_d0;
  double dVar3;
  double dVar4;
  double dVar5;
  double in_d1;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 in_d2;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_d3;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_18;
  
  IVar1 = param_1;
  dVar3 = in_d0;
  dVar6 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_hasActiveCropSelection_026b1f60,param_3.field0_0x0,param_3.field1_0x8);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropShape_026b1ea0);
    iVar2 = 5;
    if (param_1 != 2) {
      iVar2 = 1;
    }
    local_18 = (long_long)iVar2;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropRect_026b1ec0);
    dVar4 = dVar3;
    _CGRectGetMaxX(dVar3,dVar6,in_d2,in_d3);
    dVar4 = dVar4 - 28.0;
    dVar7 = dVar3;
    _CGRectGetMaxY(dVar3,dVar6,in_d2,in_d3);
    dVar7 = dVar7 - 28.0;
    uVar11 = 0x404c000000000000;
    uVar9 = 0x404c000000000000;
    FUN_0163f5dc();
    dVar5 = dVar3 - 22.0;
    dVar8 = dVar6 - 22.0;
    uVar12 = 0x4046000000000000;
    uVar10 = 0x4046000000000000;
    FUN_0163f5dc();
    _CGRectContainsPoint(dVar4,dVar7,uVar9,uVar11,in_d0,in_d1);
    if ((param_1 & 1) == 0) {
      _CGRectContainsPoint(dVar5,dVar8,uVar10,uVar12,in_d0,in_d1);
      if ((param_1 & 1) == 0) {
        _CGRectInset();
        _CGRectContainsPoint(dVar3,dVar6,in_d2,in_d3,in_d0,in_d1);
        if ((param_1 & 1) == 0) {
          local_18 = 0;
        }
        else {
          local_18 = 2;
        }
      }
      else {
        local_18 = 3;
      }
    }
    else {
      local_18 = 4;
    }
  }
  return local_18;
}

