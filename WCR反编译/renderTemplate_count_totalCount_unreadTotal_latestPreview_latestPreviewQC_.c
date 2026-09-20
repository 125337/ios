// renderTemplate:count:totalCount:unreadTotal:latestPreview:latestPreviewQC: @ 01ad1a34

/* Function Stack Size: 0x40 bytes */

ID WCRefineGroup::renderTemplate_count_totalCount_unreadTotal_latestPreview_latestPreviewQC_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,
             unsigned_long_long param_5,unsigned_long_long param_6,ID param_7,ID param_8)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_110;
  cfstringStruct *local_d0;
  undefined **local_c8;
  undefined **local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  unsigned_long_long local_98;
  undefined **local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  unsigned_long_long local_58;
  unsigned_long_long local_50;
  unsigned_long_long local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_60 = 0;
  local_58 = param_6;
  local_50 = param_5;
  local_48 = param_4;
  _objc_storeStrong(&local_60,param_7);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_8);
  pcVar2 = local_40;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    pcVar2 = local_40;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)pcVar2 & 1) == 0) {
      local_110 = &::cf___;
    }
    else {
      local_110 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_110;
    local_6c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_78 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lu);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_80 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__llu);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &local_b8;
    local_b8 = PTR___NSConcreteStackBlock_02578660;
    local_b0 = 0xc0000000;
    local_ac = 0;
    local_a8 = FUN_01ad20d8;
    local_a0 = &DAT_0258b128;
    local_98 = local_58;
    local_88 = puVar1;
    _objc_retainBlock();
    local_90 = ppuVar4;
    (*(code *)ppuVar4[2])(ppuVar4,local_60);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = local_90;
    local_c0 = ppuVar4;
    (*(code *)local_90[2])(local_90,local_68);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = local_40;
    local_c8 = ppuVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar6,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__N,local_78);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_d0;
    local_d0 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__,local_78);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_d0;
    local_d0 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__,local_78);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_d0;
    local_d0 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__T,local_80);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_d0;
    local_d0 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__,local_80);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_d0;
    local_d0 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__S,local_88);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_d0;
    local_d0 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__,local_88);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_d0;
    local_d0 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__,local_88);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_d0;
    local_d0 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__UC,local_c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_d0;
    local_d0 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__,local_c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_d0;
    local_d0 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__QC,local_c8);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_d0;
    local_d0 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_6c = 1;
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

