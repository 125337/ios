// FUN_006c2a90 @ 006c2a90

void FUN_006c2a90(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  ulong uVar7;
  undefined8 in_x7;
  undefined8 uVar8;
  ulong *local_1a8;
  ulong local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_88;
  ulong uStack_80;
  undefined4 local_78;
  uint local_64;
  ulong local_60;
  ulong local_58;
  undefined8 local_50;
  long *local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_60 = 0;
  _objc_storeStrong(&local_60,param_1);
  uVar7 = local_60;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_64 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((uVar7 & 1) == 0) ||
     (uVar7 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
     uVar7 == 0)) {
    uVar7 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar7;
    local_78 = 1;
  }
  else {
    local_48 = &DAT_028cc228;
    local_50 = 0;
    _objc_storeStrong(&local_50,&PTR___NSConcreteGlobalBlock_0257ed88);
    if (*local_48 + 1 != 0) {
      _dispatch_once(*local_48 + 1,local_48,local_50);
    }
    _objc_storeStrong(&local_50,0);
    uVar7 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    local_38 = 0;
    local_30 = 0;
    local_88 = 0;
    local_a0 = 0;
    lVar4 = DAT_028cc218;
    uStack_98 = uVar7;
    uStack_80 = uVar7;
    local_40 = uVar7;
    local_28 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cc218,PTR_s_firstMatchInString_options_range_0269ef48,local_60,0,0,uVar7);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    uVar7 = local_60;
    if (lVar4 == 0) {
      uVar8 = NEON_ucvtf((ulong)local_64);
      puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar8,PTR__OBJC_CLASS___NSDate_026cdf88,
                 PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSCalendar_026ce070;
      local_a8 = puVar3;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_initWithCalendarIdentifier__026a6948,
                 *(undefined8 *)PTR__NSCalendarIdentifierGregorian_02578248);
      local_b0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_component_fromDate__026a5328,0x80,local_a8)
      ;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_b8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___02ld);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_60;
      uVar1 = uStack_80;
      uVar8 = local_88;
      uVar7 = DAT_028cc220;
      pcVar6 = &cf__1;
      local_c0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(&cf__1,PTR_s_stringByAppendingString__0269d398,puVar3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,PTR_s_stringByReplacingMatchesInString_0269ef30,uVar2,0,uVar8,uVar1,pcVar6,
                 in_x7,puVar5);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = uVar7;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      uVar7 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
      if (uVar7 == 0) {
        local_1a8 = &local_60;
      }
      else {
        local_1a8 = &local_c8;
      }
      uVar7 = *local_1a8;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = 1;
      local_58 = uVar7;
      _objc_storeStrong(&local_c8);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_a8,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = uVar7;
      local_78 = 1;
    }
  }
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue(local_58);
  return;
}

