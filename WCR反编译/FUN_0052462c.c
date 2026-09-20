// FUN_0052462c @ 0052462c

void FUN_0052462c(undefined8 param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined **local_40 [3];
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  ppuVar2 = &PTR___NSConcreteGlobalBlock_0257db08;
  local_20 = param_1;
  local_18 = param_1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  local_28 = ppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = local_28;
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_00527b54;
  local_48 = &DAT_0257db48;
  (*(code *)PTR__objc_retain_02578638)();
  local_40[0] = ppuVar2;
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_addObserverForName_object_queue__026ca4b0,
             &cf_WCRefineMomentsAntiDeleteConfigChanged,0,puVar4,&local_60);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)();
  uVar1 = (uint)puVar3;
  FUN_00527d50();
  if ((uVar1 & 1) != 0) {
    (*(code *)local_28[2])();
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

