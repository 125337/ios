// FUN_01e9cad0 @ 01e9cad0

void FUN_01e9cad0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *local_108;
  undefined *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_a8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_a8,param_1);
  if (local_a8 == (cfstringStruct *)0x0) {
    local_108 = &cf___;
  }
  else {
    local_108 = local_a8;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithString__026a7e40,local_108);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  local_b0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  local_38 = 0;
  local_30 = 0;
  local_40 = puVar2;
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_replaceOccurrencesOfString_withS_026a1e00,&cf__,&cf__amp_,0,0,puVar2);
  puVar1 = local_b0;
  puVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  local_58 = 0;
  local_50 = 0;
  local_60 = puVar2;
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_replaceOccurrencesOfString_withS_026a1e00,&cf_<,&cf__lt_,0,0,puVar2);
  puVar1 = local_b0;
  puVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  local_78 = 0;
  local_70 = 0;
  local_80 = puVar2;
  local_68 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_replaceOccurrencesOfString_withS_026a1e00,&cf_>,&cf__gt_,0,0,puVar2);
  puVar1 = local_b0;
  puVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  local_98 = 0;
  local_90 = 0;
  local_a0 = puVar2;
  local_88 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_replaceOccurrencesOfString_withS_026a1e00,&cf__,&cf__quot_,0,0,puVar2);
  puVar1 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_a8,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

