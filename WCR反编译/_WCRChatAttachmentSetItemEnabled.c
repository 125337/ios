// _WCRChatAttachmentSetItemEnabled @ 00ebf8cc

void _WCRChatAttachmentSetItemEnabled(undefined8 param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long local_88;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  undefined4 local_20;
  byte local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  local_19 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_20 = 1;
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
      local_20 = 1;
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
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_19 & 1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_enabled);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObjectForKey__0269d700,&cf_missing)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeObjectAtIndex__0269d530,local_30);
      if ((local_19 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addObject__0269d180,local_38);
      }
      else {
        local_88 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_indexOfObjectPassingTest__026a27f8,
                   &PTR___NSConcreteGlobalBlock_02581d00);
        lVar2 = local_28;
        lVar1 = local_38;
        local_40 = local_88;
        if (local_88 == 0x7fffffffffffffff) {
          local_88 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar2,PTR_s_insertObject_atIndex__0269eac0,lVar1,local_88);
      }
      FUN_00ebf3fc(local_28);
      lVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_customTitle);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      local_48 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      lVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (lVar1 == 0) {
        lVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        FUN_00ebd790();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_48;
        local_48 = lVar4;
        (*(code *)PTR__objc_release_02578630)(lVar1);
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
      _WCRChatAttachmentNotifyChanged();
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_38,0);
      local_20 = 0;
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

