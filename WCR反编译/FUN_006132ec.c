// FUN_006132ec @ 006132ec

void FUN_006132ec(undefined8 param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined *local_70;
  long local_68;
  long local_60;
  uint local_58;
  long local_48;
  byte local_39;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  lVar1 = local_30;
  local_39 = param_3;
  FUN_00614790();
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  lVar3 = local_48;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar3;
    local_58 = 1;
    goto LAB_00613adc;
  }
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  lVar3 = local_38;
  if (lVar1 == 0) {
    local_28 = 0;
    local_58 = 1;
    goto LAB_00613adc;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_HBWechatHelper_UserHeadImage____gif);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  local_60 = lVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar3 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_HBWechatHelper_UserHeadImage____png);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  local_68 = lVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fileExistsAtPath__026ca630,local_60);
  lVar3 = local_60;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_fileExistsAtPath__026ca630,local_68);
    lVar3 = local_68;
    if (((ulong)puVar2 & 1) == 0) {
      if ((local_39 & 1) == 0) {
        local_28 = 0;
        local_58 = 1;
      }
      else {
        lVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_stringByAppendingPathComponent__026cab30,&cf_W);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_70;
        local_78 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_fileExistsAtPath__026ca630,lVar3);
        if (((ulong)puVar2 & 1) == 0) {
          local_80 = 0;
          local_88 = 0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_78,1,0,&local_88
                    );
          _objc_storeStrong(&local_80,local_88);
          if (local_80 != 0) {
            local_28 = 0;
          }
          local_58 = (uint)(local_80 != 0);
          _objc_storeStrong(&local_80,0);
          if (local_58 == 0) goto LAB_006137cc;
        }
        else {
LAB_006137cc:
          lVar3 = local_78;
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____gif
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar3,PTR_s_stringByAppendingPathComponent__026cab30);
          _objc_retainAutoreleasedReturnValue();
          local_90 = lVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          lVar3 = local_78;
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____png
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar3,PTR_s_stringByAppendingPathComponent__026cab30);
          _objc_retainAutoreleasedReturnValue();
          local_98 = lVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_fileExistsAtPath__026ca630,local_90);
          lVar3 = local_90;
          if (((ulong)puVar2 & 1) == 0) {
            puVar2 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_70,PTR_s_fileExistsAtPath__026ca630,local_98);
            lVar3 = local_98;
            if (((ulong)puVar2 & 1) == 0) {
              local_28 = 0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = lVar3;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = lVar3;
          }
          local_58 = 1;
          _objc_storeStrong(&local_98);
          _objc_storeStrong(&local_90,0);
        }
        _objc_storeStrong(&local_78,0);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = lVar3;
      local_58 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar3;
    local_58 = 1;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
LAB_00613adc:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

