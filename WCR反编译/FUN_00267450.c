// FUN_00267450 @ 00267450

void FUN_00267450(void)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *local_58;
  char *local_50;
  undefined4 local_48;
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar2 = "MMContext";
  _objc_getClass();
  pcVar3 = "MMThemeManager";
  local_20 = pcVar2;
  _objc_getClass();
  pcVar2 = "WCColor";
  local_28 = pcVar3;
  _objc_getClass();
  local_30 = pcVar2;
  if (((local_20 == (char *)0x0) || (local_28 == (char *)0x0)) || (pcVar2 == (char *)0x0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
    if (((ulong)pcVar2 & 1) == 0) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
      if (((ulong)pcVar2 & 1) == 0) {
        local_18 = (char *)0x0;
        local_48 = 1;
      }
      else {
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getService__0269d170,local_28);
        _objc_retainAutoreleasedReturnValue();
        local_58 = (char *)0x0;
        pcVar3 = local_30;
        local_50 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_FG_0_026a1348);
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_FG_0_026a1348);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_58;
          local_58 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        puVar1 = PTR_s_svgImageNamed_size_color__026a1350;
        pcVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,
                   PTR_s_svgImageNamed_size_color__026a1350);
        local_18 = local_50;
        if (((ulong)pcVar2 & 1) == 0) {
          local_18 = (char *)0x0;
        }
        else {
          uVar5 = 0x4040000000000000;
          uVar4 = 0x4040000000000000;
          FUN_0026776c();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,uVar5,local_18,puVar1,&cf_download_regular,local_58);
          _objc_retainAutoreleasedReturnValue();
        }
        local_48 = 1;
        _objc_storeStrong(&local_58);
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

