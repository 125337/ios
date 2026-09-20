// wcr_isChatSearchRelayController: @ 0153061c

/* Function Stack Size: 0x18 bytes */

bool WCRefineTopBarProfileCardPresenter::wcr_isChatSearchRelayController_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = (undefined *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = local_30;
  FUN_01530740();
  puVar2 = local_30;
  if (((ulong)puVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    puVar1 = &DAT_028e38c8;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar2 == puVar1) {
      local_11 = 1;
    }
    else {
      puVar2 = local_30;
      _objc_getAssociatedObject(local_30,DAT_028c5de8);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = (byte)puVar1 & 1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

