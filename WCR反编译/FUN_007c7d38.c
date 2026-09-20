// FUN_007c7d38 @ 007c7d38

void FUN_007c7d38(undefined8 param_1,long param_2,byte param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_e0;
  int local_d4;
  ulong local_d0;
  ulong local_c8 [3];
  byte local_a9;
  long local_a8;
  ulong local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a0 = 0;
  _objc_storeStrong(&local_a0,param_1);
  uVar3 = local_a0;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_a9 = param_3;
  local_a8 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar3 & 1) != 0) &&
     (uVar3 = local_a0, (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0),
     uVar3 != 0)) {
    uVar2 = local_a0;
    FUN_007c8640(uVar3);
    _objc_retainAutoreleasedReturnValue();
    local_c8[0] = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    uVar3 = 0;
    if (uVar2 == 0) {
LAB_007c807c:
      uVar2 = local_a0;
      FUN_007c8b6c(uVar3);
      _objc_retainAutoreleasedReturnValue();
      local_50 = &cf__O;
      local_48 = &cf_WeChat;
      local_40 = &cf_Weixin;
      local_38 = &cf_Chats;
      local_30 = &cf_Chat;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_e0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50
                 ,5);
      _objc_retainAutoreleasedReturnValue();
      FUN_007c8de0();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      uVar3 = local_e0;
      if ((uVar2 & 1) == 0) {
        local_68 = &cf_U_;
        local_60 = &cf_format_s_;
        local_58 = &cf_Contacts;
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_68,3);
        _objc_retainAutoreleasedReturnValue();
        FUN_007c8de0();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        uVar2 = local_e0;
        if ((uVar3 & 1) == 0) {
          local_80 = &cf_Ss;
          local_78 = &cf__vs;
          local_70 = &cf_Discover;
          puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_80,3);
          _objc_retainAutoreleasedReturnValue();
          FUN_007c8de0();
          (*(code *)PTR__objc_release_02578630)(puVar1);
          uVar3 = local_e0;
          if ((uVar2 & 1) == 0) {
            local_90 = &cf_b;
            local_88 = &cf_Me;
            puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_90,2);
            _objc_retainAutoreleasedReturnValue();
            FUN_007c8de0();
            (*(code *)PTR__objc_release_02578630)(puVar1);
            if ((uVar3 & 1) == 0) {
              local_d4 = 0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_98 = &cf_b;
              local_d4 = 1;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_98 = &cf_Ss;
            local_d4 = 1;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_98 = &cf_U_;
          local_d4 = 1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = &cf__O;
        local_d4 = 1;
      }
      _objc_storeStrong(&local_e0,0);
    }
    else {
      uVar3 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_isEqualToString__0269ccc8,&cf_mainframe_title);
      if (((uVar3 & 1) == 0) &&
         (uVar3 = local_d0,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_d0,PTR_s_isEqualToString__0269ccc8,&cf_tabbar_mainframetitle),
         (uVar3 & 1) == 0)) {
        uVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_isEqualToString__0269ccc8,&cf_tabbar_contactstitle);
        if ((uVar3 & 1) == 0) {
          uVar3 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_isEqualToString__0269ccc8,&cf_tabbar_findfriendtitle);
          if ((uVar3 & 1) == 0) {
            uVar2 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_isEqualToString__0269ccc8,&cf_tabbar_moretitle);
            uVar3 = uVar2 & 0xffffffff;
            if ((uVar2 & 1) == 0) goto LAB_007c807c;
            (*(code *)PTR__objc_retain_02578638)();
            local_98 = &cf_b;
            local_d4 = 1;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_98 = &cf_Ss;
            local_d4 = 1;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_98 = &cf_U_;
          local_d4 = 1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = &cf__O;
        local_d4 = 1;
      }
    }
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(local_c8,0);
    if (local_d4 != 0) goto LAB_007c85e0;
  }
  if ((local_a9 & 1) != 0) {
    if (local_a8 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = &cf__O;
      local_d4 = 1;
      goto LAB_007c85e0;
    }
    if (local_a8 == 1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = &cf_U_;
      local_d4 = 1;
      goto LAB_007c85e0;
    }
    if (local_a8 == 2) {
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = &cf_Ss;
      local_d4 = 1;
      goto LAB_007c85e0;
    }
    if (local_a8 == 3) {
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = &cf_b;
      local_d4 = 1;
      goto LAB_007c85e0;
    }
  }
  local_98 = (cfstringStruct *)0x0;
  local_d4 = 1;
LAB_007c85e0:
  _objc_storeStrong(&local_a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_98);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

