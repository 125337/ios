// _newBlendedImageWithFrame: @0x96bb8

/* Function Stack Size: 0x18 bytes */

CGImage * WCMYYImageDecoder::_newBlendedImageWithFrame_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 local_268;
  CGImage *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar2 = _objc_msgSend_dispose(local_38,local_268);
  if (lVar2 + -2 == 0) {
    lVar2 = _objc_msgSend_blend(local_38,local_268);
    if (lVar2 == 1) {
      lVar2 = _CGBitmapContextCreateImage(*(undefined8 *)(local_28 + 0x88));
      IVar1 = local_28;
      uVar3 = _objc_msgSend_index(local_38,local_268);
      lVar4 = _objc_msgSend__newUnblendedImageAtIndex_extendToCanvas_decoded_
                        (IVar1,local_268,uVar3,0,0);
      if (lVar4 != 0) {
        uVar3 = *(undefined8 *)(local_28 + 0x88);
        uVar5 = _objc_msgSend_offsetX(local_38,local_268);
        uVar6 = _objc_msgSend_offsetY(local_38,local_268);
        dVar7 = (double)uVar6;
        uVar6 = _objc_msgSend_width(local_38,local_268);
        dVar8 = (double)uVar6;
        uVar6 = _objc_msgSend_height(local_38,local_268);
        dVar12 = (double)uVar6;
        uVar9 = _CGRectMake((double)uVar5);
        _CGContextDrawImage(uVar9,dVar7,dVar8,dVar12,uVar3,lVar4);
        _CFRelease(lVar4);
      }
      local_40 = (CGImage *)_CGBitmapContextCreateImage(*(undefined8 *)(local_28 + 0x88));
      uVar3 = *(undefined8 *)(local_28 + 0x88);
      uVar11 = NEON_ucvtf(*(undefined8 *)(local_28 + 0xc0));
      uVar13 = NEON_ucvtf(*(undefined8 *)(local_28 + 200));
      uVar10 = 0;
      uVar9 = _CGRectMake(0);
      _CGContextClearRect(uVar9,uVar10,uVar11,uVar13,uVar3);
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(local_28 + 0x88);
        uVar11 = NEON_ucvtf(*(undefined8 *)(local_28 + 0xc0));
        uVar13 = NEON_ucvtf(*(undefined8 *)(local_28 + 200));
        uVar10 = 0;
        uVar9 = _CGRectMake(0);
        _CGContextDrawImage(uVar9,uVar10,uVar11,uVar13,uVar3,lVar2);
        _CFRelease(lVar2);
      }
    }
    else {
      lVar2 = _CGBitmapContextCreateImage(*(undefined8 *)(local_28 + 0x88));
      IVar1 = local_28;
      uVar3 = _objc_msgSend_index(local_38,local_268);
      lVar4 = _objc_msgSend__newUnblendedImageAtIndex_extendToCanvas_decoded_
                        (IVar1,local_268,uVar3,0,0);
      if (lVar4 != 0) {
        uVar3 = *(undefined8 *)(local_28 + 0x88);
        uVar5 = _objc_msgSend_offsetX(local_38,local_268);
        uVar6 = _objc_msgSend_offsetY(local_38,local_268);
        dVar7 = (double)uVar6;
        uVar6 = _objc_msgSend_width(local_38,local_268);
        dVar8 = (double)uVar6;
        uVar6 = _objc_msgSend_height(local_38,local_268);
        dVar12 = (double)uVar6;
        uVar9 = _CGRectMake((double)uVar5);
        _CGContextClearRect(uVar9,dVar7,dVar8,dVar12,uVar3);
        uVar3 = *(undefined8 *)(local_28 + 0x88);
        uVar5 = _objc_msgSend_offsetX(local_38,local_268);
        uVar6 = _objc_msgSend_offsetY(local_38,local_268);
        dVar7 = (double)uVar6;
        uVar6 = _objc_msgSend_width(local_38,local_268);
        dVar8 = (double)uVar6;
        uVar6 = _objc_msgSend_height(local_38,local_268);
        dVar12 = (double)uVar6;
        uVar9 = _CGRectMake((double)uVar5);
        _CGContextDrawImage(uVar9,dVar7,dVar8,dVar12,uVar3,lVar4);
        _CFRelease(lVar4);
      }
      local_40 = (CGImage *)_CGBitmapContextCreateImage(*(undefined8 *)(local_28 + 0x88));
      uVar3 = *(undefined8 *)(local_28 + 0x88);
      uVar11 = NEON_ucvtf(*(undefined8 *)(local_28 + 0xc0));
      uVar13 = NEON_ucvtf(*(undefined8 *)(local_28 + 200));
      uVar10 = 0;
      uVar9 = _CGRectMake(0);
      _CGContextClearRect(uVar9,uVar10,uVar11,uVar13,uVar3);
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(local_28 + 0x88);
        uVar11 = NEON_ucvtf(*(undefined8 *)(local_28 + 0xc0));
        uVar13 = NEON_ucvtf(*(undefined8 *)(local_28 + 200));
        uVar10 = 0;
        uVar9 = _CGRectMake(0);
        _CGContextDrawImage(uVar9,uVar10,uVar11,uVar13,uVar3,lVar2);
        _CFRelease(lVar2);
      }
    }
  }
  else {
    lVar2 = _objc_msgSend_dispose(lVar2 + -2,local_38,local_268);
    if (lVar2 + -1 == 0) {
      lVar2 = _objc_msgSend_blend(0,local_38,local_268);
      IVar1 = local_28;
      if (lVar2 == 1) {
        uVar3 = _objc_msgSend_index(local_38,local_268);
        lVar2 = _objc_msgSend__newUnblendedImageAtIndex_extendToCanvas_decoded_
                          (IVar1,local_268,uVar3,0,0);
        if (lVar2 != 0) {
          uVar3 = *(undefined8 *)(local_28 + 0x88);
          uVar5 = _objc_msgSend_offsetX(local_38,local_268);
          uVar6 = _objc_msgSend_offsetY(local_38,local_268);
          dVar7 = (double)uVar6;
          uVar6 = _objc_msgSend_width(local_38,local_268);
          dVar8 = (double)uVar6;
          uVar6 = _objc_msgSend_height(local_38,local_268);
          dVar12 = (double)uVar6;
          uVar9 = _CGRectMake((double)uVar5);
          _CGContextDrawImage(uVar9,dVar7,dVar8,dVar12,uVar3,lVar2);
          _CFRelease(lVar2);
        }
        local_40 = (CGImage *)_CGBitmapContextCreateImage(*(undefined8 *)(local_28 + 0x88));
        uVar3 = *(undefined8 *)(local_28 + 0x88);
        uVar5 = _objc_msgSend_offsetX(local_38,local_268);
        uVar6 = _objc_msgSend_offsetY(local_38,local_268);
        dVar7 = (double)uVar6;
        uVar6 = _objc_msgSend_width(local_38,local_268);
        dVar8 = (double)uVar6;
        uVar6 = _objc_msgSend_height(local_38,local_268);
        dVar12 = (double)uVar6;
        uVar9 = _CGRectMake((double)uVar5);
        _CGContextClearRect(uVar9,dVar7,dVar8,dVar12,uVar3);
      }
      else {
        uVar3 = _objc_msgSend_index(local_38,local_268);
        lVar2 = _objc_msgSend__newUnblendedImageAtIndex_extendToCanvas_decoded_
                          (IVar1,local_268,uVar3,0,0);
        if (lVar2 != 0) {
          uVar3 = *(undefined8 *)(local_28 + 0x88);
          uVar5 = _objc_msgSend_offsetX(local_38,local_268);
          uVar6 = _objc_msgSend_offsetY(local_38,local_268);
          dVar7 = (double)uVar6;
          uVar6 = _objc_msgSend_width(local_38,local_268);
          dVar8 = (double)uVar6;
          uVar6 = _objc_msgSend_height(local_38,local_268);
          dVar12 = (double)uVar6;
          uVar9 = _CGRectMake((double)uVar5);
          _CGContextClearRect(uVar9,dVar7,dVar8,dVar12,uVar3);
          uVar3 = *(undefined8 *)(local_28 + 0x88);
          uVar5 = _objc_msgSend_offsetX(local_38,local_268);
          uVar6 = _objc_msgSend_offsetY(local_38,local_268);
          dVar7 = (double)uVar6;
          uVar6 = _objc_msgSend_width(local_38,local_268);
          dVar8 = (double)uVar6;
          uVar6 = _objc_msgSend_height(local_38,local_268);
          dVar12 = (double)uVar6;
          uVar9 = _CGRectMake((double)uVar5);
          _CGContextDrawImage(uVar9,dVar7,dVar8,dVar12,uVar3,lVar2);
          _CFRelease(lVar2);
        }
        local_40 = (CGImage *)_CGBitmapContextCreateImage(*(undefined8 *)(local_28 + 0x88));
        uVar3 = *(undefined8 *)(local_28 + 0x88);
        uVar5 = _objc_msgSend_offsetX(local_38,local_268);
        uVar6 = _objc_msgSend_offsetY(local_38,local_268);
        dVar7 = (double)uVar6;
        uVar6 = _objc_msgSend_width(local_38,local_268);
        dVar8 = (double)uVar6;
        uVar6 = _objc_msgSend_height(local_38,local_268);
        dVar12 = (double)uVar6;
        uVar9 = _CGRectMake((double)uVar5);
        _CGContextClearRect(uVar9,dVar7,dVar8,dVar12,uVar3);
      }
    }
    else {
      lVar2 = _objc_msgSend_blend(lVar2 + -1,local_38,local_268);
      IVar1 = local_28;
      if (lVar2 == 1) {
        uVar3 = _objc_msgSend_index(local_38,local_268);
        lVar2 = _objc_msgSend__newUnblendedImageAtIndex_extendToCanvas_decoded_
                          (IVar1,local_268,uVar3,0,0);
        if (lVar2 != 0) {
          uVar3 = *(undefined8 *)(local_28 + 0x88);
          uVar5 = _objc_msgSend_offsetX(local_38,local_268);
          uVar6 = _objc_msgSend_offsetY(local_38,local_268);
          dVar7 = (double)uVar6;
          uVar6 = _objc_msgSend_width(local_38,local_268);
          dVar8 = (double)uVar6;
          uVar6 = _objc_msgSend_height(local_38,local_268);
          dVar12 = (double)uVar6;
          uVar9 = _CGRectMake((double)uVar5);
          _CGContextDrawImage(uVar9,dVar7,dVar8,dVar12,uVar3,lVar2);
          _CFRelease(lVar2);
        }
        local_40 = (CGImage *)_CGBitmapContextCreateImage(*(undefined8 *)(local_28 + 0x88));
      }
      else {
        uVar3 = _objc_msgSend_index(local_38,local_268);
        lVar2 = _objc_msgSend__newUnblendedImageAtIndex_extendToCanvas_decoded_
                          (IVar1,local_268,uVar3,0,0);
        if (lVar2 != 0) {
          uVar3 = *(undefined8 *)(local_28 + 0x88);
          uVar5 = _objc_msgSend_offsetX(local_38,local_268);
          uVar6 = _objc_msgSend_offsetY(local_38,local_268);
          dVar7 = (double)uVar6;
          uVar6 = _objc_msgSend_width(local_38,local_268);
          dVar8 = (double)uVar6;
          uVar6 = _objc_msgSend_height(local_38,local_268);
          dVar12 = (double)uVar6;
          uVar9 = _CGRectMake((double)uVar5);
          _CGContextClearRect(uVar9,dVar7,dVar8,dVar12,uVar3);
          uVar3 = *(undefined8 *)(local_28 + 0x88);
          uVar5 = _objc_msgSend_offsetX(local_38,local_268);
          uVar6 = _objc_msgSend_offsetY(local_38,local_268);
          dVar7 = (double)uVar6;
          uVar6 = _objc_msgSend_width(local_38,local_268);
          dVar8 = (double)uVar6;
          uVar6 = _objc_msgSend_height(local_38,local_268);
          dVar12 = (double)uVar6;
          uVar9 = _CGRectMake((double)uVar5);
          _CGContextDrawImage(uVar9,dVar7,dVar8,dVar12,uVar3,lVar2);
          _CFRelease(lVar2);
        }
        local_40 = (CGImage *)_CGBitmapContextCreateImage(*(undefined8 *)(local_28 + 0x88));
      }
    }
  }
  _objc_storeStrong(&local_38,0);
  return local_40;
}

