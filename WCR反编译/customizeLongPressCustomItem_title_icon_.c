// customizeLongPressCustomItem:title:icon: @ 01102438

/* Function Stack Size: 0x28 bytes */

void WCRefinePluginIconCatalog::customizeLongPressCustomItem_title_icon_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *local_c0;
  long local_98;
  long local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  int local_54;
  ulong local_50;
  long local_48;
  long local_40;
  ulong local_38;
  SEL local_30;
  undefined *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  uVar1 = local_38;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar1;
  _WCRLongPressMenuItemIsCustom();
  if ((uVar1 & 1) == 0) {
    local_54 = 1;
  }
  else {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rawLongPressCustomItems_026aed90);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_69 = 0;
    local_c0 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_c0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_c0;
    }
    local_69 = puVar3 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_c0;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    for (local_78 = (undefined *)0x0; puVar2 = local_78, puVar3 = local_60,
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0), puVar2 < puVar3;
        local_78 = local_78 + 1) {
      puVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        local_54 = 4;
      }
      else {
        puVar2 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_mutableCopy_0269d8a0);
        lVar4 = local_40;
        local_88 = puVar2;
        FUN_010f4f48();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = local_48;
        local_90 = lVar4;
        FUN_010f4f48();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = local_90;
        local_98 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
        if (lVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,local_90,&cf_title);
        }
        lVar4 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
        if (lVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,local_98,&cf_icon);
        }
        puVar2 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setObject_atIndexedSubscript__0269e970,puVar2,local_78);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_54 = 2;
        _objc_storeStrong(&local_98);
        _objc_storeStrong(&local_90,0);
        _objc_storeStrong(&local_88,0);
      }
      _objc_storeStrong(&local_80,0);
      if (local_54 == 2) break;
    }
    puVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_copy_0269d150);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_notifyLongPressMenuChanged_026aedf0);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

