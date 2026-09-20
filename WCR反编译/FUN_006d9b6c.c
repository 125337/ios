// FUN_006d9b6c @ 006d9b6c

void FUN_006d9b6c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *local_268;
  ulong local_1f8;
  ulong local_1c8;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  byte local_119;
  undefined *local_118;
  byte local_109;
  undefined *local_108;
  byte local_f9;
  ulong local_f8;
  undefined *local_f0;
  ulong local_e8;
  ulong local_e0;
  byte local_d1;
  ulong local_d0;
  byte local_c1;
  ulong local_c0;
  ulong local_b8;
  byte local_aa;
  byte local_a9;
  ulong local_a8;
  byte local_99;
  ulong local_98;
  ulong local_90;
  undefined1 local_81;
  undefined4 local_80;
  byte local_69;
  ulong local_68;
  ulong local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  ulong local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  _objc_storeStrong(&local_60,param_1);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_69 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = true;
  if ((((ulong)puVar3 & 1) != 0) && (bVar1 = true, local_60 != 0)) {
    bVar1 = local_68 == 0;
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (bVar1) {
    local_80 = 1;
  }
  else {
    uVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_m_nsFromUsr_0269d088);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_m_nsUsrName_0269d638);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqualToString__0269ccc8);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_81 = (undefined1)uVar6;
    if (((uVar6 & 1) == 0) || ((local_69 & 1) != 0)) {
      local_99 = 0;
      local_a9 = 0;
      local_1c8 = local_60;
      if ((local_69 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_m_nsFromUsr_0269d088);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 1;
        local_a8 = local_1c8;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_m_nsToUsr_0269d090);
        _objc_retainAutoreleasedReturnValue();
        local_99 = 1;
        local_98 = local_1c8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = local_1c8;
      if ((local_a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      if ((local_99 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      uVar4 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      if ((uVar4 == 0) || (uVar4 = local_60, FUN_006da84c(local_60,local_90), (uVar4 & 1) == 0)) {
        local_80 = 1;
      }
      else {
        uVar4 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_hasSuffix__0269d018,&cf__chatroom);
        local_aa = (byte)uVar4;
        local_c1 = 0;
        local_d1 = 0;
        if ((local_69 & 1) == 0) {
          local_1f8 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_m_nsFromUsr_0269d088);
          _objc_retainAutoreleasedReturnValue();
          local_d1 = 1;
          local_d0 = local_1f8;
        }
        else {
          local_1f8 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_m_nsUsrName_0269d638);
          _objc_retainAutoreleasedReturnValue();
          local_c1 = 1;
          local_c0 = local_1f8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_b8 = local_1f8;
        if ((local_d1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d0);
        }
        if ((local_c1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_c0);
        }
        if ((((local_aa & 1) != 0) && ((local_69 & 1) == 0)) &&
           (uVar4 = local_60,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsRealChatUsr_0269d190),
           (uVar4 & 1) != 0)) {
          uVar4 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_m_nsRealChatUsr_0269d190);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_e0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((uVar4 & 1) != 0) &&
             (uVar4 = local_e0,
             (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0), uVar4 != 0)) {
            _objc_storeStrong(uVar4,&local_b8,local_e0);
          }
          _objc_storeStrong(&local_e0,0);
        }
        uVar4 = local_b8;
        FUN_006daca8();
        _objc_retainAutoreleasedReturnValue();
        local_268 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_f9 = 0;
        local_109 = 0;
        local_119 = 0;
        local_e8 = uVar4;
        if ((local_aa & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
          _objc_retainAutoreleasedReturnValue();
          local_119 = 1;
          local_118 = local_268;
        }
        else {
          uVar4 = local_90;
          FUN_006daca8();
          _objc_retainAutoreleasedReturnValue();
          local_f9 = 1;
          local_f8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_stringWithFormat__0269cca8,&cf__);
          _objc_retainAutoreleasedReturnValue();
          local_109 = 1;
          local_108 = local_268;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_f0 = local_268;
        if ((local_119 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_118);
        }
        if ((local_109 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_108);
        }
        if ((local_f9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_f8);
        }
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_58 = &cf_session;
        local_40 = local_90;
        local_50 = &cf_localID;
        uVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_m_uiMesLocalID_0269d238);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_numberWithUnsignedInt__0269d800,uVar4 & 0xffffffff);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_48 = &cf_mesSvrID;
        uVar4 = local_60;
        local_38 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_m_n64MesSvrID_0269d3e0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithLongLong__0269d808,uVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_30 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
        _objc_retainAutoreleasedReturnValue();
        local_128 = puVar7;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = local_f0;
        local_158 = PTR___NSConcreteStackBlock_02578660;
        local_150 = 0xc2000000;
        local_14c = 0;
        local_148 = FUN_006db034;
        local_140 = &DAT_02578e60;
        (*(code *)PTR__objc_retain_02578638)();
        puVar3 = local_128;
        local_138 = puVar7;
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = puVar3;
        _dispatch_async(puVar2,&local_158);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        _objc_storeStrong(&local_130);
        _objc_storeStrong(&local_138,0);
        _objc_storeStrong(&local_128,0);
        _objc_storeStrong(&local_f0,0);
        _objc_storeStrong(&local_e8,0);
        _objc_storeStrong(&local_b8,0);
        local_80 = 0;
      }
      _objc_storeStrong(&local_90,0);
    }
    else {
      local_80 = 1;
    }
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

