// _WCRChatAttachmentHandleClick @ 00ec6dac

byte _WCRChatAttachmentHandleClick(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  uint local_7c;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  byte local_41;
  undefined *local_40;
  long local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_tag_026cab98);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
    local_30 = uVar2;
  }
  local_38 = local_30 - 18000;
  local_41 = 0;
  local_7c = 1;
  if (local_20 != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_7c = (uint)puVar3 ^ 1;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_7c & 1) == 0) {
    uVar2 = local_20;
    FUN_00ec489c();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_38;
    local_50 = uVar2;
    if (((uVar2 == 0) || (local_38 < 0)) ||
       ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0), (long)uVar2 <= lVar1)) {
      local_11 = 0;
      local_48 = 1;
    }
    else {
      uVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar2;
      FUN_00ec4b28(uVar2,&cf_pathKey);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_60;
      FUN_00ec61c8();
      if ((uVar2 & 1) == 0) {
        local_11 = 0;
        local_48 = 1;
      }
      else {
        uVar2 = local_60;
        FUN_00ec712c();
        _objc_retainAutoreleasedReturnValue();
        local_68 = uVar2;
        if (uVar2 != 0) {
          FUN_00ec73d8(uVar2,local_20);
        }
        local_11 = 1;
        local_48 = 1;
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  else {
    local_11 = 0;
    local_48 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

