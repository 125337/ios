// ___51-[WCMYBIBImageCell_restoreInteractionWithDuration:]_block_invoke.19 @0x6fda4

void ___51__WCMYBIBImageCell_restoreInteractionWithDuration___block_invoke_19(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 local_80;
  
  uVar6 = 0x3fe0000000000000;
  uVar5 = _CGPointMake(0x3fe0000000000000);
  _objc_msgSend_imageScrollView(*(undefined8 *)(param_1 + 0x20),local_80);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_layer(uVar2,local_80);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAnchorPoint_(uVar5,uVar6,uVar3,local_80);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  dVar7 = *(double *)(param_1 + 0x30) * 0.5;
  uVar3 = _CGPointMake(*(double *)(param_1 + 0x28) * 0.5);
  _objc_msgSend_imageScrollView(*(undefined8 *)(param_1 + 0x20),local_80);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setCenter_(uVar3,dVar7,uVar2,local_80);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_imageScrollView(*(undefined8 *)(param_1 + 0x20),local_80);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setUserInteractionEnabled_(uVar2,local_80,1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_imageScrollView(*(undefined8 *)(param_1 + 0x20),local_80);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setScrollEnabled_(uVar2,local_80,1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_wcm_yb_hideToolViews(*(undefined8 *)(param_1 + 0x20),local_80);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,0);
  (*(code *)PTR__objc_release_00110458)(lVar4);
  _objc_msgSend_wcm_yb_hideStatusBar(*(undefined8 *)(param_1 + 0x20),local_80);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,1);
  (*(code *)PTR__objc_release_00110458)(lVar4);
  _objc_msgSend_wcm_yb_collectionView(*(undefined8 *)(param_1 + 0x20),local_80);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setScrollEnabled_(uVar2,local_80,1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(lVar4);
  _objc_msgSend_cuttingImage(*(undefined8 *)(param_1 + 0x20),local_80);
  uVar2 = *(undefined8 *)PTR__CGPointZero_00110850;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)WCMYBIBImageCell::_interactStartPoint);
  puVar1[1] = *(undefined8 *)(PTR__CGPointZero_00110850 + 8);
  *puVar1 = uVar2;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)WCMYBIBImageCell::_interacting) = 0;
  return;
}

