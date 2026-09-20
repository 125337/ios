// relativePathFromAbsolute:underDirectory: @ 01108f90

/* Function Stack Size: 0x20 bytes */

ID WCRefinePluginIconCatalog::relativePathFromAbsolute_underDirectory_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_118;
  cfstringStruct *local_100;
  cfstringStruct *local_e0;
  cfstringStruct *local_a8;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined4 local_5c;
  long local_58;
  cfstringStruct *local_50;
  long local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  pcVar1 = local_40;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_48;
  local_50 = pcVar1;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_50;
  local_58 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &::cf___;
    local_5c = 1;
  }
  else {
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf__);
    local_28 = local_50;
    if (((ulong)pcVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_5c = 1;
    }
    else {
      lVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if ((lVar2 == 0) ||
         (pcVar3 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,local_58),
         pcVar1 = local_50, ((ulong)pcVar3 & 1) == 0)) {
        pcVar1 = local_50;
        puVar4 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_rangeOfString__0269d838,&cf__Preferences_WCRefine_);
        local_88 = pcVar1;
        local_80 = puVar4;
        if (pcVar1 == (cfstringStruct *)0x7fffffffffffffff) {
          pcVar1 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          local_118 = pcVar1;
          if (pcVar1 == (cfstringStruct *)0x0) {
            local_118 = local_50;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = local_118;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          local_5c = 1;
        }
        else {
          pcVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_substringFromIndex__0269d120,puVar4 + (long)pcVar1);
          _objc_retainAutoreleasedReturnValue();
          local_90 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_rangeOfString__0269d838,&cf__);
          if ((pcVar3 == (cfstringStruct *)0x7fffffffffffffff) ||
             (pcVar1 = local_90,
             (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0),
             pcVar1 <= (cfstringStruct *)((long)&pcVar3->field0_0x0 + 1U))) {
            pcVar1 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_lastPathComponent_026ca780);
            _objc_retainAutoreleasedReturnValue();
            local_100 = pcVar1;
            if (pcVar1 == (cfstringStruct *)0x0) {
              local_a8 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lastPathComponent_026ca780);
              _objc_retainAutoreleasedReturnValue();
              local_100 = local_a8;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = local_100;
            if (pcVar1 == (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_release_02578630)(local_a8);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar1);
          }
          else {
            pcVar1 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_substringFromIndex__0269d120,
                       (undefined1 *)((long)&pcVar3->field0_0x0 + 1));
            _objc_retainAutoreleasedReturnValue();
            local_28 = pcVar1;
          }
          local_5c = 1;
          _objc_storeStrong(&local_90,0);
        }
      }
      else {
        lVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_substringFromIndex__0269d120,lVar2);
        _objc_retainAutoreleasedReturnValue();
        local_68 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_hasPrefix__0269d320,&cf__);
        if (((ulong)pcVar1 & 1) != 0) {
          pcVar3 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_substringFromIndex__0269d120,1);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_68;
          local_68 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        pcVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        local_71 = 0;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_e0 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          local_70 = local_e0;
        }
        else {
          local_e0 = local_68;
        }
        local_71 = pcVar1 == (cfstringStruct *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_e0;
        if ((local_71 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
        local_5c = 1;
        _objc_storeStrong(&local_68,0);
      }
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

