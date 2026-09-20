// FUN_015830fc @ 015830fc

void FUN_015830fc(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  char *local_60;
  undefined *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_18 = (char *)0x0;
    local_2c = 1;
  }
  else {
    local_38 = (char *)0x0;
    pcVar3 = "MMServiceCenter";
    _objc_getClass();
    pcVar4 = "MMThemeManager";
    local_40 = pcVar3;
    _objc_getClass();
    local_48 = pcVar4;
    if (((local_40 != (char *)0x0) && (pcVar4 != (char *)0x0)) &&
       (pcVar3 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
       ((ulong)pcVar3 & 1) != 0)) {
      pcVar3 = local_40;
      FUN_01533df4(local_40,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_58 = PTR_s_getService__0269d170;
      local_50 = pcVar3;
      if ((pcVar3 != (char *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         ((ulong)pcVar3 & 1) != 0)) {
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,local_58,local_48);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_s_imageNamed__0269fd20;
        local_60 = pcVar3;
        if (pcVar3 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_imageNamed__0269fd20);
          if (((ulong)pcVar3 & 1) != 0) {
            pcVar4 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,puVar1,local_28);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_38;
            local_38 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
          }
          if (local_38 == (char *)0x0) {
            pcVar5 = &cf_imageNamed_warnIfNotFound_;
            _NSSelectorFromString();
            pcVar3 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_respondsToSelector__026ca818,pcVar5);
            if (((ulong)pcVar3 & 1) != 0) {
              pcVar4 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)(local_60,pcVar5,local_28,0);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_38;
              local_38 = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
            }
          }
          if (local_38 == (char *)0x0) {
            pcVar5 = &cf_imageNamed_inBundle_;
            _NSSelectorFromString();
            pcVar3 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_respondsToSelector__026ca818,pcVar5);
            if (((ulong)pcVar3 & 1) != 0) {
              pcVar4 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)(local_60,pcVar5,local_28,0);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_38;
              local_38 = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
            }
          }
        }
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_50,0);
    }
    if (local_38 == (char *)0x0) {
      pcVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageNamed__0269fd20,local_28);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_38;
      local_38 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    if (local_38 == (char *)0x0) {
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_stringByAppendingString__0269d398,&cf__png);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_imageNamed__0269fd20);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_38;
      local_38 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    pcVar3 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar3;
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

