// FUN_01cbf3c8 @ 01cbf3c8

void FUN_01cbf3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  cfstringStruct *local_108;
  cfstringStruct *local_f0;
  ulong local_d8;
  long local_a8;
  long local_a0;
  undefined *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  byte local_71;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined *local_58;
  undefined4 local_4c;
  ulong local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  long local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (uVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_4c = 1;
  }
  else {
    uVar2 = local_48;
    puVar3 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rangeOfString__0269d838,&cf__);
    local_71 = 0;
    local_60 = uVar2;
    local_58 = puVar3;
    if (uVar2 != 0x7fffffffffffffff) {
      local_d8 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_substringFromIndex__0269d120,uVar2 + 1);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_d8;
    }
    else {
      local_d8 = local_48;
    }
    local_71 = uVar2 != 0x7fffffffffffffff;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_d8;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_80 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_4c = 1;
    }
    else {
      pcVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_f0 = &cf__;
      }
      else {
        local_f0 = local_38;
      }
      _WCRefineProfileBgSafePathComponent();
      _objc_retainAutoreleasedReturnValue();
      local_88 = local_f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = &cf_jpg;
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_image_png);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_image_gif)
        ;
        if ((uVar2 & 1) == 0) {
          uVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_containsString__0269d0b0,&cf_image_webp);
          if ((uVar2 & 1) != 0) {
            _objc_storeStrong(&local_90,&cf_webp);
          }
        }
        else {
          _objc_storeStrong(&local_90,&cf_gif);
        }
      }
      else {
        _objc_storeStrong(&local_90,&cf_png);
      }
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_108 = &cf_img;
      }
      else {
        local_108 = local_40;
      }
      _WCRefineProfileBgSafePathComponent();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf______);
      _objc_retainAutoreleasedReturnValue();
      local_98 = puVar3;
      (*(code *)PTR__objc_release_02578630)(local_108);
      lVar1 = local_30;
      _WCRefineProfileBgHTMLWorkDirectory();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = lVar6;
      (*(code *)PTR__objc_release_02578630)(lVar5);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      lVar1 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_stringByAppendingPathComponent__026cab30,local_98);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_80;
      local_a8 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_writeToFile_atomically__0269f928,lVar1,1)
      ;
      local_28 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf___;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_stringWithFormat__0269cca8,&cf_wcrasset_________);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      local_4c = 1;
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

