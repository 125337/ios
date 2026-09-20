// wcrGrouping_itemHasUnread: @ 00366604

/* Function Stack Size: 0x18 bytes */

bool WCRGroupingSessionListViewController::wcrGrouping_itemHasUnread_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_78;
  ID local_60;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_wcrGrouping_currentItemMatchingI_026a27f0,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  if (IVar1 == 0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    local_78 = IVar1;
    if (IVar1 == 0) {
      local_50 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_50;
      FUN_00366324();
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_60;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_78;
    if (IVar1 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_48;
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    FUN_003668c8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSession__0269d2e0);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    FUN_00366ae4();
    local_11 = (byte)IVar2 & 1;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

