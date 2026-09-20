// FUN_014fda68 @ 014fda68

void FUN_014fda68(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_100;
  undefined4 local_f4;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined8 local_78;
  undefined8 local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_f0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_f0,param_1);
  pcVar2 = local_f0;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar3 = local_f0, (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0),
     pcVar2 = local_f0, pcVar3 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = &cf___;
    local_f4 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = pcVar2;
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    local_38 = 0;
    local_30 = 0;
    local_40 = pcVar3;
    local_28 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_stringByReplacingOccurrencesOfSt_026a3778,&cf__quot_,&cf__,1,0,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_100;
    local_100 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar2 = local_100;
    pcVar3 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
    local_58 = 0;
    local_50 = 0;
    local_60 = pcVar3;
    local_48 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_stringByReplacingOccurrencesOfSt_026a3778,&cf__apos_,&cf__,1,0,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_100;
    local_100 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar2 = local_100;
    pcVar3 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
    local_78 = 0;
    local_70 = 0;
    local_80 = pcVar3;
    local_68 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_stringByReplacingOccurrencesOfSt_026a3778,&cf__lt_,&cf_<,1,0,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_100;
    local_100 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar2 = local_100;
    pcVar3 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
    local_98 = 0;
    local_90 = 0;
    local_a0 = pcVar3;
    local_88 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_stringByReplacingOccurrencesOfSt_026a3778,&cf__gt_,&cf_>,1,0,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_100;
    local_100 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar2 = local_100;
    pcVar3 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
    local_b8 = 0;
    local_b0 = 0;
    local_c0 = pcVar3;
    local_a8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_stringByReplacingOccurrencesOfSt_026a3778,&cf__nbsp_,&cf_space_s_,1,0,
               pcVar3);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_100;
    local_100 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar2 = local_100;
    pcVar3 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
    local_d8 = 0;
    local_d0 = 0;
    local_e0 = pcVar3;
    local_c8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_stringByReplacingOccurrencesOfSt_026a3778,&cf__amp_,&cf__,1,0,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_100;
    local_100 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar2 = local_100;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = pcVar2;
    local_f4 = 1;
    _objc_storeStrong(&local_100,0);
  }
  _objc_storeStrong(&local_f0,0);
  _objc_autoreleaseReturnValue(local_e8);
  return;
}

