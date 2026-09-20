// _WCRChatAttachmentCustomizeItem @ 00ebfe58

void _WCRChatAttachmentCustomizeItem(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  undefined4 local_2c;
  ulong local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_2c = 1;
    goto LAB_00ec0188;
  }
  _WCRChatAttachmentRefreshItems();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_38;
  FUN_00ebfc90(local_38,local_18);
  local_40 = lVar1;
  if (lVar1 == 0x7fffffffffffffff) {
    local_2c = 1;
  }
  else {
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectAtIndexedSubscript__0269cc78,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_20,&cf_title);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_20,&cf_customTitle);
    }
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (uVar3 != 0) {
      lVar1 = local_48;
      FUN_00ec01bc(uVar3);
      _objc_retainAutoreleasedReturnValue();
      local_50 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
      if (lVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,&cf_icon);
      }
      lVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      if (lVar1 == 0) {
LAB_00ec00f4:
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_28,&cf_customIcon);
      }
      else {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,local_50);
        if ((uVar3 & 1) == 0) goto LAB_00ec00f4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_removeObjectForKey__0269d700,&cf_customIcon);
      }
      _objc_storeStrong(&local_50,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_atIndexedSubscript__0269e970,local_48,local_40);
    FUN_00ebf3fc(local_38);
    _WCRChatAttachmentNotifyChanged();
    _objc_storeStrong(&local_48,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_38,0);
LAB_00ec0188:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

