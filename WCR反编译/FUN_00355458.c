// FUN_00355458 @ 00355458

byte FUN_00355458(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  byte local_4c;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98);
    if (uVar2 == 0x7f149) {
      local_11 = 1;
      local_24 = 1;
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewWithTag__026cabe0,FUN_0007f148);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar2 == 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewWithTag__026cabe0,0x7f149);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (uVar2 == 0) {
          uVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_30 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_containsString__0269d0b0,&cf_ToDoHeaderContainer);
          local_4c = 1;
          if ((uVar2 & 1) == 0) {
            uVar2 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_containsString__0269d0b0,&cf_ToDoFooterContainer);
            local_4c = (byte)uVar2;
          }
          local_11 = local_4c & 1;
          local_24 = 1;
          _objc_storeStrong(&local_30,0);
        }
        else {
          local_11 = 1;
          local_24 = 1;
        }
      }
      else {
        local_11 = 1;
        local_24 = 1;
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

