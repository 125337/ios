// FUN_008e0574 @ 008e0574

byte FUN_008e0574(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  cfstringStruct *local_250;
  cfstringStruct *local_178;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  cfstringStruct *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined1 local_81;
  long local_80;
  long local_78;
  cfstringStruct *local_70;
  long local_68;
  long local_60;
  int local_58;
  long *local_48;
  long *local_40;
  long local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_48 = param_4;
  local_40 = param_3;
  if (param_3 != (long *)0x0) {
    _objc_retainAutorelease();
    *local_40 = (long)&cf___;
  }
  if (local_48 != (long *)0x0) {
    _objc_retainAutorelease();
    *local_48 = (long)&cf___;
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((pcVar2 == (cfstringStruct *)0x0) ||
     (lVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_21 = 0;
    local_58 = 1;
    goto LAB_008e134c;
  }
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = lVar4;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stringByDeletingPathExtension_0269fd18);
  _objc_retainAutoreleasedReturnValue();
  local_68 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    _objc_storeStrong(&local_68,&cf_voice);
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_178 = pcVar6;
  if (pcVar6 == (cfstringStruct *)0x0) {
    local_178 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_178;
  (*(code *)PTR__objc_release_02578630)(pcVar6);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_70;
  FUN_008f416c();
  if (((ulong)pcVar2 & 1) == 0) {
LAB_008e09e8:
    pcVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,&cf_mp3);
    if (((ulong)pcVar2 & 1) != 0) {
      lVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_stringByAppendingPathExtension__026a4580,&cf_mp3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_60;
      local_78 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_stringByAppendingPathComponent__026cab30,lVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_80 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      lVar3 = local_80;
      local_81 = SUB81(puVar7,0);
      if (((ulong)puVar7 & 1) == 0) {
        local_58 = 0;
      }
      else {
        if (local_40 != (long *)0x0) {
          _objc_retainAutorelease();
          *local_40 = lVar3;
        }
        lVar3 = local_78;
        if (local_48 != (long *)0x0) {
          _objc_retainAutorelease();
          *local_48 = lVar3;
        }
        local_21 = 1;
        local_58 = 1;
      }
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      if (local_58 != 0) goto LAB_008e12f0;
    }
    lVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_stringByAppendingPathExtension__026a4580,&cf_mp3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_60;
    local_90 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_stringByAppendingPathComponent__026cab30,lVar3);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_30;
    local_98 = lVar4;
    FUN_008f5fc8(local_30,lVar4,*(undefined8 *)PTR__AVFileTypeMPEGLayer3_02578530,
                 *(undefined8 *)PTR__AVAssetExportPresetPassthrough_025784b0);
    lVar3 = local_98;
    if (((ulong)pcVar2 & 1) == 0) {
      lVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_stringByAppendingPathExtension__026a4580,&cf_m4a);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_60;
      local_a0 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_stringByAppendingPathComponent__026cab30,lVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_30;
      local_a8 = lVar4;
      FUN_008f5fc8(local_30,lVar4,*(undefined8 *)PTR__AVFileTypeAppleM4A_02578520,
                   *(undefined8 *)PTR__AVAssetExportPresetAppleM4A_02578498);
      lVar3 = local_a8;
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_70;
        FUN_008f416c();
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar2 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_250 = &cf_dat;
          }
          else {
            local_250 = local_70;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = local_250;
          lVar3 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_stringByAppendingPathExtension__026a4580,local_250);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = local_60;
          local_b8 = lVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_stringByAppendingPathComponent__026cab30,lVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          local_c0 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_c8 = 0;
          puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_c8;
          puVar7 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_storeStrong(&local_c8,uVar1);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          lVar3 = local_c0;
          if (((ulong)puVar7 & 1) == 0) {
            local_21 = 0;
          }
          else {
            if (local_40 != (long *)0x0) {
              _objc_retainAutorelease();
              *local_40 = lVar3;
            }
            lVar3 = local_b8;
            if (local_48 != (long *)0x0) {
              _objc_retainAutorelease();
              *local_48 = lVar3;
            }
            local_21 = 1;
          }
          local_58 = 1;
          _objc_storeStrong(&local_c8);
          _objc_storeStrong(&local_c0,0);
          _objc_storeStrong(&local_b8,0);
          _objc_storeStrong(&local_b0,0);
        }
        else {
          local_21 = 0;
          local_58 = 1;
        }
      }
      else {
        if (local_40 != (long *)0x0) {
          _objc_retainAutorelease();
          *local_40 = lVar3;
        }
        lVar3 = local_a0;
        if (local_48 != (long *)0x0) {
          _objc_retainAutorelease();
          *local_48 = lVar3;
        }
        local_21 = 1;
        local_58 = 1;
      }
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(&local_a0,0);
    }
    else {
      if (local_40 != (long *)0x0) {
        _objc_retainAutorelease();
        *local_40 = lVar3;
      }
      lVar3 = local_90;
      if (local_48 != (long *)0x0) {
        _objc_retainAutorelease();
        *local_48 = lVar3;
      }
      local_21 = 1;
      local_58 = 1;
    }
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
  }
  else {
    pcVar2 = local_30;
    FUN_008f437c(local_30,local_68,local_60,local_40,local_48);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_30;
      FUN_008f4f68(local_30,local_68,local_60,local_40,local_48);
      if (((ulong)pcVar2 & 1) == 0) goto LAB_008e09e8;
      local_21 = 1;
      local_58 = 1;
    }
    else {
      local_21 = 1;
      local_58 = 1;
    }
  }
LAB_008e12f0:
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
LAB_008e134c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

