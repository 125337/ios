// wcr_commitStockRemovalForThemeIndex:themeName:code: @ 0172e450

/* Function Stack Size: 0x28 bytes */

void ThemeBoxAirDropThemePickViewController::wcr_commitStockRemovalForThemeIndex_themeName_code_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4,ID param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  cfstringStruct *local_120;
  undefined *local_f0;
  undefined1 *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined4 local_74;
  long local_70;
  long local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  SEL local_50;
  undefined *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_28;
  
  local_60 = (cfstringStruct *)0x0;
  local_58 = (undefined *)param_3;
  local_50 = param_2;
  local_48 = (undefined *)param_1;
  _objc_storeStrong(&local_60,param_4);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_5);
  lVar1 = local_68;
  FUN_01725ed0();
  _objc_retainAutoreleasedReturnValue();
  local_70 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_74 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_themeBoxAirDropThemeItems_026acfb8);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_f0 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = local_f0;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_wcr_currentPickerRepository_026b3c40);
    puVar2 = local_58;
    puVar4 = local_88;
    local_90 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
    if (puVar2 < puVar4) {
      puVar2 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_objectAtIndexedSubscript__0269cc78,local_58);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_98 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)puVar2 & 1) != 0) {
        puVar2 = local_98;
        FUN_0172eae8();
        local_90 = puVar2;
      }
      _objc_storeStrong(&local_98,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_wcr_removeCodeFromWarehouseForTh_026b3c48,local_58,local_70);
    puVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_themeBoxAirDropConsumedCodes_026b3a40);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_a0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      _objc_storeStrong(&local_a0,*(undefined8 *)PTR____NSDictionary0___02578288);
    }
    puVar2 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_mutableCopy_0269d8a0);
    if (local_60 == (cfstringStruct *)0x0) {
      local_120 = &::cf___;
    }
    else {
      local_120 = local_60;
    }
    local_a8 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_120;
    FUN_0172ec34(local_120,local_90);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_a8;
    local_b8 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_objectForKeyedSubscript__0269d098,local_120);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_c0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)puVar2 & 1) == 0) && (local_90 == (undefined *)0x0)) {
      puVar3 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_objectForKeyedSubscript__0269d098,local_b0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_c0;
      local_c0 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_c0;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      _objc_storeStrong(&local_c0,*(undefined8 *)PTR____NSArray0___02578280);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithArray__0269eab8,local_c0);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_insertObject_atIndex__0269eac0,local_70,0);
    puVar5 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
    puVar6 = local_c8;
    if ((undefined1 *)((long)&section_00000108.addr + 4) < puVar5) {
      puVar5 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
      local_40 = puVar5 + -300;
      local_38 = 300;
      local_30 = 300;
      local_28 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_removeObjectsInRange__0269dad0,300,local_40);
    }
    puVar6 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar6,local_b8);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar2 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setThemeBoxAirDropConsumedCodes__026b3a58);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_saveConfig_0269e5d0);
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    local_74 = 0;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  return;
}

