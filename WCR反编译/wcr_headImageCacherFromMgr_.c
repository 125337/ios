// wcr_headImageCacherFromMgr: @ 00ed5f3c

/* Function Stack Size: 0x18 bytes */

ID WCRefineChatRoomKickHelper::wcr_headImageCacherFromMgr_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_48;
  cfstringStruct *local_40;
  uint local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    pcVar1 = &cf_headImgCacher;
    _NSSelectorFromString();
    uVar2 = local_30;
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar2;
      if (uVar2 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar2;
      }
      local_34 = (uint)(uVar2 != 0);
      _objc_storeStrong(&local_48,0);
      if (local_34 != 0) goto LAB_00ed60d0;
    }
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf__headImgCacher);
    _objc_retainAutoreleasedReturnValue();
    local_34 = 1;
    local_18 = uVar2;
  }
LAB_00ed60d0:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

