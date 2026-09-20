// FUN_00684440 @ 00684440

void FUN_00684440(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_68;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  byte local_30;
  byte local_2d;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_68 = &cf_6e>kaSGrS1Y_;
  }
  else {
    local_68 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_68;
  FUN_006866ac();
  puVar2 = PTR___dispatch_main_q_02578680;
  local_2d = (byte)local_68;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_20;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_006868d0;
  local_40 = &DAT_0257b488;
  local_30 = local_2d & 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = pcVar1;
  _dispatch_async(puVar2,&local_58);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

