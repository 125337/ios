// _WCRefineCrashReporterWriteFlutterKillSelf @ 0092e320

void _WCRefineCrashReporterWriteFlutterKillSelf
               (double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  double local_48;
  undefined4 local_40;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_40 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    local_48 = param_1;
    if ((DAT_028ce388 <= 0.0) || (10.0 <= param_1 - DAT_028ce388)) {
      DAT_028ce388 = param_1;
      FUN_0092e120();
      _WCRefineCrashReporterLogDirectory();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
      local_50 = puVar1;
      _objc_alloc_init();
      puVar1 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
      local_58 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
                 &cf_en_US_POSIX);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setLocale__0269d1c0);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_localTimeZone_0269f9d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTimeZone__0269f9d8);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_ddHH_mm_ss_SSS);
      puVar1 = local_58;
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringFromDate__0269d1d8);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_appendString__0269ccb0,&cf_______wcr_FlutterKillSelfIntercepted_____);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_appendFormat__0269d148,&cf_time___);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_appendString__0269ccb0,
                 &cf_name_FlutterFoundationCrashPlugin_crash_report);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_appendString__0269ccb0,&cf_r);
      puVar1 = local_68;
      local_71 = 0;
      local_81 = 0;
      puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_currentThread_026a11e0);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 1;
        local_70 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_81 = 1;
        local_80 = puVar2;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendFormat__0269d148,&cf_thread___);
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      puVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendFormat__0269d148,&cf_error___);
      puVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendFormat__0269d148,&cf_stack___);
      FUN_0092f0a4();
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
      if (puVar1 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_appendString__0269ccb0,&cf_breadcrumbs_);
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_appendString__0269ccb0,local_90);
        puVar1 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_hasSuffix__0269d018,&cf_newline_s_);
        if (((ulong)puVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_appendString__0269ccb0,&cf_newline_s_);
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_appendString__0269ccb0,&cf_________________________________________)
      ;
      puVar1 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
      _objc_alloc_init();
      puVar2 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
      local_98 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
                 &cf_en_US_POSIX);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setLocale__0269d1c0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar1 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_localTimeZone_0269f9d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setTimeZone__0269f9d8);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setDateFormat__0269d1c8,&cf_yyMMddHHmmss)
      ;
      puVar1 = local_98;
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringFromDate__0269d1d8);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar1 = local_50;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_crash____log);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringByAppendingPathComponent__026cab30);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_writeToFile_atomically_encoding__026a33a8,local_a8,1,4,0);
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
      local_40 = 0;
    }
    else {
      local_40 = 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

