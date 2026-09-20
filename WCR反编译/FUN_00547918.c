// FUN_00547918 @ 00547918

ulong FUN_00547918(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  FUN_00550e3c();
  _objc_storeStrong(&DAT_028cb348);
  _objc_storeStrong(&DAT_028cb350,0);
  _objc_storeStrong(&DAT_028cb358,0);
  _objc_storeStrong(&DAT_028cb360,0);
  FUN_00550e78();
  FUN_00550fb0();
  FUN_0055101c(0x4034000000000000);
  uVar2 = local_18;
  (*DAT_028cb3a0)(local_18,local_20,local_28,local_30);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return uVar2 & 0xffffffff;
}

