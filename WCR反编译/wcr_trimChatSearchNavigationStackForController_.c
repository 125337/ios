// wcr_trimChatSearchNavigationStackForController: @ 01559fa0

/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_trimChatSearchNavigationStackForController_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  uint local_4c;
  undefined *local_48;
  SEL local_40;
  ID local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_48 = (undefined *)0x0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  if (local_48 == (undefined *)0x0) {
    local_4c = 1;
  }
  else {
    puVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = &DAT_028e38c0;
    local_58 = puVar1;
    _objc_loadWeakRetained();
    local_60 = puVar2;
    if ((local_58 == (undefined *)0x0) || (puVar2 == (undefined *)0x0)) {
      local_4c = 1;
    }
    else {
      puVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_indexOfObjectIdenticalTo__0269e160,local_60);
      puVar1 = local_68;
      local_70 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_indexOfObjectIdenticalTo__0269e160,local_48);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_78 = puVar1;
      if (((local_70 == (undefined *)0x7fffffffffffffff) ||
          (puVar1 == (undefined *)0x7fffffffffffffff)) || (puVar1 <= local_70)) {
        local_4c = 1;
      }
      else {
        local_30 = local_70 + 1;
        local_28 = 0;
        local_20 = 0;
        puVar1 = local_68;
        local_18 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_subarrayWithRange__0269d848,0,local_30)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithArray__0269eab8);
        _objc_retainAutoreleasedReturnValue();
        local_80 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addObject__0269d180,local_48);
        puVar2 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
        puVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
        if (puVar2 != puVar1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_setViewControllers_animated__026b05c0,local_80,0);
        }
        local_4c = (uint)(puVar2 == puVar1);
        _objc_storeStrong(&local_80,0);
      }
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48,0);
  return;
}

