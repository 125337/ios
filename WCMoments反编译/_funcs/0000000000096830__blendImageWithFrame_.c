// _blendImageWithFrame: @0x96830

/* Function Stack Size: 0x18 bytes */

void WCMYYImageDecoder::_blendImageWithFrame_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 local_d0;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar2 = _objc_msgSend_dispose(local_38,local_d0);
  if (lVar2 + -2 != 0) {
    lVar2 = _objc_msgSend_dispose(lVar2 + -2,local_38,local_d0);
    if (lVar2 + -1 == 0) {
      uVar5 = *(undefined8 *)(local_28 + 0x88);
      uVar3 = _objc_msgSend_offsetX(local_38,local_d0);
      uVar4 = _objc_msgSend_offsetY(local_38,local_d0);
      dVar6 = (double)uVar4;
      uVar4 = _objc_msgSend_width(local_38,local_d0);
      dVar7 = (double)uVar4;
      uVar4 = _objc_msgSend_height(local_38,local_d0);
      dVar9 = (double)uVar4;
      uVar8 = _CGRectMake((double)uVar3);
      _CGContextClearRect(uVar8,dVar6,dVar7,dVar9,uVar5);
    }
    else {
      lVar2 = _objc_msgSend_blend(lVar2 + -1,local_38,local_d0);
      IVar1 = local_28;
      if (lVar2 == 1) {
        uVar5 = _objc_msgSend_index(local_38,local_d0);
        lVar2 = _objc_msgSend__newUnblendedImageAtIndex_extendToCanvas_decoded_
                          (IVar1,local_d0,uVar5,0,0);
        if (lVar2 != 0) {
          uVar5 = *(undefined8 *)(local_28 + 0x88);
          uVar3 = _objc_msgSend_offsetX(local_38,local_d0);
          uVar4 = _objc_msgSend_offsetY(local_38,local_d0);
          dVar6 = (double)uVar4;
          uVar4 = _objc_msgSend_width(local_38,local_d0);
          dVar7 = (double)uVar4;
          uVar4 = _objc_msgSend_height(local_38,local_d0);
          dVar9 = (double)uVar4;
          uVar8 = _CGRectMake((double)uVar3);
          _CGContextDrawImage(uVar8,dVar6,dVar7,dVar9,uVar5,lVar2);
          _CFRelease(lVar2);
        }
      }
      else {
        uVar5 = *(undefined8 *)(local_28 + 0x88);
        uVar3 = _objc_msgSend_offsetX(local_38,local_d0);
        uVar4 = _objc_msgSend_offsetY(local_38,local_d0);
        dVar6 = (double)uVar4;
        uVar4 = _objc_msgSend_width(local_38,local_d0);
        dVar7 = (double)uVar4;
        uVar4 = _objc_msgSend_height(local_38,local_d0);
        dVar9 = (double)uVar4;
        uVar8 = _CGRectMake((double)uVar3);
        _CGContextClearRect(uVar8,dVar6,dVar7,dVar9,uVar5);
        IVar1 = local_28;
        uVar5 = _objc_msgSend_index(local_38,local_d0);
        lVar2 = _objc_msgSend__newUnblendedImageAtIndex_extendToCanvas_decoded_
                          (IVar1,local_d0,uVar5,0,0);
        if (lVar2 != 0) {
          uVar5 = *(undefined8 *)(local_28 + 0x88);
          uVar3 = _objc_msgSend_offsetX(local_38,local_d0);
          uVar4 = _objc_msgSend_offsetY(local_38,local_d0);
          dVar6 = (double)uVar4;
          uVar4 = _objc_msgSend_width(local_38,local_d0);
          dVar7 = (double)uVar4;
          uVar4 = _objc_msgSend_height(local_38,local_d0);
          dVar9 = (double)uVar4;
          uVar8 = _CGRectMake((double)uVar3);
          _CGContextDrawImage(uVar8,dVar6,dVar7,dVar9,uVar5,lVar2);
          _CFRelease(lVar2);
        }
      }
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

