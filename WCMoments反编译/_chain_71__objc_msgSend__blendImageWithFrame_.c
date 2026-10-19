// ============ 功能链 71  根: _objc_msgSend$_blendImageWithFrame: @0xc7240 ============
// 节点 13，按调用深度排序，自上而下读

// ---- [d0] _objc_msgSend$_blendImageWithFrame: @0xc7240 ----
// CALLERS: (根)
// CALLEES: _blendImageWithFrame:


void _objc_msgSend__blendImageWithFrame_(undefined8 param_1)



{

  (*(code *)PTR__objc_msgSend_00110420)(param_1,"_blendImageWithFrame:");

  return;

}






// ---- [d1] _blendImageWithFrame: @0x96830 ----
// CALLERS: _objc_msgSend$_blendImageWithFrame:
// CALLEES: _CGRectMake, index, index, width, height, offsetX, offsetY, dispose, blend, width


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






// ---- [d2] _CGRectMake @0x77fc ----
// CALLERS: positionIndicator, layoutIndicatorContent, viewDidLoad, viewDidLayoutSubviews, tableView:cellForRowAtIndexPath:, _WCMEmojiText, frameOfPresentedViewInContainerView, viewDidLoad
// CALLEES: (叶)


undefined1  [16] _CGRectMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d2] index @0x2b1f4 ----
// CALLERS: updateVideoCounts, viewDidLayoutSubviews, viewDidAppear:, prepareVideoAtIndex:, prepareVideoPaths:index:offset:, warmNeighbors, activateVideo, extendVideoQueue:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



char * WCMVideoController::index(char *param_1,int param_2)



{

  return *(char **)(param_1 + _index);

}






// ---- [d2] index @0x93290 ----
// CALLERS: updateVideoCounts, viewDidLayoutSubviews, viewDidAppear:, prepareVideoAtIndex:, prepareVideoPaths:index:offset:, warmNeighbors, activateVideo, extendVideoQueue:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



char * WCMYYImageFrame::index(char *param_1,int param_2)



{

  return *(char **)(param_1 + 8);

}






// ---- [d2] width @0x932d0 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$width
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::width(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x10);

}






// ---- [d2] height @0x93310 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$height
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::height(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x18);

}






// ---- [d2] offsetX @0x93350 ----
// CALLERS: _frameAtIndex:decodeForDisplay:, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$offsetX
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::offsetX(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x20);

}






// ---- [d2] offsetY @0x93390 ----
// CALLERS: _frameAtIndex:decodeForDisplay:, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$offsetY
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::offsetY(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x28);

}






// ---- [d2] dispose @0x93410 ----
// CALLERS: _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$dispose
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::dispose(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x38);

}






// ---- [d2] blend @0x93450 ----
// CALLERS: _updateSourceAPNG, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$blend
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::blend(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x40);

}






// ---- [d2] width @0x97764 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$width
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::width(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xc0);

}






// ---- [d2] height @0x97780 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$height
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::height(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 200);

}





