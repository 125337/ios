// resolvedOnlineTextByReplacingPlaceholders:forContact: @ 01538814

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Function Stack Size: 0x20 bytes */

ID __thiscall
WCRefineTopBarProfileCardPresenter::resolvedOnlineTextByReplacingPlaceholders_forContact_
          (WCRefineTopBarProfileCardPresenter *this,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  double in_d0;
  ulong local_f8;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  int local_ac;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  double local_70;
  ulong local_68;
  byte local_5a;
  byte local_59;
  byte local_58;
  byte local_57;
  byte local_56;
  byte local_55;
  undefined4 local_54;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  ulong local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  uVar1 = local_40;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  local_28 = local_50;
  if (uVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_54 = 1;
  }
  else {
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&::cf__);
    local_55 = (byte)uVar1;
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&::cf__);
    local_56 = (byte)uVar1;
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&::cf__);
    local_57 = (byte)uVar1;
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&::cf__);
    local_58 = (byte)uVar1;
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&::cf__);
    local_59 = (byte)uVar1;
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&::cf__);
    local_28 = local_50;
    local_5a = (byte)uVar1;
    if (((((local_55 & 1) == 0) && ((local_56 & 1) == 0)) && ((local_57 & 1) == 0)) &&
       ((((local_58 & 1) == 0 && ((local_59 & 1) == 0)) && ((uVar1 & 1) == 0)))) {
      (*(code *)PTR__objc_retain_02578638)();
      local_54 = 1;
    }
    else {
      uVar1 = local_48;
      FUN_01528d34();
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar1;
      FUN_01539224();
      uVar1 = DAT_028e3978;
      local_70 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3978,PTR_s_length_0269cca0);
      if (((uVar1 == 0) ||
          (uVar1 = DAT_028e3970,
          (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3970,PTR_s_length_0269cca0), uVar1 == 0)) ||
         ((uVar1 = DAT_028e3970,
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028e3970,PTR_s_isEqualToString__0269ccc8,local_50), (uVar1 & 1) == 0 ||
          ((((uVar1 = local_68,
             (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0), uVar1 != 0 ||
             (uVar1 = DAT_028e3968,
             (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3968,PTR_s_length_0269cca0), uVar1 != 0))
            && (uVar1 = local_68,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_68,PTR_s_isEqualToString__0269ccc8,DAT_028e3968), (uVar1 & 1) == 0))
           || (uVar1 = DAT_028e3978, 2.0 <= local_70 - DAT_028e3980)))))) {
        local_78 = 0;
        local_80 = 0;
        local_88 = 0;
        local_90 = 0;
        local_98 = 0;
        local_a0 = 0;
        if (local_48 != 0) {
          uVar1 = local_48;
          FUN_01539238();
          _objc_retainAutoreleasedReturnValue();
          local_a8 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isGroup_026af768);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_a8;
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_isSelf_0269ff30);
            if (((uVar1 & 1) == 0) &&
               (uVar1 = local_a8,
               (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_isFriend_026b0450),
               (uVar1 & 1) != 0)) {
              local_ac = 0;
              uVar1 = local_a8;
              (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_friendDays_026b0458);
              local_f8 = uVar1;
              if ((long)uVar1 <= (long)local_ac) {
                local_f8 = (long)local_ac;
              }
              local_c0 = local_f8;
              local_78 = local_f8;
              local_b8 = uVar1;
            }
          }
          else {
            uVar1 = local_a8;
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_groupMaleCount_026b0428);
            uVar2 = local_a8;
            local_80 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_groupFemaleCount_026b0430);
            uVar1 = local_a8;
            local_88 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_groupUnknownCount_026b0438);
            uVar2 = local_a8;
            local_90 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_groupCount_026b0440);
            uVar1 = local_a8;
            local_98 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_myFriendCount_026b0448);
            local_a0 = uVar1;
          }
          _objc_storeStrong(&local_a8,0);
        }
        uVar1 = local_50;
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = uVar1;
        if ((local_55 & 1) != 0) {
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_c8;
          local_c8 = uVar1;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        uVar1 = local_c8;
        if ((local_56 & 1) != 0) {
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_c8;
          local_c8 = uVar1;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        uVar1 = local_c8;
        if ((local_57 & 1) != 0) {
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_c8;
          local_c8 = uVar1;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        uVar1 = local_c8;
        if ((local_58 & 1) != 0) {
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_c8;
          local_c8 = uVar1;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        uVar1 = local_c8;
        if ((local_59 & 1) != 0) {
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_c8;
          local_c8 = uVar1;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        uVar1 = local_c8;
        if ((local_5a & 1) != 0) {
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_c8;
          local_c8 = uVar1;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        uVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_copy_0269d150);
        uVar1 = DAT_028e3968;
        DAT_028e3968 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        uVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
        uVar1 = DAT_028e3970;
        DAT_028e3970 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        uVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
        uVar1 = DAT_028e3978;
        DAT_028e3978 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        uVar1 = local_c8;
        DAT_028e3980 = local_70;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar1;
        local_54 = 1;
        _objc_storeStrong(&local_c8,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar1;
        local_54 = 1;
      }
      _objc_storeStrong(&local_68,0);
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

