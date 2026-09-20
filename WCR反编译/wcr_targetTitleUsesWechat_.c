// wcr_targetTitleUsesWechat: @ 0172a634

/* Function Stack Size: 0x14 bytes */

ID ThemeBoxAirDropThemePickViewController::wcr_targetTitleUsesWechat_
             (ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_70;
  undefined *local_50;
  int local_44;
  undefined *local_40;
  undefined *local_38;
  byte local_29;
  SEL local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_29 = (byte)param_3;
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_targetNickname_026b3bc8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined *)param_1;
  FUN_01725ed0();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_targetWxid_026b3bd0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_01725ed0();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_targetTitlePreferWxid_026b3c28);
  if (((ulong)puVar1 & 1) == 0) {
    if ((local_29 & 1) != 0) {
      puVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_targetWechatAliasValue_026b3c20);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_38;
      local_50 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if ((puVar2 == (undefined *)0x0) ||
         (puVar1 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
         puVar1 == (undefined *)0x0)) {
        puVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
        if (puVar1 == (undefined *)0x0) {
          puVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
          if ((puVar1 == (undefined *)0x0) ||
             (puVar1 = local_40,
             (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
             puVar1 == (undefined *)0x0)) {
            uVar3 = 0;
            local_44 = 0;
          }
          else {
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__)
            ;
            _objc_retainAutoreleasedReturnValue();
            uVar3 = 1;
            local_44 = 1;
            local_18 = puVar1;
          }
        }
        else {
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__OS_);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = 1;
          local_44 = 1;
          local_18 = puVar1;
        }
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = 1;
        local_44 = 1;
        local_18 = puVar1;
      }
      _objc_storeStrong(uVar3,&local_50,0);
      if (local_44 != 0) goto LAB_0172ab38;
    }
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if ((puVar1 == (undefined *)0x0) ||
       (puVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       puVar1 == (undefined *)0x0)) {
      puVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (puVar1 == (undefined *)0x0) {
        local_70 = local_38;
      }
      else {
        local_70 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_70;
      local_44 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_44 = 1;
      local_18 = puVar1;
    }
  }
  else {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (((puVar1 == (undefined *)0x0) ||
        (puVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
        puVar1 == (undefined *)0x0)) ||
       (puVar1 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_40),
       ((ulong)puVar1 & 1) != 0)) {
      puVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      local_18 = local_38;
      if (puVar1 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_44 = 1;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_w);
        _objc_retainAutoreleasedReturnValue();
        local_44 = 1;
        local_18 = puVar1;
      }
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_44 = 1;
      local_18 = puVar1;
    }
  }
LAB_0172ab38:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

