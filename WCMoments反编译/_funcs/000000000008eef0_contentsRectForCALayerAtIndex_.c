// contentsRectForCALayerAtIndex: @0x8eef0

/* Function Stack Size: 0x18 bytes */

CGRect WCMYYSpriteSheetImage::contentsRectForCALayerAtIndex_
                 (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  CGRect CVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 local_f8;
  undefined8 local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  dStack_38 = 0.0;
  dStack_28 = 1.0;
  local_30 = 1.0;
  local_40 = _CGRectMake(0);
  dVar5 = dStack_38;
  dVar7 = local_30;
  dVar8 = dStack_28;
  uVar2 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_contentRects),local_f8);
  if (param_3 < uVar2) {
    dVar3 = (double)_objc_msgSend_size(param_3 - uVar2,param_1,local_f8);
    dVar6 = dVar5;
    dVar4 = (double)_objc_msgSend_animatedImageContentsRectAtIndex_(param_1,local_f8,param_3);
    if ((0.01 < dVar3) && (0.01 < dVar5)) {
      dStack_38 = dVar6 / dVar5;
      local_30 = dVar7 / dVar3;
      dStack_28 = dVar8 / dVar5;
      _CGRectMake(0);
      local_40 = _CGRectIntersection(dVar4 / dVar3);
      uVar2 = _CGRectIsNull(local_40,dStack_38,local_30,dStack_28);
      if (((uVar2 & 1) != 0) ||
         (uVar2 = _CGRectIsEmpty(local_40,dStack_38,local_30,dStack_28), (uVar2 & 1) != 0)) {
        dStack_38 = 0.0;
        dStack_28 = 1.0;
        local_30 = 1.0;
        local_40 = _CGRectMake(0);
      }
    }
  }
  CVar1.field0_0x0.field1_0x8 = dStack_38;
  CVar1.field0_0x0.field0_0x0 = (double)local_40;
  CVar1.field1_0x10.field0_0x0 = local_30;
  CVar1.field1_0x10.field1_0x8 = dStack_28;
  return CVar1;
}

