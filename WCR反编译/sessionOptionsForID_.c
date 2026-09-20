// sessionOptionsForID: @ 009bf92c

/* Function Stack Size: 0x18 bytes */

ID WCRefineAIStore::sessionOptionsForID_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_a0;
  undefined *local_88;
  bool local_51;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (lVar2 == 0) {
    puVar3 = *(undefined **)PTR____NSDictionary0___02578288;
    (*(code *)PTR__objc_retain_02578638)();
    local_34 = 1;
    local_18 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,local_30)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_51 = ((ulong)puVar5 & 1) == 0;
    if (local_51) {
      local_88 = (undefined *)0x0;
    }
    else {
      local_88 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_88;
    }
    local_51 = !local_51;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_88;
    if (local_51) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_48 == (undefined *)0x0) {
      local_a0 = *(undefined **)PTR____NSDictionary0___02578288;
    }
    else {
      local_a0 = local_48;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_a0;
    local_34 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

