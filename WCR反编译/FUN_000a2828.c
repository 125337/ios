// FUN_000a2828 @ 000a2828

void FUN_000a2828(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *local_38;
  undefined4 local_30;
  char local_29;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_29 = '\0';
  bVar1 = true;
  if (local_18 != 0) {
    bVar1 = true;
    if (local_20 != 0) {
      lVar2 = local_20;
      FUN_000a2ac8();
      _objc_retainAutoreleasedReturnValue();
      local_29 = '\x01';
      bVar1 = lVar2 != 0;
      local_28 = lVar2;
    }
  }
  if (local_29 != '\0') {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  if (bVar1) {
    local_30 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
    _objc_alloc();
    lVar2 = local_18;
    pcVar4 = &cf_handleNavigationTransition_;
    _NSSelectorFromString(&cf_handleNavigationTransition_);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithTarget_action__026ca718,lVar2,pcVar4)
    ;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setDelegate__026ca910,local_18);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setEnabled__026ca938,puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (DAT_028c8018 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSHashTable_026ce238;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSHashTable_026ce238,PTR_s_weakObjectsHashTable_0269e2e0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = DAT_028c8018;
      DAT_028c8018 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8018,PTR_s_addObject__0269d180,local_38);
    _objc_setAssociatedObject(local_20,&DAT_028c8068,local_38,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addGestureRecognizer__026ca4a8,local_38);
    _objc_storeStrong(&local_38,0);
    local_30 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

