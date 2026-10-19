// ___51-[WCMYBIBImageCell_restoreInteractionWithDuration:]_block_invoke @0x6fb8c

void ___51__WCMYBIBImageCell_restoreInteractionWithDuration___block_invoke
               (undefined1 param_1 [16],double param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 local_d8;
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  undefined8 local_60;
  double dStack_58;
  undefined8 local_50;
  double dStack_48;
  double local_40;
  double local_38;
  long local_30;
  long local_28;
  
  local_30 = param_3;
  local_28 = param_3;
  _objc_msgSend_wcm_yb_backView(*(undefined8 *)(param_3 + 0x20));
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_backgroundColor(uVar1,local_d8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_colorWithAlphaComponent_(0x3ff0000000000000,uVar2,local_d8);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_wcm_yb_backView(*(undefined8 *)(param_3 + 0x20),local_d8);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setBackgroundColor_(uVar4,local_d8,uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_imageScrollView(*(undefined8 *)(param_3 + 0x20),local_d8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_layer(uVar1,local_d8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_40 = (double)_objc_msgSend_anchorPoint(uVar2,local_d8);
  local_38 = param_2;
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  dVar5 = *(double *)(param_3 + 0x30) * local_38;
  local_50 = _CGPointMake(*(double *)(param_3 + 0x28) * local_40);
  dStack_48 = dVar5;
  _objc_msgSend_imageScrollView(*(undefined8 *)(param_3 + 0x20),local_d8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dStack_58 = dStack_48;
  local_60 = local_50;
  _objc_msgSend_setCenter_(local_50,dStack_48,uVar1,local_d8);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _memcpy(auStack_90,PTR__CGAffineTransformIdentity_00110738,0x30);
  _objc_msgSend_imageScrollView(*(undefined8 *)(param_3 + 0x20),local_d8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_c0,auStack_90,0x30);
  _objc_msgSend_setTransform_(uVar1,local_d8,auStack_c0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

