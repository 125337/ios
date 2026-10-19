// wcm_yb_imageViewFrameWithContainerSize:imageSize:orientation: @0x67f6c

/* Function Stack Size: 0x38 bytes */

CGRect WCMYBIBImageLayout::wcm_yb_imageViewFrameWithContainerSize_imageSize_orientation_
                 (ID param_1,SEL param_2,CGSize param_3,CGSize param_4,long_long param_5)

{
  CGRect CVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 local_98;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_30;
  double dStack_28;
  double local_20;
  double dStack_18;
  
  dVar6 = param_4.field1_0x8;
  dVar5 = param_4.field0_0x0;
  local_88 = param_3.field1_0x8;
  dVar4 = param_3.field0_0x0;
  if ((((dVar4 <= 0.0) || (local_88 <= 0.0)) || (dVar5 <= 0.0)) || (dVar6 <= 0.0)) {
    dStack_28 = *(double *)(PTR__CGRectZero_001108d8 + 8);
    local_30 = *(undefined8 *)PTR__CGRectZero_001108d8;
    dStack_18 = *(double *)(PTR__CGRectZero_001108d8 + 0x18);
    local_20 = *(double *)(PTR__CGRectZero_001108d8 + 0x10);
  }
  else {
    lVar2 = _objc_msgSend_fillTypeByOrientation_(param_1,local_98,param_5);
    local_80 = dVar4;
    if (lVar2 == 0) {
      local_70 = 0.0;
      dVar3 = dVar4 * (dVar6 / dVar5);
      if (dVar5 / dVar6 < dVar4 / local_88) {
        local_78 = 0.0;
        local_88 = dVar3;
      }
      else {
        local_78 = (local_88 - dVar3) / 2.0;
        local_88 = dVar3;
      }
    }
    else {
      if (lVar2 != 1) {
        dStack_28 = *(double *)(PTR__CGRectZero_001108d8 + 8);
        local_30 = *(undefined8 *)PTR__CGRectZero_001108d8;
        dStack_18 = *(double *)(PTR__CGRectZero_001108d8 + 0x18);
        local_20 = *(double *)(PTR__CGRectZero_001108d8 + 0x10);
        goto LAB_0006819c;
      }
      if (dVar5 / dVar6 < dVar4 / local_88) {
        local_80 = local_88 * (dVar5 / dVar6);
        local_70 = (dVar4 - local_80) / 2.0;
        local_78 = 0.0;
      }
      else {
        dVar4 = dVar4 * (dVar6 / dVar5);
        local_70 = 0.0;
        local_78 = (local_88 - dVar4) / 2.0;
        local_88 = dVar4;
      }
    }
    local_30 = _CGRectMake(local_70);
    dStack_28 = local_78;
    local_20 = local_80;
    dStack_18 = local_88;
  }
LAB_0006819c:
  CVar1.field0_0x0.field1_0x8 = dStack_28;
  CVar1.field0_0x0.field0_0x0 = (double)local_30;
  CVar1.field1_0x10.field0_0x0 = local_20;
  CVar1.field1_0x10.field1_0x8 = dStack_18;
  return CVar1;
}

