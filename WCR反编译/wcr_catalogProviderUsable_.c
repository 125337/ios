// wcr_catalogProviderUsable: @ 0158d938

/* Function Stack Size: 0x18 bytes */

bool WCRefineVoiceCloneHelper::wcr_catalogProviderUsable_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  byte local_74;
  byte local_70;
  byte local_6c;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_11 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (puVar4 == (undefined1 *)0x0) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_fish);
      local_11 = (byte)uVar2 & 1;
    }
    else if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_fish);
      local_6c = 1;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_openai);
        local_6c = 1;
        if ((uVar2 & 1) == 0) {
          uVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_isEqualToString__0269ccc8,&cf_siliconflow);
          local_6c = (byte)uVar2;
        }
      }
      local_11 = local_6c & 1;
    }
    else if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_volcengine)
      ;
      local_11 = (byte)uVar2 & 1;
    }
    else if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_minimax);
      local_11 = (byte)uVar2 & 1;
    }
    else if ((dword *)puVar4 == &MACH_HEADER.cputype) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_isEqualToString__0269ccc8,&cf_siliconflow);
      local_70 = 1;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_openai);
        local_70 = (byte)uVar2;
      }
      local_11 = local_70 & 1;
    }
    else if (puVar4 == (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_finevoice);
      local_74 = 1;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_fv);
        local_74 = (byte)uVar2;
      }
      local_11 = local_74 & 1;
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

