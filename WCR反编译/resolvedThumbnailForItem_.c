// resolvedThumbnailForItem: @ 00941134

/* Function Stack Size: 0x18 bytes */

ID WCRClipboardCapture::resolvedThumbnailForItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    uVar2 = local_30;
    FUN_0094091c(local_30,_WCRClipboardItemMsgTypeKey);
    local_40 = uVar2;
    if ((uVar2 == 0x2b) || (uVar2 == 0x2f)) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemSessionKey);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_009407ac();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_48;
      uVar3 = local_30;
      FUN_0094091c(local_30,_WCRClipboardItemSvrIDKey);
      uVar4 = local_30;
      FUN_0094091c(local_30,_WCRClipboardItemLocalIDKey);
      FUN_00940a00(uVar2,uVar3,uVar4);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar2;
      if (local_40 == 0x2f) {
        FUN_0093ea28(0,uVar2,0);
        _objc_retainAutoreleasedReturnValue();
        local_18 = uVar2;
      }
      else {
        FUN_0093fa90(uVar2,0,0);
        _objc_retainAutoreleasedReturnValue();
        local_18 = uVar2;
      }
      local_34 = 1;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
    else {
      local_18 = 0;
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

