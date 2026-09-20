// FUN_018d9eec @ 018d9eec

void FUN_018d9eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long local_70;
  undefined4 local_64;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = 0;
  _WCRChatToolbarRefreshActions();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  uVar1 = local_18;
  lVar3 = local_30;
  local_60 = PTR___NSConcreteGlobalBlock_02578658;
  local_58 = 0xd0800000;
  local_54 = 0;
  local_50 = FUN_018e0324;
  local_48 = &DAT_02581d20;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_indexOfObjectPassingTest__026a27f8,&local_60);
  local_38 = lVar3;
  if (lVar3 == 0x7fffffffffffffff) {
    local_64 = 1;
  }
  else {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectAtIndexedSubscript__0269cc78,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setObject_forKeyedSubscript__0269d248,local_20,
                 _WCRChatToolbarTitleKey);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setObject_forKeyedSubscript__0269d248,local_20,
                 _WCRChatToolbarCustomTitleKey);
    }
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setObject_forKeyedSubscript__0269d248,local_28,
                 _WCRChatToolbarIconKey);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setObject_forKeyedSubscript__0269d248,local_28,
                 _WCRChatToolbarCustomIconKey);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_atIndexedSubscript__0269e970,local_70,local_38);
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    FUN_018ca37c();
    _objc_storeStrong(&local_70,0);
    local_64 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

