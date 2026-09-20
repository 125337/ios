// FUN_01eee60c @ 01eee60c

void FUN_01eee60c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_b8;
  undefined *local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  long local_68;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  long local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  lVar1 = param_1 + 0x20;
  local_38 = param_1;
  _objc_loadWeakRetained();
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_40 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_51 = 0;
  local_b8 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    local_b8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_b8;
  }
  local_51 = puVar4 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_b8;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar1 = local_40;
  puVar2 = local_48;
  local_88 = PTR___NSConcreteGlobalBlock_02578658;
  local_80 = 0xd0800000;
  local_7c = 0;
  local_78 = FUN_01eee9e4;
  local_70 = &DAT_02581d20;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_indexesOfObjectsPassingTest__026a2c90,&local_88);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_48;
  local_60 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectsAtIndexes__026befe0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  local_90 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObjectsAtIndexes__026a2c98,local_60);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  FUN_01ee9484(local_90);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setSelectionMode__026c7ea8,0);
  lVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_selectedIds_026c7e78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTitle__0269cef0,&cf_NxN_);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_updateNavigationItems_026badf0);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_reloadItems_026ae4d8);
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return;
}

