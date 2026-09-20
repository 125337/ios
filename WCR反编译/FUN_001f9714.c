// FUN_001f9714 @ 001f9714

void FUN_001f9714(undefined8 param_1,byte param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_78;
  byte local_69;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  byte local_31;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar3 = local_30;
  local_31 = param_2;
  if (local_30 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar4 = local_30;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = uVar4;
      uVar3 = local_30;
      FUN_001fb62c(local_30,"m_bgImageView");
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_58 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) == 0) {
        uVar4 = local_30;
        FUN_001fb62c(local_30,"_m_bgImageView");
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_58;
        local_58 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      uVar3 = local_58;
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_50;
        _objc_getAssociatedObject(local_50,&DAT_028c9140);
        _objc_retainAutoreleasedReturnValue();
        local_69 = 0;
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_60 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        bVar1 = false;
        if ((uVar3 & 1) != 0) {
          uVar3 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_69 = 1;
          bVar1 = uVar3 != 0 || local_60 == local_50;
          local_68 = uVar3;
        }
        if ((local_69 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_68);
        }
        uVar3 = local_60;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar3;
          local_48 = 1;
        }
        else if ((local_31 & 1) == 0) {
          local_28 = 0;
          local_48 = 1;
        }
        else {
          uVar3 = local_50;
          FUN_001fb780();
          _objc_retainAutoreleasedReturnValue();
          local_78 = uVar3;
          if (uVar3 != 0) {
            _objc_setAssociatedObject(local_50,&DAT_028c9140,uVar3,1);
          }
          uVar3 = local_78;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar3;
          local_48 = 1;
          _objc_storeStrong(&local_78,0);
        }
        _objc_storeStrong(&local_60,0);
      }
      else {
        _objc_setAssociatedObject(local_50,&DAT_028c9140,local_58,1);
        uVar3 = local_58;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar3;
        local_48 = 1;
      }
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
      goto LAB_001f9c0c;
    }
  }
  local_28 = 0;
  local_48 = 1;
LAB_001f9c0c:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

