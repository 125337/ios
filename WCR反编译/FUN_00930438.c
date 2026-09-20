// FUN_00930438 @ 00930438

void FUN_00930438(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *local_290;
  undefined8 local_1e0;
  int local_1d4;
  undefined *local_1d0;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  byte local_189;
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  stat sStack_170;
  undefined *local_e0;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined8 local_c8;
  stat sStack_c0;
  
  if (DAT_028ce7b0 == '\0') {
    FUN_0092f900();
  }
  if (DAT_028ce7b0 != '\0') {
    _memset(&sStack_c0,0,0x90);
    iVar2 = _stat(&DAT_028ce7b0,&sStack_c0);
    local_c8 = CONCAT44(extraout_var,iVar2);
    if ((iVar2 == 0) && (0x1f < sStack_c0.st_size)) {
      FUN_0092e120(sStack_c0.st_size + -0x20);
      _WCRefineCrashReporterLogDirectory();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithUTF8String__0269fd30,
                 &DAT_028ce7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_dataWithContentsOfFile__0269e0b8);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar5 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
      if ((undefined1 *)((long)&MACH_HEADER.reserved + 3) < puVar5) {
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_initWithData_encoding__026a3378,local_d0,4);
        local_e0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
        if (puVar4 == (undefined *)0x0) {
          _unlink(&DAT_028ce7b0);
          local_d4 = 1;
        }
        else {
          if ((DAT_028cebb0 != '\0') &&
             (puVar4 = local_e0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_e0,PTR_s_containsString__0269d0b0,&cf_LastObjCException),
             ((ulong)puVar4 & 1) == 0)) {
            _memset(&sStack_170,0,0x90);
            iVar2 = _stat(&DAT_028cebb0,&sStack_170);
            puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
            if ((iVar2 == 0) && (0x10 < sStack_170.st_size)) {
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithUTF8String__0269fd30,
                         &DAT_028cebb0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_dataWithContentsOfFile__0269e0b8);
              _objc_retainAutoreleasedReturnValue();
              local_178 = puVar4;
              (*(code *)PTR__objc_release_02578630)(puVar3);
              local_189 = 0;
              puVar4 = local_178;
              (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
              if (puVar4 == (undefined *)0x0) {
                local_290 = (undefined *)0x0;
              }
              else {
                local_290 = PTR__OBJC_CLASS___NSString_026cdfe8;
                _objc_alloc();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_290,PTR_s_initWithData_encoding__026a3378,local_178,4);
                local_189 = 1;
                local_188 = local_290;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_180 = local_290;
              if ((local_189 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_188);
              }
              puVar4 = local_180;
              (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0);
              if (puVar4 != (undefined *)0x0) {
                puVar3 = local_180;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_180,PTR_s_stringByAppendingString__0269d398,local_e0);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = local_e0;
                local_e0 = puVar3;
                (*(code *)PTR__objc_release_02578630)(puVar4);
              }
              _objc_storeStrong(&local_180);
              _objc_storeStrong(&local_178,0);
            }
          }
          if (DAT_028cebb0 != '\0') {
            _unlink(&DAT_028cebb0);
          }
          puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
          (*(code *)PTR__objc_msgSend_02578628)
                    ((double)sStack_c0.st_mtimespec.tv_sec,PTR__OBJC_CLASS___NSDate_026cdf88,
                     PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
          local_198 = puVar4;
          _objc_alloc_init();
          puVar4 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
          local_1a0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
                     &cf_en_US_POSIX);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setLocale__0269d1c0);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar4 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_localTimeZone_0269f9d0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setTimeZone__0269f9d8);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a0,PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_ddHH_mm_ss_SSS);
          puVar4 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_stringFromDate__0269d1d8,local_198);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_e0;
          local_1a8 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_containsString__0269d0b0,&cf_time_unix_);
          if ((((ulong)puVar3 & 1) != 0) &&
             (puVar4 = local_e0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_e0,PTR_s_containsString__0269d0b0,&cf_time_), ((ulong)puVar4 & 1) == 0
             )) {
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf_time___time_unix_);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_e0;
            local_1b0 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_time_unix_,
                       puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = local_e0;
            local_e0 = puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar4);
            _objc_storeStrong(&local_1b0,0);
          }
          puVar4 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
          _objc_alloc_init();
          puVar3 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
          local_1b8 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
                     &cf_en_US_POSIX);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_setLocale__0269d1c0);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar4 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_localTimeZone_0269f9d0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_setTimeZone__0269f9d8);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b8,PTR_s_setDateFormat__0269d1c8,&cf_yyMMddHHmmss);
          puVar4 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_stringFromDate__0269d1d8,local_198);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = local_c8;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_1c0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_crash____log);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_stringByAppendingPathComponent__026cab30);
          _objc_retainAutoreleasedReturnValue();
          local_1c8 = uVar6;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          local_1d4 = 0;
          local_1d0 = puVar4;
          while (puVar4 = local_1d0,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1d0,PTR_s_fileExistsAtPath__026ca630,local_1c8), uVar6 = local_c8,
                ((ulong)puVar4 & 1) != 0 && local_1d4 < 0x14) {
            local_1d4 = local_1d4 + 1;
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf_crash_____d_log);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar6,PTR_s_stringByAppendingPathComponent__026cab30);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = local_1c8;
            local_1c8 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar1);
            (*(code *)PTR__objc_release_02578630)(puVar4);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_writeToFile_atomically_encoding__026a33a8,local_1c8,1,4,0);
          uVar6 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_stringByAppendingPathComponent__026cab30,&cf_latest_log);
          _objc_retainAutoreleasedReturnValue();
          local_1e0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_writeToFile_atomically_encoding__026a33a8,uVar6,1,4,0);
          _unlink(&DAT_028ce7b0);
          _objc_storeStrong(&local_1e0);
          _objc_storeStrong(&local_1d0,0);
          _objc_storeStrong(&local_1c8,0);
          _objc_storeStrong(&local_1c0,0);
          _objc_storeStrong(&local_1b8,0);
          _objc_storeStrong(&local_1a8,0);
          _objc_storeStrong(&local_1a0,0);
          _objc_storeStrong(&local_198,0);
          local_d4 = 0;
        }
        _objc_storeStrong(&local_e0,0);
      }
      else {
        _unlink(&DAT_028ce7b0);
        local_d4 = 1;
      }
      _objc_storeStrong(&local_d0);
      _objc_storeStrong(&local_c8,0);
    }
  }
  return;
}

