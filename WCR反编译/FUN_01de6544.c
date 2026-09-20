// FUN_01de6544 @ 01de6544

void FUN_01de6544(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *local_108;
  ulong local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_100 = 0;
  _objc_storeStrong(&local_100,param_1);
  (*(code *)PTR__objc_retain_02578638)();
  local_108 = &cf___;
  uVar1 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_100,PTR_s_isEqualToString__0269ccc8,&cf_inputPlaceholder);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100,PTR_s_isEqualToString__0269ccc8,&cf_voicePlaceholder);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_isEqualToString__0269ccc8,&cf_searchPlaceholder);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_100,PTR_s_isEqualToString__0269ccc8,&cf_homeFold);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_100,PTR_s_isEqualToString__0269ccc8,&cf_homeCount);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_isEqualToString__0269ccc8,&cf_homeLogin);
            if ((uVar1 & 1) == 0) {
              uVar1 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_isEqualToString__0269ccc8,&cf_homeGroupFold);
              if ((uVar1 & 1) != 0) {
                _objc_storeStrong(&local_108,&cf_bS);
              }
            }
            else {
              _objc_storeStrong(&local_108,&cf__);
            }
          }
          else {
            _objc_storeStrong(&local_108,&cf__);
          }
        }
        else {
          _objc_storeStrong(&local_108,&cf_bSn_vJ_Y);
        }
      }
      else {
        _objc_storeStrong(&local_108,&cf_s__Uj);
      }
    }
    else {
      _objc_storeStrong(&local_108,&cf_cOO);
    }
  }
  else {
    _objc_storeStrong(&local_108,&cf_R_S_Ne_Netf0);
  }
  local_f8 = &cf_enabled;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = &cf_text;
  local_88 = local_108;
  local_e8 = &cf_lightColor;
  local_80 = &cf__8E8E93;
  local_e0 = &cf_darkColor;
  local_78 = &cf__8E8E93;
  local_d8 = &cf_gradient;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_90 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = &cf_lightEndColor;
  local_68 = &cf__07C160;
  local_c8 = &cf_darkEndColor;
  local_60 = &cf__34C759;
  local_c0 = &cf_gradientDirection;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_70 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = &cf_gradientPresetId;
  local_50 = &cf___;
  local_b0 = &cf_lightStops;
  local_48 = *(undefined8 *)PTR____NSArray0___02578280;
  local_a8 = &cf_darkStops;
  local_40 = *(undefined8 *)PTR____NSArray0___02578280;
  local_a0 = &cf_bold;
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_58 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
  _objc_retainAutoreleasedReturnValue();
  local_98 = &cf_alignment;
  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_90,&local_f8,0xd);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

