// wcr_dismissProfileCardAnimated:restoreKeyboard: @ 01531398

/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_dismissProfileCardAnimated_restoreKeyboard_
               (ID param_1,SEL param_2,bool param_3,bool param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  byte local_38;
  byte local_37;
  undefined **local_30;
  byte local_22;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_22 = (byte)param_4;
  ppuVar1 = &local_58;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc0000000;
  local_4c = 0;
  local_48 = FUN_015314a0;
  local_40 = &DAT_0257c9a8;
  local_38 = local_22 & 1;
  local_37 = local_21 & 1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_30 = ppuVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    (*(code *)local_30[2])();
  }
  _objc_storeStrong(&local_30,0);
  return;
}

