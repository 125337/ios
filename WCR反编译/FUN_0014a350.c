// FUN_0014a350 @ 0014a350

void FUN_0014a350(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_68;
  ulong local_40 [3];
  undefined *local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    local_28 = PTR_s_NotifyViewControllerPostionChang_0269f160;
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_NotifyViewControllerPostionChang_0269f160);
    uVar3 = local_18;
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) == 0) {
        local_68 = 0;
      }
      else {
        local_68 = local_18;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_40[0] = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setNeedsLayout_0269deb8);
      uVar3 = local_40[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _objc_storeStrong(local_40,0);
      local_1c = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,local_28,1,1);
      local_1c = 1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

