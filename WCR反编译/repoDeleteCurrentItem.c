// repoDeleteCurrentItem @ 01ef039c

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHTMLRepositoryViewController::repoDeleteCurrentItem(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_d0;
  cfstringStruct *local_a8;
  undefined *local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentRepositoryActionItem_026c7ee0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = (cfstringStruct *)param_1;
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    local_a8 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_a8;
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_44 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_59 = 0;
    local_d0 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_d0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_d0;
    }
    local_59 = puVar4 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_d0;
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = local_40;
    puVar2 = local_50;
    local_90 = PTR___NSConcreteGlobalBlock_02578658;
    local_88 = 0xd0800000;
    local_84 = 0;
    local_80 = FUN_01ef079c;
    local_78 = &DAT_02581d20;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_indexesOfObjectsPassingTest__026a2c90,&local_90);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_50;
    local_68 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectsAtIndexes__026befe0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_68;
    local_98 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
    if (puVar2 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_removeObjectsAtIndexes__026a2c98,local_68);
    }
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    FUN_01ee9484(local_98);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadItems_026ae4d8);
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

