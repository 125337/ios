// findViewControllerWithName: @ 0093740c

/* Function Stack Size: 0x18 bytes */

ID MyAction::findViewControllerWithName_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  _NSClassFromString();
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_18 = 0;
    local_3c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar6 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_findViewController_inViewControl_026aa718,local_38,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_3c = 1;
    local_18 = IVar6;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

