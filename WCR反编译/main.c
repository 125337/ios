// main @ 011381b4

/* Function Stack Size: 0x10 bytes */

void WCRefineReceiveRedEnvelopOperation::main(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  undefined1 local_29;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isCancelled_026a1c20);
  if ((param_1 & 1) == 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_delayMilliseconds_026ac9f0);
    puVar5 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    if ((int)IVar3 != 0) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_delayMilliseconds_026ac9f0);
      (*(code *)PTR__objc_msgSend_02578628)
                ((double)(IVar3 & 0xffffffff) / 1000.0,puVar5,PTR_s_sleepForTimeInterval__0269d9e8);
    }
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isCancelled_026a1c20);
    local_29 = 0;
    bVar2 = true;
    uVar1 = (IVar3 & 1) == 0;
    if ((bool)uVar1) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_redEnvelopParam_026af3b8);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = IVar3 == 0;
      local_29 = uVar1;
      local_28 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      uVar1 = local_29;
    }
    local_29 = uVar1;
    if (!bVar2) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_redEnvelopParam_026af3b8);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_38 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_38;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((IVar3 & 1) == 0) ||
         (IVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0),
         puVar5 = PTR___dispatch_main_q_02578680, IVar3 == 0)) {
        local_3c = 1;
      }
      else {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        IVar4 = local_18;
        local_70 = PTR___NSConcreteStackBlock_02578660;
        local_68 = 0xc2000000;
        local_64 = 0;
        local_60 = FUN_011384e8;
        local_58 = &DAT_0257a7a0;
        (*(code *)PTR__objc_retain_02578638)();
        IVar3 = local_38;
        local_50 = IVar4;
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = IVar3;
        _dispatch_async(puVar5,&local_70);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _objc_storeStrong(&local_48);
        _objc_storeStrong(&local_50,0);
        local_3c = 0;
      }
      _objc_storeStrong(&local_38,0);
    }
  }
  return;
}

