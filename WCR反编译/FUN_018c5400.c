// FUN_018c5400 @ 018c5400

void FUN_018c5400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  char *pcVar6;
  undefined *puVar7;
  char *local_48;
  char *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  char *local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_viewFrame_026a5398);
  pcVar6 = "WCTableViewManager";
  local_38 = param_1;
  uStack_30 = param_2;
  local_28 = param_3;
  uStack_20 = param_4;
  _objc_getClass();
  local_40 = pcVar6;
  if (pcVar6 == (char *)0x0) {
    local_18 = (char *)0x0;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,uStack_30,local_28,uStack_20);
    uVar4 = uStack_20;
    uVar3 = local_28;
    uVar2 = uStack_30;
    uVar1 = local_38;
    local_48 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,uVar2,uVar3,uVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    pcVar6 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    iVar5 = 2;
    ___isPlatformVersionAtLeast(2,0xf,0);
    if (iVar5 != 0) {
      pcVar6 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_tableView_0269e378);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
    }
    pcVar6 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar6;
    _objc_storeStrong(&local_48,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

