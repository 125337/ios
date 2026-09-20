// finishWithText:success:completion: @ 0112a150

/* Function Stack Size: 0x24 bytes */

void WCRefineProgressToast::finishWithText_success_completion_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ID local_60;
  undefined8 local_58;
  undefined8 local_50;
  byte local_48;
  undefined **local_40;
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  IVar3 = local_18;
  ppuVar4 = &local_80;
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_0112a318;
  local_68 = &DAT_02582ee8;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_38;
  local_60 = IVar3;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_28;
  local_50 = uVar1;
  local_48 = local_29 & 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar2;
  _objc_retainBlock();
  puVar5 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_40 = ppuVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar6 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar5 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  else {
    (*(code *)local_40[2])();
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

