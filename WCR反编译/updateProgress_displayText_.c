// updateProgress:displayText: @ 0112979c

/* Function Stack Size: 0x20 bytes */

void WCRefineProgressToast::updateProgress_displayText_
               (ID param_1,SEL param_2,double param_3,ID param_4)

{
  undefined8 uVar1;
  ID IVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ID local_50;
  undefined8 local_48;
  double local_40;
  undefined **local_38;
  undefined8 local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  IVar2 = local_18;
  ppuVar3 = &local_70;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_01129908;
  local_58 = &DAT_0257a740;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_30;
  local_50 = IVar2;
  local_40 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar1;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_38 = ppuVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar5 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar4 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  else {
    (*(code *)local_38[2])();
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_30,0);
  return;
}

