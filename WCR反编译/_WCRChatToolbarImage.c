// _WCRChatToolbarImage @ 00ef2e90

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void _WCRChatToolbarImage
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  uint local_1b4;
  cfstringStruct *local_198;
  cfstringStruct *local_178;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  bool local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  int local_74;
  cfstringStruct *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  pcVar2 = local_30;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_action)
  ;
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomIcon);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_30;
  _WCRChatToolbarResolvedIcon(local_30,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar2;
  if (DAT_028e2ae8 == (cfstringStruct *)0x0) {
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSCache_026ce1d8;
    _objc_alloc_init();
    pcVar2 = DAT_028e2ae8;
    DAT_028e2ae8 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2ae8,PTR_s_setCountLimit__0269e0d0,0x80);
  }
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  FUN_00ef3adc();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_stringWithFormat__0269cca8,&cf____________1f__ld);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = DAT_028e2ae8;
  local_68 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2ae8,PTR_s_objectForKey__0269e048,puVar4);
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_80 = (cfstringStruct *)0x0;
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf_chat_);
      pcVar2 = local_50;
      if (((ulong)pcVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_hasPrefix__0269d320,&cf_wcr_attachment_);
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar3 = local_60;
          FUN_00ef3bf8(local_48);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_80;
          local_80 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        else {
          pcVar2 = local_38;
          FUN_00ef4940();
          local_d8 = pcVar2;
          for (local_e0 = (cfstringStruct *)0x0; local_e0 < local_d8;
              local_e0 = (cfstringStruct *)((long)&local_e0->field0_0x0 + 1)) {
            pcVar2 = local_38;
            FUN_00ef49d8((long)local_e0 - (long)local_d8,local_38,local_e0,0);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_1b4 = 0;
            if (((ulong)pcVar3 & 1) != 0) {
              pcVar3 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getImageAtIndex__026a7c28
                        );
              local_1b4 = (uint)pcVar3;
            }
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            if ((local_1b4 & 1) != 0) {
              pcVar2 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_getImageAtIndex__026a7c28,local_e0);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
              local_e8 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
              if (((ulong)pcVar2 & 1) == 0) {
                local_74 = 0;
              }
              else {
                pcVar3 = local_e8;
                FUN_00ef4540(local_48,local_e8,0);
                _objc_retainAutoreleasedReturnValue();
                pcVar2 = local_80;
                local_80 = pcVar3;
                (*(code *)PTR__objc_release_02578630)(pcVar2);
                local_74 = 2;
              }
              _objc_storeStrong(&local_e8,0);
              if (local_74 != 0) break;
            }
          }
        }
      }
      else {
        pcVar3 = &cf_chat_;
        (*(code *)PTR__objc_msgSend_02578628)(&cf_chat_,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        local_88 = pcVar2;
        FUN_00ef3e40();
        _objc_retainAutoreleasedReturnValue();
        local_90 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          pcVar3 = local_88;
          FUN_00eee3ac();
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = &cf_getContactHeadImage;
          local_98 = pcVar3;
          _NSSelectorFromString(&cf_getContactHeadImage);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_respondsToSelector__026ca818,pcVar2);
          local_178 = local_98;
          local_a9 = false;
          bVar1 = ((ulong)pcVar3 & 1) == 0;
          if (bVar1) {
            local_178 = (cfstringStruct *)0x0;
          }
          else {
            pcVar2 = &cf_getContactHeadImage;
            _NSSelectorFromString(&cf_getContactHeadImage);
            (*(code *)PTR__objc_msgSend_02578628)(local_178,pcVar2);
            _objc_retainAutoreleasedReturnValue();
            local_a8 = local_178;
          }
          local_a9 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_a0 = local_178;
          if ((local_a9 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_a8);
          }
          pcVar2 = local_a0;
          puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_b9 = 0;
          local_c9 = 0;
          if (((ulong)pcVar2 & 1) == 0) {
            local_198 = &cf_add_friend_icon_contacts;
            FUN_00ef3bf8(local_48);
            _objc_retainAutoreleasedReturnValue();
            local_c9 = 1;
            local_c8 = local_198;
          }
          else {
            local_198 = local_a0;
            FUN_00ef4540(local_48,local_a0,1);
            _objc_retainAutoreleasedReturnValue();
            local_b9 = 1;
            local_b8 = local_198;
          }
          _objc_storeStrong(&local_80,local_198);
          if ((local_c9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_c8);
          }
          if ((local_b9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_b8);
          }
          _objc_storeStrong(&local_a0);
          _objc_storeStrong(&local_98,0);
        }
        else {
          FUN_00ef4540(local_48,pcVar2,1);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_80;
          local_80 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_88,0);
      }
      if (local_80 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028e2ae8,PTR_s_setObject_forKey__026ca9e8,local_80,local_68);
      }
      pcVar2 = local_80;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
    }
    else {
      pcVar3 = local_58;
      FUN_00ef3bf8(pcVar2,local_48);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_80;
      local_80 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if (local_80 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028e2ae8,PTR_s_setObject_forKey__026ca9e8,local_80,local_68);
      }
      pcVar2 = local_80;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
    }
    local_74 = 1;
    _objc_storeStrong(&local_80,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_74 = 1;
    local_28 = pcVar2;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

