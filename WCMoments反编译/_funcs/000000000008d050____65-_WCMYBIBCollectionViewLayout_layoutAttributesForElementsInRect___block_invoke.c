// ___65-[WCMYBIBCollectionViewLayout_layoutAttributesForElementsInRect:]_block_invoke @0x8d050

void ___65__WCMYBIBCollectionViewLayout_layoutAttributesForElementsInRect___block_invoke
               (long param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined8 local_a8;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  dVar1 = (double)_objc_msgSend_center(local_20,local_a8);
  dVar2 = (double)_objc_msgSend_center(local_20,local_a8);
  dVar5 = *(double *)(param_1 + 0x28);
  dVar6 = *(double *)(param_1 + 0x30);
  dVar3 = (double)_objc_msgSend_distanceBetweenPages(*(undefined8 *)(param_1 + 0x20),local_a8);
  dVar2 = (((dVar2 - dVar5) / dVar6) * dVar3) / 2.0;
  dVar1 = dVar1 + dVar2;
  _objc_msgSend_center(local_20,local_a8);
  uVar4 = _CGPointMake(dVar1);
  _objc_msgSend_setCenter_(uVar4,dVar2,local_20,local_a8);
  _objc_storeStrong(&local_20,0);
  return;
}

