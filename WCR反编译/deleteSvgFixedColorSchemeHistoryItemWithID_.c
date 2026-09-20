// deleteSvgFixedColorSchemeHistoryItemWithID: @ 020a179c

/* Function Stack Size: 0x18 bytes */

bool WCRefineConfig::deleteSvgFixedColorSchemeHistoryItemWithID_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  long local_50;
  ID local_48;
  ID local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_svgFixedColorSchemeHistoryItems_026c63e8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    lVar1 = local_30;
    IVar2 = local_40;
    puVar4 = PTR__OBJC_CLASS___NSPredicate_026ce8f0;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_020a1a18;
    local_58 = &DAT_02586d78;
    local_48 = IVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_predicateWithBlock__026ab6e0,&local_70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_filterUsingPredicate__026ab6e8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    local_11 = IVar2 != local_48;
    if ((bool)local_11) {
      IVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_setSvgFixedColorSchemeHistoryIte_026ca340);
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    local_34 = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

