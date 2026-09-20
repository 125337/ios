// _WCRefineClownMessageCanReplaceImage @ 00f15a40

byte _WCRefineClownMessageCanReplaceImage(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_70;
  bool local_51;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined *local_38;
  ulong local_30;
  int local_28;
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
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_IsImgMsg_0269da38);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_IsImgMsg_0269da38);
      if ((uVar1 & 1) != 0) {
        local_11 = 1;
        local_24 = 1;
        goto LAB_00f15d7c;
      }
    }
    uVar1 = local_20;
    FUN_00f17624();
    local_28 = (int)uVar1;
    if (local_28 == 3) {
      local_11 = 1;
      local_24 = 1;
    }
    else if (local_28 == 0x31) {
      uVar1 = local_20;
      FUN_00f176c8(0);
      if ((int)uVar1 == 2) {
        local_11 = 1;
        local_24 = 1;
      }
      else {
        uVar1 = local_20;
        FUN_00f16348(local_20,PTR_s_m_nsContent_0269d0a0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_s_rangeOfString_options__0269d118;
        local_30 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_rangeOfString_options__0269d118,&cf_<appmsg,1);
        local_40 = uVar1;
        local_38 = puVar3;
        if (uVar1 == 0x7fffffffffffffff) {
          local_70 = local_30;
        }
        else {
          local_70 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringFromIndex__0269d120,uVar1);
          _objc_retainAutoreleasedReturnValue();
          local_50 = local_70;
        }
        local_51 = uVar1 != 0x7fffffffffffffff;
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = local_70;
        if (local_51) {
          (*(code *)PTR__objc_release_02578630)(local_50);
        }
        uVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_rangeOfString_options__0269d118,&cf_<refermsg,1);
        if (uVar1 != 0x7fffffffffffffff) {
          uVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_substringToIndex__0269d6c0,uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_48;
          local_48 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        uVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_11 = (byte)uVar2 & 1;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        local_24 = 1;
        _objc_storeStrong(&local_48);
        _objc_storeStrong(&local_30,0);
      }
    }
    else {
      local_11 = 0;
      local_24 = 1;
    }
  }
LAB_00f15d7c:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

