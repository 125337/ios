// FUN_006c2510 @ 006c2510

byte FUN_006c2510(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_50 [4];
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    local_30 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_replyingMessage_0269d378);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_replyingMessage_0269d378);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_20;
    if (local_30 == 0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      local_50[0] = 0;
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar1 & 1) != 0) {
        uVar2 = local_20;
        FUN_006c2238();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_50[0];
        local_50[0] = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      puVar3 = PTR_s_locateToMsg__0269d608;
      if (local_50[0] == 0) {
        local_11 = 0;
      }
      else {
        uVar1 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50[0],PTR_s_respondsToSelector__026ca818,PTR_s_locateToMsg__0269d608);
        if ((uVar1 & 1) == 0) {
          local_11 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_50[0],puVar3,local_30);
          local_11 = 1;
        }
      }
      local_24 = 1;
      _objc_storeStrong(local_50,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

