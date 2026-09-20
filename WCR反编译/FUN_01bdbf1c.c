// FUN_01bdbf1c @ 01bdbf1c

void FUN_01bdbf1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x38;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,
               *(undefined8 *)(param_1 + 0x20));
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_allItems_026a2730);
    _objc_retainAutoreleasedReturnValue();
    local_68 = PTR___NSConcreteGlobalBlock_02578658;
    local_60 = 0xd0800000;
    local_5c = 0;
    local_58 = FUN_01bdc20c;
    local_50 = &DAT_0258b930;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    local_48 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    lVar4 = lVar1;
    local_40 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_indexesOfObjectsPassingTest__026a2c90,&local_68);
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_allItems_026a2730);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_removeObjectsAtIndexes__026a2c98,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAllItems__026a27d0,local_70);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rebuildRightMenus_026c07d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_applyFilters_026c0720);
    if (((*(byte *)(param_1 + 0x40) & 1) == 0) &&
       (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0),
       lVar1 == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,
                 *(undefined8 *)(param_1 + 0x20));
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,
                 &cf__RdUSag_X_,*(undefined8 *)(param_1 + 0x20));
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_48,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

