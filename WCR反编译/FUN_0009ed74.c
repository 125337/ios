// FUN_0009ed74 @ 0009ed74

byte FUN_0009ed74(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  if (local_20 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98);
      if (uVar2 == 0x24fb35) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        local_38 = uVar2;
        if ((uVar2 == 0) ||
           ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_tag_026cab98), uVar2 != 0x24fb32)) {
          local_11 = 0;
          local_30 = 1;
        }
        else {
          uVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_40 = uVar2;
          if ((uVar2 == 0) ||
             ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_tag_026cab98), uVar2 != 0x24fb31)) {
            local_11 = 0;
          }
          else {
            local_11 = 1;
          }
          local_30 = 1;
          _objc_storeStrong(&local_40,0);
        }
        _objc_storeStrong(&local_38,0);
      }
      else {
        local_11 = 0;
        local_30 = 1;
      }
      goto LAB_0009f00c;
    }
  }
  local_11 = 0;
  local_30 = 1;
LAB_0009f00c:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

