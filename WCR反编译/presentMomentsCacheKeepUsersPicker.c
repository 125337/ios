// presentMomentsCacheKeepUsersPicker @ 01c1a410

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsViewController::presentMomentsCacheKeepUsersPicker(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  ID local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [24];
  undefined *local_30;
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_WCRefineMomentsCacheKeepUsersViewController_026cf448;
  _objc_alloc();
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01c1a640;
  local_50 = &DAT_0258a048;
  _objc_copyWeak(auStack_48,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithCompletion__026aca00,&local_68);
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = &cf_PushViewController_animated_;
  local_70 = IVar2;
  _NSSelectorFromString();
  IVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,pcVar3);
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_pushViewController_animated__0269d590,local_30,1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_70,pcVar3,local_30,1);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_30,0);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}

