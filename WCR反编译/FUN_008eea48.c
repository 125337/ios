// FUN_008eea48 @ 008eea48

void FUN_008eea48(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100 [3];
  cfstringStruct *local_e8;
  undefined4 local_dc;
  undefined8 *local_d8;
  long local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c8,param_1);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_2);
  pcVar2 = local_c8;
  local_d8 = param_3;
  if (local_c8 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = &cf___;
    local_dc = 1;
  }
  else {
    local_60 = &cf_audioUrl;
    local_58 = &cf_audioURL;
    local_50 = &cf_url;
    local_48 = &cf_webUrl;
    local_40 = &cf_downloadUrl;
    local_38 = &cf_playUrl;
    local_30 = &cf_mediaUrl;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_008f00a8();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_008efb90();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar3 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
    pcVar2 = local_c8;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_70 = &cf_listenItem;
      local_68 = &cf_item;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      FUN_008ebfa0();
      _objc_retainAutoreleasedReturnValue();
      local_100[0] = pcVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      pcVar2 = local_100[0];
      local_90 = &cf_audioUrl;
      local_88 = &cf_audioURL;
      local_80 = &cf_url;
      local_78 = &cf_webUrl;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_90
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      FUN_008f00a8();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_008efb90();
      _objc_retainAutoreleasedReturnValue();
      local_108 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      pcVar3 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
      pcVar2 = local_c8;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_98 = &cf_tingItem;
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_98,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_008ebfa0();
        _objc_retainAutoreleasedReturnValue();
        local_110 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        pcVar2 = local_110;
        local_b8 = &cf_audioUrl;
        local_b0 = &cf_audioURL;
        local_a8 = &cf_url;
        local_a0 = &cf_webUrl;
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_b8,4);
        _objc_retainAutoreleasedReturnValue();
        FUN_008f00a8();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_008efb90();
        _objc_retainAutoreleasedReturnValue();
        local_118 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        pcVar2 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
        if (pcVar2 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_c0 = &cf___;
        }
        else {
          if (local_d8 != (undefined8 *)0x0) {
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf____tingItem);
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *local_d8 = puVar1;
          }
          pcVar2 = local_118;
          (*(code *)PTR__objc_retain_02578638)();
          local_c0 = pcVar2;
        }
        local_dc = 1;
        _objc_storeStrong(&local_118);
        _objc_storeStrong(&local_110,0);
      }
      else {
        if (local_d8 != (undefined8 *)0x0) {
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf____listenItem);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *local_d8 = puVar1;
        }
        pcVar2 = local_108;
        (*(code *)PTR__objc_retain_02578638)();
        local_c0 = pcVar2;
        local_dc = 1;
      }
      _objc_storeStrong(&local_108);
      _objc_storeStrong(local_100,0);
    }
    else {
      if (local_d8 != (undefined8 *)0x0) {
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf____direct);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *local_d8 = puVar1;
      }
      pcVar2 = local_e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = pcVar2;
      local_dc = 1;
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_c0);
  return;
}

