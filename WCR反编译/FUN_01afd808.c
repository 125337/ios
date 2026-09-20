// FUN_01afd808 @ 01afd808

void FUN_01afd808(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_e0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_34 = 1;
    goto LAB_01afdf70;
  }
  pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar3;
  FUN_01b03980();
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
  pcVar2 = local_30;
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = pcVar2;
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf_Documents_);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringFromIndex__0269d120,10);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_50;
        local_50 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
LAB_01afdc3c:
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf___;
        local_34 = 1;
      }
      else {
        pcVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_stringByAppendingPathComponent__026cab30,local_50);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_40;
        local_80 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_fileExistsAtPath__026ca630,pcVar2);
        pcVar2 = local_80;
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          local_88 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf___;
            local_34 = 1;
          }
          else {
            pcVar2 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_stringByAppendingPathComponent__026cab30,
                       &cf_WCRefine_HomeAvatarStrip);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_90 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            pcVar3 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_fileExistsAtPath__026ca630,local_90);
            pcVar2 = local_90;
            if (((ulong)pcVar3 & 1) == 0) {
              pcVar2 = local_48;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_stringByAppendingPathComponent__026cab30,&cf_W);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_98 = pcVar3;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              pcVar3 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_fileExistsAtPath__026ca630,local_98);
              pcVar2 = local_98;
              if (((ulong)pcVar3 & 1) == 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = &cf___;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = pcVar2;
              }
              local_34 = 1;
              _objc_storeStrong(&local_98,0);
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = pcVar2;
              local_34 = 1;
            }
            _objc_storeStrong(&local_90,0);
          }
          _objc_storeStrong(&local_88,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar2;
          local_34 = 1;
        }
        _objc_storeStrong(&local_80,0);
      }
    }
    else {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_fileExistsAtPath__026ca630,local_30);
      pcVar2 = local_30;
      if (((ulong)pcVar3 & 1) == 0) {
        puVar1 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_rangeOfString__0269d838,&cf__Documents_);
        local_60 = pcVar2;
        local_58 = puVar1;
        if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
          pcVar2 = local_30;
          puVar1 = PTR_s_rangeOfString__0269d838;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_rangeOfString__0269d838,&cf__WCRefine_HomeAvatarStrip_);
          local_78 = pcVar2;
          local_70 = puVar1;
          if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
            pcVar2 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_fileExistsAtPath__026ca630,local_30);
            local_28 = local_30;
            if (((ulong)pcVar2 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_34 = 1;
              goto LAB_01afdf40;
            }
            pcVar2 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
            _objc_retainAutoreleasedReturnValue();
            local_e0 = pcVar2;
            if (pcVar2 == (cfstringStruct *)0x0) {
              local_e0 = &cf___;
            }
            _objc_storeStrong(&local_50,local_e0);
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          else {
            pcVar3 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_substringFromIndex__0269d120,
                       (undefined *)((long)&pcVar2->field0_0x0 + 1));
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_50;
            local_50 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
        }
        else {
          pcVar3 = local_30;
          local_68 = (cfstringStruct *)(puVar1 + (long)&pcVar2->field0_0x0);
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
          if ((cfstringStruct *)(puVar1 + (long)&pcVar2->field0_0x0) < pcVar3) {
            pcVar3 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_substringFromIndex__0269d120,local_68);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_50;
            local_50 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
        }
        goto LAB_01afdc3c;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
      local_34 = 1;
    }
LAB_01afdf40:
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
LAB_01afdf70:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

