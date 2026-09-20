// handleSTDERRBytes:length: @ 0091d2c0

/* Function Stack Size: 0x20 bytes */

void WCNavigationMonitor::handleSTDERRBytes_length_
               (ID param_1,SEL param_2,const_char__ param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined4 local_7c;
  undefined *local_78;
  long_long local_70;
  const_char__ local_68;
  SEL local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  if ((param_3 != (const_char__)0x0) && (0 < (long)param_4)) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_70 = param_4;
    local_68 = param_3;
    local_60 = param_2;
    local_58 = (undefined *)param_1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_78 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar1 = local_78;
      local_78 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    puVar1 = local_58;
    if (puVar2 == (undefined *)0x0) {
      local_7c = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(puVar1);
      puVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stderrLineBuffer_026aa4c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar2 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setStderrLineBuffer__026aa488);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stderrLineBuffer_026aa4c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      while( true ) {
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stderrLineBuffer_026aa4c0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        puVar4 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_a0 = puVar3;
        local_98 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (local_a0 == (undefined *)0x7fffffffffffffff) break;
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stderrLineBuffer_026aa4c0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_a8 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stderrLineBuffer_026aa4c0);
        _objc_retainAutoreleasedReturnValue();
        local_30 = local_a0;
        local_28 = local_98;
        local_b0 = local_98 + (long)local_a0;
        local_48 = 0;
        local_40 = 0;
        local_b8 = 0;
        local_50 = local_b0;
        local_38 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_deleteCharactersInRange__026a84a8,0,local_b0);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_captureNSLogMessage__026aa4c8,local_a8)
        ;
        _objc_storeStrong(&local_a8,0);
      }
      puVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stderrLineBuffer_026aa4c0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (&DAT_00002ee0 < puVar3) {
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stderrLineBuffer_026aa4c0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stderrLineBuffer_026aa4c0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar5 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_substringFromIndex__0269d120,puVar4 + -4000);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_mutableCopy_0269d8a0);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setStderrLineBuffer__026aa488,puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        _objc_storeStrong(&local_c0,0);
      }
      _objc_sync_exit(puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_7c = 0;
    }
    _objc_storeStrong(&local_78,0);
  }
  return;
}

