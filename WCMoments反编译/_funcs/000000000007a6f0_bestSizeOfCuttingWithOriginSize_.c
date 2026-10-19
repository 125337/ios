// bestSizeOfCuttingWithOriginSize: @0x7a6f0

/* Function Stack Size: 0x20 bytes */

CGSize WCMYBIBImageData::bestSizeOfCuttingWithOriginSize_(ID param_1,SEL param_2,CGSize param_3)

{
  CGSize CVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_98;
  double local_80;
  double local_78;
  double local_20;
  double dStack_18;
  
  dStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  local_80 = dStack_18;
  _objc_msgSend_wcm_yb_containerSize(param_1);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_wcm_yb_currentOrientation(param_1,local_98);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = (**(code **)(lVar3 + 0x10))();
  local_78 = (double)(**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  (*(code *)PTR__objc_release_00110458)(lVar3);
  (*(code *)PTR__objc_release_00110458)(lVar2);
  if ((((local_78 <= 0.0) || (local_80 <= 0.0)) || (local_20 <= 0.0)) || (dStack_18 <= 0.0)) {
    dStack_18 = *(double *)(PTR__CGSizeZero_001108e0 + 8);
    local_20 = *(double *)PTR__CGSizeZero_001108e0;
  }
  else if ((local_78 < local_20) || (local_80 < dStack_18)) {
    if (dStack_18 / local_80 <= local_20 / local_78) {
      local_80 = (dStack_18 / local_20) * local_78;
    }
    else {
      local_78 = (local_20 / dStack_18) * local_80;
    }
    local_20 = (double)_CGSizeMake(local_78);
    dStack_18 = local_80;
  }
  CVar1.field1_0x8 = dStack_18;
  CVar1.field0_0x0 = local_20;
  return CVar1;
}

