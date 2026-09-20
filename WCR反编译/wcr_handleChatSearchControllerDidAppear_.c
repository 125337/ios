// wcr_handleChatSearchControllerDidAppear: @ 0155a284

/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_handleChatSearchControllerDidAppear_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    DAT_028e39a1 = 1;
    local_38 = DAT_028e39a8;
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    FUN_0155a4b4(local_38);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcr_trimChatSearchNavigationStac_026b05c8,local_28);
    lVar2 = DAT_028e38b8;
    if (((DAT_028e39b0 & 1) == 0) || (DAT_028e38b8 == 0)) {
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      puVar3 = PTR___dispatch_main_q_02578680;
      local_40 = lVar2;
      DAT_028e39b0 = 0;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_28;
      local_78 = PTR___NSConcreteStackBlock_02578660;
      local_70 = 0xc2000000;
      local_6c = 0;
      local_68 = FUN_0155a55c;
      local_60 = &DAT_0257a740;
      local_48 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      lVar2 = local_40;
      local_58 = lVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = lVar2;
      _dispatch_async(puVar3,&local_78);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_40,0);
      local_2c = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

