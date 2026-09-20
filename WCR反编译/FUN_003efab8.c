// FUN_003efab8 @ 003efab8

void FUN_003efab8(double param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_98;
  uint local_4c;
  uint local_44;
  undefined *local_30;
  double local_28;
  double local_20;
  undefined *local_18;
  
  local_20 = param_1;
  FUN_00224fa4(param_1);
  if ((param_2 & 1) == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    local_28 = (double)(long)local_20;
    if ((DAT_02324140 <= ABS(local_20 - local_28)) || (DAT_02324138 < ABS(local_28))) {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___8f);
      _objc_retainAutoreleasedReturnValue();
      local_30 = puVar1;
      do {
        puVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf__);
        local_44 = 0;
        if (((ulong)puVar1 & 1) != 0) {
          puVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf_0);
          local_4c = 1;
          if (((ulong)puVar1 & 1) == 0) {
            puVar1 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__);
            local_4c = (uint)puVar1;
          }
          local_44 = local_4c;
        }
        puVar1 = local_30;
        if ((local_44 & 1) == 0) goto LAB_003efdac;
        puVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_substringToIndex__0269d6c0,puVar2 + -1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_30;
        local_30 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__);
        puVar1 = local_30;
      } while (((ulong)puVar2 & 1) == 0);
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_substringToIndex__0269d6c0,puVar2 + -1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_30;
      local_30 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
LAB_003efdac:
      puVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (puVar1 == (undefined *)0x0) {
        local_98 = (undefined *)0x0;
      }
      else {
        local_98 = local_30;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_98;
      _objc_storeStrong(&local_30,0);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar1;
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

