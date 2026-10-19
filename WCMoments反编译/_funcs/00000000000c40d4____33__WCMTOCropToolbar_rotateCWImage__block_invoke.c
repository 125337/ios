// ___33+[WCMTOCropToolbar_rotateCWImage]_block_invoke @0xc40d4

void ___33__WCMTOCropToolbar_rotateCWImage__block_invoke
               (undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_b0;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_3;
  _objc_storeStrong();
  uVar1 = _objc_msgSend_CGContext(local_20,local_b0);
  uVar2 = _objc_msgSend_size(*(undefined8 *)(param_3 + 0x20),local_b0);
  _objc_msgSend_size(*(undefined8 *)(param_3 + 0x20),local_b0);
  _CGContextTranslateCTM(uVar2,uVar1);
  _CGContextRotateCTM(0x400921fb54442d18,uVar1);
  uVar3 = _objc_msgSend_size(*(undefined8 *)(param_3 + 0x20),local_b0);
  _objc_msgSend_size(*(undefined8 *)(param_3 + 0x20),local_b0);
  uVar5 = 0;
  uVar4 = _CGRectMake(0);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  _objc_retainAutorelease();
  uVar2 = _objc_msgSend_CGImage(uVar2,local_b0);
  _CGContextDrawImage(uVar4,uVar5,uVar3,param_2,uVar1,uVar2);
  _objc_storeStrong(&local_20,0);
  return;
}

