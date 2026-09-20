// sortItems:sortMode:order: @ 01083e68

/* Function Stack Size: 0x28 bytes */

void WCRefineLocalEmoticonStore::sortItems_sortMode_order_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  long_long local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  long local_48;
  long_long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_48 = 0;
  local_40 = param_4;
  _objc_storeStrong(&local_48,param_5);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = (undefined *)0x0;
  local_50 = puVar3;
  if (local_40 != 1) {
    lVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    if (lVar4 != 0) {
      lVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_dictionaryWithCapacity__026a1ad0,lVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_58;
      local_58 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      lVar4 = local_48;
      puVar3 = local_58;
      local_80 = PTR___NSConcreteGlobalBlock_02578658;
      local_78 = 0xd0800000;
      local_74 = 0;
      local_70 = FUN_01084128;
      local_68 = &DAT_0257cb28;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar4,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_80);
      _objc_storeStrong(&local_60,0);
    }
  }
  uVar2 = local_38;
  puVar1 = local_50;
  local_b8 = PTR___NSConcreteGlobalBlock_02578658;
  local_b0 = 0xd0800000;
  local_ac = 0;
  local_a8 = FUN_0108424c;
  local_a0 = &DAT_02584e90;
  local_88 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = local_58;
  local_98 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_sortUsingComparator__0269d168,&local_b8);
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return;
}

