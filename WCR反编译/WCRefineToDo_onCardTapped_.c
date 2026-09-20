// WCRefineToDo_onCardTapped: @ 007ffd94

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineToDoHook::WCRefineToDo_onCardTapped_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ID local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined4 local_4c;
  cfstringStruct *local_48;
  ID local_40 [2];
  SEL local_30;
  ID local_28;
  
  local_40[1] = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(local_40 + 1,param_3);
  IVar2 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_40[0] = IVar2;
  pcVar1 = &cf_WCRefineToDoListSettingsViewController;
  _NSClassFromString();
  local_48 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_4c = 1;
  }
  else {
    IVar2 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((IVar4 & 1) == 0) {
      pcVar1 = local_48;
      _objc_alloc_init();
      local_58 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_4c = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setHidesBottomBarWhenPushed__0269db60);
        if (((ulong)pcVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
        }
        IVar3 = local_40[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        IVar2 = local_40[0];
        puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
        if (IVar3 == 0) {
          puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_90 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setModalPresentationStyle__0269d2a8,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40[0],PTR_s_presentViewController_animated_c_0269d2b0,local_90,1);
          _objc_storeStrong(&local_90,0);
        }
        else {
          local_88 = PTR___NSConcreteGlobalBlock_02578658;
          local_80 = 0xd0800000;
          local_7c = 0;
          local_78 = FUN_008000e4;
          local_70 = &DAT_0257ab20;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar1 = local_58;
          local_68 = IVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_60 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_performWithoutAnimation__0269e7e0,&local_88);
          _objc_storeStrong(&local_60);
          _objc_storeStrong(&local_68,0);
        }
        local_4c = 0;
      }
      _objc_storeStrong(&local_58,0);
    }
    else {
      local_4c = 1;
    }
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  return;
}

