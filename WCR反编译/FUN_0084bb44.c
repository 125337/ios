// FUN_0084bb44 @ 0084bb44

void FUN_0084bb44(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [31];
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cd4a8)(param_1,param_2,param_3 & 1);
  uVar1 = local_18;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar1,&DAT_028cd4c8,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_initWeak(auStack_40,local_18);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_00862624;
  local_50 = &DAT_02578da0;
  _objc_copyWeak(auStack_48,auStack_40);
  _dispatch_async(puVar2,&local_68);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_40);
  return;
}

