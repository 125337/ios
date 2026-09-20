// FUN_00141e48 @ 00141e48

byte FUN_00141e48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_68;
  ulong local_60;
  undefined *local_58;
  int local_50;
  long local_40;
  ulong local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar1 = local_20;
  _objc_getAssociatedObject(local_20,DAT_026df910);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar1;
  if (local_30 == lVar1) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_msgAttachmentBeautifyEnabled_0269f440);
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar2 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_58,PTR_s_msgAttachmentLongPressJumpEnable_0269f528),
       ((ulong)puVar2 & 1) == 0)) {
      local_11 = 0;
      local_50 = 1;
    }
    else {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar3;
      do {
        uVar3 = local_60;
        if (local_60 == 0) {
          local_11 = 1;
          local_50 = 1;
          break;
        }
        puVar2 = PTR__OBJC_CLASS___UIControl_026ce2d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar3 & 1) != 0) {
          local_11 = 0;
          local_50 = 1;
          break;
        }
        uVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_68 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_containsString__0269d0b0,&cf_Button);
        if (((uVar3 & 1) == 0) &&
           (uVar3 = local_68,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_68,PTR_s_containsString__0269d0b0,&cf_PageControl), (uVar3 & 1) == 0)) {
          uVar4 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_60;
          local_60 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          local_50 = 0;
        }
        else {
          local_11 = 0;
          local_50 = 1;
        }
        _objc_storeStrong(&local_68,0);
      } while (local_50 == 0);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  else {
    local_11 = 1;
    local_50 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

