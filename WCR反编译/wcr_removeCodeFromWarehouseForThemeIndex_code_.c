// wcr_removeCodeFromWarehouseForThemeIndex:code: @ 0172d91c

/* Function Stack Size: 0x20 bytes */

bool ThemeBoxAirDropThemePickViewController::wcr_removeCodeFromWarehouseForThemeIndex_code_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_e0;
  cfstringStruct *local_b0;
  cfstringStruct *local_a0;
  byte local_92;
  bool local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined4 local_54;
  long local_50;
  long local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_48 = 0;
  local_40 = (cfstringStruct *)param_3;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_48,param_4);
  lVar2 = local_48;
  FUN_01725ed0();
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_21 = 0;
    local_54 = 1;
  }
  else {
    pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_themeBoxAirDropThemeItems_026acfb8);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_b0 = *(cfstringStruct **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_b0;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_40;
    pcVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
    if (pcVar3 < pcVar4) {
      pcVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_70 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)pcVar3 & 1) == 0) {
        local_21 = 0;
        local_54 = 1;
      }
      else {
        pcVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_mutableCopy_0269d8a0);
        pcVar4 = local_70;
        local_78 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_mutableCopy_0269d8a0);
        local_80 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_codes);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar3 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        local_91 = false;
        bVar1 = ((ulong)pcVar3 & 1) == 0;
        if (bVar1) {
          local_e0 = &::cf___;
        }
        else {
          local_e0 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_codes);
          _objc_retainAutoreleasedReturnValue();
          local_90 = local_e0;
        }
        local_91 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = local_e0;
        if ((local_91 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_90);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        local_92 = 0;
        pcVar3 = local_88;
        FUN_0172de40(local_88,local_50,&local_92);
        _objc_retainAutoreleasedReturnValue();
        local_21 = (local_92 & 1) != 0;
        local_a0 = pcVar3;
        if ((bool)local_21) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar3,&cf_codes);
          pcVar3 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_copy_0269d150);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_setObject_atIndexedSubscript__0269e970,pcVar3,local_40);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_copy_0269d150);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_setThemeBoxAirDropThemeItems__026b3c38);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_saveConfig_0269e5d0);
        }
        local_54 = 1;
        _objc_storeStrong(&local_a0);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_80,0);
        _objc_storeStrong(&local_78,0);
      }
      _objc_storeStrong(&local_70,0);
    }
    else {
      local_21 = 0;
      local_54 = 1;
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  return local_21 & 1;
}

