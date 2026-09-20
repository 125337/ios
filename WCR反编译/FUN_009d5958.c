// FUN_009d5958 @ 009d5958

void FUN_009d5958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined *local_50;
  undefined4 local_44;
  long local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  lVar4 = local_20;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf__videos____content);
  _objc_retainAutoreleasedReturnValue();
  FUN_009c9ac8();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar2 = local_18;
  uVar1 = local_38;
  if (local_40 == 0) {
    pcVar5 = &cf___bFO___N_0W_W;
    FUN_009c701c(&cf___bFO___N_0W_W,0xfffffffffffffffe);
    _objc_retainAutoreleasedReturnValue();
    FUN_009d255c(uVar2,uVar1,0);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    local_44 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4066800000000000,PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,
               PTR_s_requestWithURL_cachePolicy_timeo_026aaf30,local_40,1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_28;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    puVar3 = local_50;
    if (lVar4 != 0) {
      pcVar5 = &cf_Bearer;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_Bearer,PTR_s_stringByAppendingString__0269d398,local_28);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_setValue_forHTTPHeaderField__026a16e8,pcVar5,&cf_Authorization);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_setValue_forHTTPHeaderField__026a16e8,
               &cf_video_mp4_application_octet_stream____,&cf_Accept);
    FUN_009d5ddc(local_18,local_50,local_38);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

