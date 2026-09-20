// WCRefineToDo_scheduleHeaderLayout: @ 007fdc64

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoHook::WCRefineToDo_scheduleHeaderLayout_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  dispatch_time_t dVar6;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [12];
  undefined4 local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_2c = 1;
  }
  else {
    IVar4 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028ccee4);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_18;
    if ((IVar5 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(IVar4,&DAT_028ccee4,puVar2,1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_initWeak(auStack_38,local_18);
      dVar6 = _dispatch_time(0,60000000);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_007fdec8;
      local_50 = &DAT_02579c60;
      _objc_copyWeak(auStack_40,auStack_38);
      uVar1 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = uVar1;
      _dispatch_after(dVar6,puVar2,&local_68);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_48,0);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

