// FUN_018d6c8c @ 018d6c8c

void FUN_018d6c8c(undefined8 param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long local_100;
  uint local_d0;
  uint local_cc;
  long local_88;
  byte local_79;
  long local_78;
  undefined4 local_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ulong local_48;
  long local_40;
  long local_38;
  byte local_29;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  lVar1 = 0;
  local_29 = param_2;
  _WCRChatToolbarRefreshActions();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  uVar3 = local_28;
  lVar2 = local_38;
  local_68 = PTR___NSConcreteGlobalBlock_02578658;
  local_60 = 0xd0800000;
  local_5c = 0;
  local_58 = FUN_018e0190;
  local_50 = &DAT_02581d20;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_indexOfObjectPassingTest__026a27f8,&local_68);
  local_40 = lVar2;
  if (lVar2 == 0x7fffffffffffffff) {
    local_6c = 1;
  }
  else {
    local_79 = 0;
    local_cc = 0;
    if ((local_29 & 1) == 0) {
      uVar3 = local_28;
      FUN_018db148();
      local_d0 = 1;
      if ((uVar3 & 1) == 0) {
        lVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        local_78 = lVar2;
        FUN_018dd7d8();
        local_d0 = (uint)lVar2;
      }
      local_cc = local_d0;
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_cc & 1) == 0) {
      lVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_88 = lVar1;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_29 & 1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,
                 _WCRChatToolbarEnabledKey);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObjectAtIndex__0269d530,local_40);
      if ((local_29 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_88);
      }
      else {
        local_100 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_indexOfObjectPassingTest__026a27f8,
                   &PTR___NSConcreteGlobalBlock_0258a0e8);
        lVar1 = local_38;
        lVar2 = local_88;
        if (local_100 == 0x7fffffffffffffff) {
          local_100 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar1,PTR_s_insertObject_atIndex__0269eac0,lVar2,local_100);
      }
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      FUN_018ca37c();
      _objc_storeStrong(&local_88,0);
      local_6c = 0;
    }
    else {
      FUN_018ddacc(local_28);
      local_6c = 1;
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

