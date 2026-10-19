// animatedImageContentsRectAtIndex: @0x8f2ac

/* Function Stack Size: 0x18 bytes */

CGRect WCMYYSpriteSheetImage::animatedImageContentsRectAtIndex_
                 (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  CGRect CVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 in_d1;
  undefined8 in_d2;
  double in_d3;
  undefined8 local_60;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  double dStack_18;
  
  uVar2 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_contentRects));
  if (param_3 < uVar2) {
    _objc_msgSend_objectAtIndexedSubscript_
              (*(undefined8 *)(param_1 + (long)_contentRects),local_60,param_3);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    local_30 = _objc_msgSend_CGRectValue(uVar3,local_60);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    uStack_28 = in_d1;
    local_20 = in_d2;
    dStack_18 = in_d3;
  }
  else {
    uStack_28 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 8);
    local_30 = *(undefined8 *)PTR__CGRectZero_001108d8;
    dStack_18 = *(double *)(PTR__CGRectZero_001108d8 + 0x18);
    local_20 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10);
  }
  CVar1.field0_0x0.field1_0x8 = (double)uStack_28;
  CVar1.field0_0x0.field0_0x0 = (double)local_30;
  CVar1.field1_0x10.field0_0x0 = (double)local_20;
  CVar1.field1_0x10.field1_0x8 = dStack_18;
  return CVar1;
}

