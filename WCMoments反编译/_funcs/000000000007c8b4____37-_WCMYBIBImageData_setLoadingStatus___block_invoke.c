// ___37-[WCMYBIBImageData_setLoadingStatus:]_block_invoke @0x7c8b4

void ___37__WCMYBIBImageData_setLoadingStatus___block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x118) = *(undefined8 *)(param_1 + 0x28);
  _objc_msgSend_delegate(*(undefined8 *)(param_1 + 0x20));
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_wcm_yb_imageData_startLoadingWithStatus_
            (uVar1,local_30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

