// _WCRChatAttachmentRemoveItem @ 00ec1eb8

void _WCRChatAttachmentRemoveItem(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  long local_38;
  long local_30;
  long local_28;
  uint local_1c;
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
    lVar2 = local_18;
    lVar1 = local_28;
    local_58 = PTR___NSConcreteGlobalBlock_02578658;
    local_50 = 0xd0800000;
    local_4c = 0;
    local_48 = FUN_00ec2068;
    local_40 = &DAT_02581d20;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_indexesOfObjectsPassingTest__026a2c90,&local_58);
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_removeObjectsAtIndexes__026a2c98,local_30);
      FUN_00ebf3fc(local_28);
      _WCRChatAttachmentNotifyChanged();
    }
    local_1c = (uint)(lVar1 == 0);
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

