// showOrUpdateWithStage:progress: @ 006e6970

/* Function Stack Size: 0x20 bytes */

void WCRefineScreenRecordingProgressHUD::showOrUpdateWithStage_progress_
               (ID param_1,SEL param_2,ID param_3,double param_4)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  long local_140;
  long local_138;
  cfstringStruct *local_128;
  double local_118;
  double local_110;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  ID local_e0;
  cfstringStruct *local_d8;
  long local_d0;
  double local_c8;
  long local_c0;
  undefined4 local_b4;
  long local_b0;
  undefined4 local_a4;
  long local_a0;
  long local_98;
  long local_90;
  cfstringStruct *local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  undefined8 local_58;
  double local_50;
  double local_48;
  double local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_58 = 0;
  local_110 = param_4;
  if (param_4 < 0.0) {
    local_110 = 0.0;
  }
  local_60 = local_110;
  local_48 = local_110;
  local_68 = 0x3ff0000000000000;
  if (1.0 <= local_110) {
    local_118 = 1.0;
  }
  else {
    local_118 = local_110;
  }
  local_70 = local_118;
  local_40 = local_118;
  pcVar2 = local_38;
  local_50 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_128 = &cf_U_O_Yt_;
  }
  else {
    local_128 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = PTR___dispatch_main_q_02578680;
  local_78 = local_128;
  local_a0 = (long)(local_40 * 100.0);
  local_a4 = 0;
  local_138 = local_a0;
  if (local_a0 < 0) {
    local_138 = 0;
  }
  local_b0 = local_138;
  local_98 = local_138;
  local_b4 = 100;
  if (local_138 < 100) {
    local_140 = local_138;
  }
  else {
    local_140 = 100;
  }
  local_c0 = local_140;
  local_90 = local_140;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  local_100 = PTR___NSConcreteStackBlock_02578660;
  local_f8 = 0xc2000000;
  local_f4 = 0;
  local_f0 = FUN_006e6c7c;
  local_e8 = &DAT_0257eea8;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_78;
  local_e0 = IVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = pcVar2;
  local_d0 = local_90;
  local_c8 = local_40;
  _dispatch_async(puVar3,&local_100);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_38,0);
  return;
}

