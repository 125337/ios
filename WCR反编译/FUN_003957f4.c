// FUN_003957f4 @ 003957f4

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003957f4(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  ulong local_198;
  ulong local_190;
  ulong local_150;
  ulong local_138;
  ulong local_e0;
  double local_d8;
  byte local_c9;
  undefined *local_c8;
  ulong local_c0;
  byte local_b1;
  undefined *local_b0;
  ulong local_a8;
  byte local_9a;
  byte local_99;
  undefined *local_98;
  ulong local_90;
  ulong local_88;
  double local_80;
  undefined4 local_74;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  long *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  _objc_storeStrong(&local_68,param_2);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_3);
  uVar2 = local_70;
  FUN_00395724();
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    local_74 = 1;
    goto LAB_0039604c;
  }
  _CACurrentMediaTime();
  DAT_028ca2e0 = DAT_028ca2e0 + 1;
  uVar2 = local_68;
  local_80 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_firstObject_0269d1f8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = &cf_m_uUnReadCount;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_88 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1);
  _objc_retainAutoreleasedReturnValue();
  FUN_003d2508();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_90 = uVar2;
  if (uVar2 == 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_homeGroupingAtMeGroupIncludeAtMe_026a2e50);
    local_99 = (byte)puVar3;
    puVar3 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_homeGroupingAtMeGroupIncludeAtAl_026a2e58);
    local_138 = local_88;
    local_9a = (byte)puVar3;
    if (((local_99 & 1) == 0) && (((ulong)puVar3 & 1) == 0)) {
      _CACurrentMediaTime();
      DAT_028ca2f8 = DAT_028ca2f8 + (param_1 - local_80);
      local_74 = 1;
    }
    else {
      local_b1 = 0;
      if ((local_99 & 1) == 0) {
        local_138 = 0;
      }
      else {
        local_40 = &cf_m_uAtMeCount;
        local_38 = &cf_mainAtMeCount;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_40,2);
        _objc_retainAutoreleasedReturnValue();
        local_b1 = 1;
        local_b0 = puVar3;
        FUN_003d2508();
      }
      if ((local_b1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      local_150 = local_88;
      local_a8 = local_138;
      local_c9 = 0;
      if ((local_9a & 1) == 0) {
        local_150 = 0;
      }
      else {
        local_50 = &cf_m_uAtAllCount;
        local_48 = &cf_mainAtAllCount;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_50,2);
        _objc_retainAutoreleasedReturnValue();
        local_c9 = 1;
        local_c8 = puVar3;
        FUN_003d2508();
      }
      if ((local_c9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_c8);
      }
      local_c0 = local_150;
      if ((local_a8 == 0) && (local_150 == 0)) {
        _CACurrentMediaTime();
        DAT_028ca2f8 = DAT_028ca2f8 + (param_1 - local_80);
        local_74 = 1;
      }
      else {
        local_58 = &DAT_028ca308;
        local_60 = 0;
        _objc_storeStrong(&local_60,&PTR___NSConcreteGlobalBlock_0257cd78);
        if (*local_58 != -1) {
          _dispatch_once(local_58,local_60);
        }
        _objc_storeStrong(&local_60,0);
        _CACurrentMediaTime();
        uVar2 = DAT_028ca300;
        local_d8 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028ca300,PTR_s_objectForKeyedSubscript__0269d098,local_70);
        _objc_retainAutoreleasedReturnValue();
        dVar5 = local_d8;
        local_e0 = uVar2;
        if (uVar2 == 0) {
LAB_00395d24:
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          dVar5 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028ca300,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,local_70);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          uVar2 = DAT_028ca300;
          (*(code *)PTR__objc_msgSend_02578628)(DAT_028ca300,PTR_s_count_0269cfe0);
          if (0x40 < uVar2) {
            (*(code *)PTR__objc_msgSend_02578628)(DAT_028ca300,PTR_s_removeAllObjects_0269d508);
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            dVar5 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_028ca300,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,local_70);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          puVar3 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_homeGroupingAtMeGroupExcludeFold_026a2e48);
          if ((((ulong)puVar3 & 1) == 0) || (uVar2 = local_68, FUN_003b0e18(), (uVar2 & 1) == 0)) {
            if ((local_99 & 1) == 0) {
              local_190 = 0;
            }
            else {
              local_190 = local_68;
              FUN_003b0f1c();
            }
            if ((local_9a & 1) == 0) {
              local_198 = 0;
            }
            else {
              local_198 = local_68;
              FUN_003b106c();
            }
            if (((local_99 & 1) == 0) || (bVar1 = true, local_190 == 0)) {
              bVar1 = (local_9a & 1) != 0 && local_198 != 0;
            }
            if (bVar1) {
              uVar2 = local_68;
              FUN_003b0d1c();
              if ((uVar2 & 1) == 0) {
                FUN_0036fbe8(local_68,local_70);
                DAT_028ca2f0 = DAT_028ca2f0 + 1;
                _CACurrentMediaTime();
                DAT_028ca2f8 = DAT_028ca2f8 + (dVar5 - local_80);
                local_74 = 0;
              }
              else {
                _CACurrentMediaTime();
                DAT_028ca2f8 = DAT_028ca2f8 + (dVar5 - local_80);
                local_74 = 1;
              }
            }
            else {
              _CACurrentMediaTime();
              DAT_028ca2f8 = DAT_028ca2f8 + (dVar5 - local_80);
              local_74 = 1;
            }
          }
          else {
            _CACurrentMediaTime();
            DAT_028ca2f8 = DAT_028ca2f8 + (dVar5 - local_80);
            local_74 = 1;
          }
        }
        else {
          dVar4 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_doubleValue_026ca608);
          dVar5 = dVar5 - dVar4;
          if (2.0 <= dVar5) goto LAB_00395d24;
          DAT_028ca2e8 = DAT_028ca2e8 + 1;
          _CACurrentMediaTime();
          DAT_028ca2f8 = DAT_028ca2f8 + (dVar5 - local_80);
          local_74 = 1;
        }
        _objc_storeStrong(&local_e0,0);
      }
    }
    _objc_storeStrong(&local_98,0);
  }
  else {
    _CACurrentMediaTime(uVar2);
    DAT_028ca2f8 = DAT_028ca2f8 + (param_1 - local_80);
    local_74 = 1;
  }
  _objc_storeStrong(&local_88,0);
LAB_0039604c:
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

