// handleTranslateStickerPinch: @ 0167a2f4

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRSuperFloatCropViewController::handleTranslateStickerPinch_
          (WCRSuperFloatCropViewController *this,ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 in_d0;
  undefined8 uVar2;
  undefined1 auStack_d8 [48];
  undefined1 auStack_a8 [48];
  undefined1 auStack_78 [52];
  undefined4 local_44;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar1;
  if (lVar1 == 0) {
    local_44 = 1;
  }
  else {
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
    if ((lVar1 == 1) ||
       (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20),
       lVar1 == 2)) {
      if (local_40 == 0) {
        _memset(auStack_a8,0,0x30);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(auStack_a8,local_40,PTR_s_transform_0269e178);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scale_026ca830);
      uVar2 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scale_026ca830);
      _CGAffineTransformScale(in_d0,uVar2,auStack_a8);
      lVar1 = local_40;
      _memcpy(auStack_d8,auStack_78,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTransform__026caad0,auStack_d8);
      (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_38,PTR_s_setScale__026caa28);
    }
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

