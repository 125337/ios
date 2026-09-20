// FUN_0053f0f0 @ 0053f0f0

void FUN_0053f0f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined4 local_40;
  byte local_29;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_18;
  local_28 = puVar2;
  FUN_0054255c();
  local_29 = (byte)uVar3;
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_momentsDraftEnabled_026a4d60);
  uVar1 = local_18;
  uVar3 = DAT_026f4360;
  if ((((ulong)puVar2 & 1) == 0) || ((local_29 & 1) != 0)) {
    if ((local_29 & 1) == 0) {
      (*DAT_028cb308)(local_18,local_20);
      local_40 = 0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar1,uVar3,puVar2,1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*DAT_028cb308)(local_18,local_20);
      _objc_initWeak(auStack_48,local_18);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_00543fd4;
      local_58 = &DAT_02578da0;
      _objc_copyWeak(auStack_50,auStack_48);
      _dispatch_async(puVar2,&local_70);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_40 = 1;
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  else {
    (*DAT_028cb308)(local_18,local_20);
    local_40 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

