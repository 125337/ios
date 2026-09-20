// togglePinActionItem @ 01d0525c

/* Function Stack Size: 0x10 bytes */

void WCRefineProfileBgMaterialRepositoryViewController::togglePinActionItem(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *local_90;
  undefined *local_70;
  undefined *local_68;
  ID local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_actionItem_026c3c88);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  if (param_1 == 0) {
    local_3c = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_51 = 0;
    local_90 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_90 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_90;
    }
    local_51 = puVar3 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_90;
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    IVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    _WCRefineProfileBgSafePathComponent();
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    for (local_68 = (undefined *)0x0; puVar1 = local_68, puVar2 = local_48,
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0), puVar1 < puVar2;
        local_68 = local_68 + 1) {
      puVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      _WCRefineProfileBgSafePathComponent();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (((ulong)puVar6 & 1) != 0) {
        puVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_70 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
        IVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithInt__0269d810,(uint)IVar5 ^ 1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_pinned);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setObject_atIndexedSubscript__0269e970,local_70,local_68);
        local_3c = 2;
        _objc_storeStrong(&local_70,0);
        break;
      }
    }
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadCurrentTab_026c3bf8);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

