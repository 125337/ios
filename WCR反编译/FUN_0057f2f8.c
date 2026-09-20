// FUN_0057f2f8 @ 0057f2f8

void FUN_0057f2f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  puVar3 = PTR_WCRefineHelper_026ce000;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
  _objc_retainAutoreleasedReturnValue();
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_0057f4bc;
  local_48 = &DAT_0257df78;
  local_30 = *(undefined8 *)(param_1 + 0x48);
  local_28 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar2;
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4064000000000000,puVar3,PTR_s_presentPageSheetSingleLineInputW_026a46e0,uVar5,uVar6,
             puVar1,&local_60,in_x6,in_x7,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_40,0);
  return;
}

