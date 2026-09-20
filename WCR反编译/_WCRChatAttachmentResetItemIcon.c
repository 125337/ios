// _WCRChatAttachmentResetItemIcon @ 00ec08a4

void _WCRChatAttachmentResetItemIcon(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_1c = 1;
  }
  else {
    _WCRChatAttachmentRefreshItems();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_28 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_28;
    FUN_00ebfc90(local_28,local_18);
    local_30 = lVar1;
    if (lVar1 == 0x7fffffffffffffff) {
      local_1c = 1;
    }
    else {
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectAtIndexedSubscript__0269cc78,lVar1)
      ;
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_38 = lVar1;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      lVar1 = local_38;
      FUN_00ec01bc();
      _objc_retainAutoreleasedReturnValue();
      local_40 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_removeObjectForKey__0269d700,&cf_customIcon);
      lVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (lVar1 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObjectForKey__0269d700,&cf_icon);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,local_40,&cf_icon);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setObject_atIndexedSubscript__0269e970,local_38,local_30);
      FUN_00ebf3fc(local_28);
      _WCRChatAttachmentNotifyChanged();
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
      local_1c = 0;
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

