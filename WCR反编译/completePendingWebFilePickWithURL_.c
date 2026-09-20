// completePendingWebFilePickWithURL: @ 01efbcf0

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoListWebSettingsViewController::completePendingWebFilePickWithURL_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  cfstringStruct *local_d0;
  cfstringStruct *local_b8;
  undefined *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  byte local_45;
  undefined4 local_44;
  ID local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingWebFileCallbackId_026c73f0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingWebFileCallbackId__026c73e8,0);
  IVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    local_44 = 1;
  }
  else if (local_38 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_completeWebCallback_ok_payload__026c73d0,local_40,0,&::cf___);
    local_44 = 1;
  }
  else {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_startAccessingSecurityScopedReso_026a22c0);
    local_45 = (byte)pcVar3;
    puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL__026a9eb0,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar4;
    if ((local_45 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_stopAccessingSecurityScopedResou_026a22d0);
    }
    puVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (puVar4 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_completeWebCallback_ok_payload__026c73d0,local_40,0,&::cf___);
      local_44 = 1;
    }
    else {
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        pcVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_d0 = pcVar5;
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_d0 = &::cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = local_d0;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = &cf_application_octet_stream;
        pcVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf_png);
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar3 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf_jpg);
          if ((((ulong)pcVar3 & 1) == 0) &&
             (pcVar3 = local_68,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_68,PTR_s_isEqualToString__0269ccc8,&cf_jpeg), ((ulong)pcVar3 & 1) == 0
             )) {
            pcVar3 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf_gif);
            if (((ulong)pcVar3 & 1) == 0) {
              pcVar3 = local_68;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_68,PTR_s_isEqualToString__0269ccc8,&cf_webp);
              if (((ulong)pcVar3 & 1) == 0) {
                pcVar3 = local_68;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_68,PTR_s_isEqualToString__0269ccc8,&cf_mp3);
                if (((ulong)pcVar3 & 1) == 0) {
                  pcVar3 = local_68;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_68,PTR_s_isEqualToString__0269ccc8,&cf_m4a);
                  if (((ulong)pcVar3 & 1) == 0) {
                    pcVar3 = local_68;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_68,PTR_s_isEqualToString__0269ccc8,&cf_wav);
                    if (((ulong)pcVar3 & 1) != 0) {
                      _objc_storeStrong(&local_70,&cf_audio_wav);
                    }
                  }
                  else {
                    _objc_storeStrong(&local_70,&cf_audio_mp4);
                  }
                }
                else {
                  _objc_storeStrong(&local_70,&cf_audio_mpeg);
                }
              }
              else {
                _objc_storeStrong(&local_70,&cf_image_webp);
              }
            }
            else {
              _objc_storeStrong(&local_70,&cf_image_gif);
            }
          }
          else {
            _objc_storeStrong(&local_70,&cf_image_jpeg);
          }
        }
        else {
          _objc_storeStrong(&local_70,&cf_image_png);
        }
        puVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_base64EncodedStringWithOptions__026a1df8,0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_78 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_data____base64___);
        _objc_retainAutoreleasedReturnValue();
        local_80 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_completeWebCallback_ok_payload__026c73d0,local_40,1,puVar6);
        _objc_storeStrong(&local_80);
        _objc_storeStrong(&local_78,0);
        _objc_storeStrong(&local_70,0);
        _objc_storeStrong(&local_68,0);
        local_44 = 0;
      }
      else {
        FUN_01efc39c();
        _objc_retainAutoreleasedReturnValue();
        IVar1 = local_28;
        IVar2 = local_40;
        local_60 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
        if (local_60 == (cfstringStruct *)0x0) {
          local_b8 = &::cf___;
        }
        else {
          local_b8 = local_60;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_completeWebCallback_ok_payload__026c73d0,IVar2,
                   pcVar3 != (cfstringStruct *)0x0,local_b8);
        local_44 = 1;
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

