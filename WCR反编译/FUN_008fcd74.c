// FUN_008fcd74 @ 008fcd74

void FUN_008fcd74(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_170;
  undefined *local_100;
  cfstringStruct *local_90;
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_40;
  long local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_40 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_40 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL__026a9eb0,puVar2);
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
      if (puVar3 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf___;
        local_40 = 1;
      }
      else {
        local_61 = 0;
        local_71 = 0;
        local_81 = 0;
        puVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (puVar3 == (undefined *)0x0) {
          local_100 = local_50;
          FUN_008f6e04(0);
          _objc_retainAutoreleasedReturnValue();
          local_81 = 1;
          local_80 = local_100;
        }
        else {
          local_100 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_pathExtension_0269e090);
          _objc_retainAutoreleasedReturnValue();
          local_61 = 1;
          local_60 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_71 = 1;
          local_70 = local_100;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = local_100;
        if ((local_81 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        if ((local_71 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
        if ((local_61 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_60);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_stringWithFormat__0269cca8,&cf_media__lld___);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = &cf_WCRefineMediaToVoice;
        FUN_008fd604();
        _objc_retainAutoreleasedReturnValue();
        local_90 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_writeToFile_atomically__0269f928,local_90,1);
        if (((ulong)puVar2 & 1) == 0) {
          local_170 = &cf___;
        }
        else {
          local_170 = local_90;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_170;
        local_40 = 1;
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

