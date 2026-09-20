// FUN_01bdd050 @ 01bdd050

void FUN_01bdd050(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_80;
  ulong local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  long local_30;
  long local_28;
  
  uVar1 = param_1 + 0x38;
  local_30 = param_1;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_38 = uVar1;
  if (uVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,
               *(undefined8 *)(param_1 + 0x20));
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_allItems_026a2730);
    _objc_retainAutoreleasedReturnValue();
    local_70 = PTR___NSConcreteGlobalBlock_02578658;
    local_68 = 0xd0800000;
    local_64 = 0;
    local_60 = FUN_01bdd3e4;
    local_58 = &DAT_02582108;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = uVar1;
    local_50 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_indexesOfObjectsPassingTest__026a2c90,&local_70);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_allItems_026a2730);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_78 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_removeObjectsAtIndexes__026a2c98,local_48);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAllItems__026a27d0,local_78);
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_selectedUsername_026c0810);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSelectedUsername__026c06c0,&cf___);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rebuildRightMenus_026c07d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_applyFilters_026c0720);
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__Rd);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,puVar4,
               *(undefined8 *)(param_1 + 0x20));
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_50,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

