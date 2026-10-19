// initWithSpriteSheetImage:contentRects:frameDurations:loopCount: @0x8ec58

/* Function Stack Size: 0x30 bytes */

ID WCMYYSpriteSheetImage::initWithSpriteSheetImage_contentRects_frameDurations_loopCount_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,unsigned_long_long param_6)

{
  ID IVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_68;
  ID local_60;
  class_t *local_58;
  undefined4 local_4c;
  unsigned_long_long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  uVar4 = local_30;
  local_48 = param_6;
  _objc_retainAutorelease();
  lVar2 = _objc_msgSend_CGImage(uVar4,local_68);
  if (lVar2 == 0) {
    local_18 = 0;
  }
  else {
    lVar2 = _objc_msgSend_count(local_38,local_68);
    if (lVar2 != 0) {
      lVar2 = _objc_msgSend_count(lVar2 + -1,local_40,local_68);
      if (lVar2 != 0) {
        lVar2 = _objc_msgSend_count(lVar2 + -1,local_38,local_68);
        lVar3 = _objc_msgSend_count(local_40,local_68);
        IVar1 = local_20;
        uVar4 = local_30;
        if (lVar2 == lVar3) {
          _objc_retainAutorelease();
          uVar4 = _objc_msgSend_CGImage(uVar4,local_68);
          uVar6 = _objc_msgSend_scale(local_30,local_68);
          uVar5 = _objc_msgSend_imageOrientation(local_30,local_68);
          local_20 = 0;
          local_60 = IVar1;
          local_58 = &objc::class_t::WCMYYSpriteSheetImage;
          local_20 = _objc_msgSendSuper2(uVar6,&local_60,"initWithCGImage:scale:orientation:",uVar4,
                                         uVar5);
          _objc_storeStrong(&local_20);
          if (local_20 == 0) {
            local_18 = 0;
          }
          else {
            uVar4 = _objc_msgSend_copy(local_38,local_68);
            uVar5 = *(undefined8 *)(local_20 + (long)_contentRects);
            *(undefined8 *)(local_20 + (long)_contentRects) = uVar4;
            (*(code *)PTR__objc_release_00110458)(uVar5);
            uVar4 = _objc_msgSend_copy(local_40,local_68);
            uVar5 = *(undefined8 *)(local_20 + (long)_frameDurations);
            *(undefined8 *)(local_20 + (long)_frameDurations) = uVar4;
            (*(code *)PTR__objc_release_00110458)(uVar5);
            *(unsigned_long_long *)(local_20 + (long)_loopCount) = local_48;
            local_18 = (*(code *)PTR__objc_retain_00110460)(local_20);
          }
        }
        else {
          local_18 = 0;
        }
        goto LAB_0008eeac;
      }
    }
    local_18 = 0;
  }
LAB_0008eeac:
  local_4c = 1;
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

