// shouldInvalidateLayoutForBoundsChange: @ 01b077b0

/* Function Stack Size: 0x30 bytes */

bool WCRefineCardPageFlowLayout::shouldInvalidateLayoutForBoundsChange_
               (ID param_1,SEL param_2,CGRect param_3)

{
  uint uVar1;
  undefined8 in_d2;
  undefined8 uVar3;
  undefined8 in_d3;
  undefined8 uVar4;
  ID IVar2;
  
  uVar3 = in_d2;
  uVar4 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_collectionView_026a0fd8,param_3.field0_0x0.field0_0x0,
             param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
             param_3.field1_0x10.field1_0x8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar1 = (uint)IVar2;
  FUN_01b07864(in_d2,in_d3,uVar3,uVar4);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return uVar1 ^ 1;
}

