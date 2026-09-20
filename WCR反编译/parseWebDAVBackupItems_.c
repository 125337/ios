// parseWebDAVBackupItems: @ 00f0f418

/* Function Stack Size: 0x18 bytes */

ID WCRefineCloudBackupService::parseWebDAVBackupItems_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  ID local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined *local_68;
  undefined8 local_60;
  SEL local_58;
  ID local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_60 = 0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_68 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_6c = 1;
    local_48 = puVar3;
  }
  else {
    local_78 = 0;
    local_88 = 0;
    puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,
               &cf_<(_:[A_Za_z0_9]_:)_href>___<]_)<_(_:[A_Za_z0_9]_:)_href>,1,&local_88);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_78,local_88);
    local_80 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar3 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_6c = 1;
      local_48 = puVar3;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_90 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_68;
      puVar1 = local_80;
      puVar3 = local_68;
      local_98 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      puVar4 = local_68;
      local_38 = 0;
      local_30 = 0;
      local_a8 = 0;
      local_e8 = PTR___NSConcreteGlobalBlock_02578658;
      local_e0 = 0xd0800000;
      local_dc = 0;
      local_d8 = FUN_00f0f7b0;
      local_d0 = &DAT_02582698;
      local_a0 = puVar3;
      local_40 = puVar3;
      local_28 = puVar3;
      (*(code *)PTR__objc_retain_02578638)();
      puVar3 = local_98;
      local_c8 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_90;
      local_c0 = puVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = puVar4;
      local_b0 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_enumerateMatchesInString_options_0269ef28,puVar2,0,local_a8,local_a0,
                 &local_e8);
      puVar3 = local_90;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = puVar3;
      local_6c = 1;
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
    }
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_48;
}

