// FUN_008cd918 @ 008cd918

void FUN_008cd918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  byte local_39;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar1 = local_28;
  _objc_getAssociatedObject(local_28,DAT_026f4b08);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_39 = (byte)uVar2;
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if (uVar3 == 1) {
    FUN_008d402c(0);
    uVar2 = local_28;
    uVar1 = DAT_026f4b08;
    if ((uVar3 & 1) == 0) {
      local_50 = 1;
    }
    else if ((local_39 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,uVar1,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      FUN_008cef6c();
      uVar1 = local_28;
      FUN_008caddc();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR___dispatch_main_q_02578680;
      local_58 = uVar1;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_58;
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = FUN_008d6e00;
      local_70 = &DAT_02579ee0;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = uVar1;
      local_60 = local_28;
      _dispatch_async(puVar4,&local_88);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_58,0);
      local_50 = 0;
    }
    else {
      local_50 = 1;
    }
  }
  else {
    local_50 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

