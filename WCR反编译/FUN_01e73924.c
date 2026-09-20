// FUN_01e73924 @ 01e73924

void FUN_01e73924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_128;
  cfstringStruct *local_f8;
  cfstringStruct *local_e0;
  long local_d0;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  long local_60;
  long local_58;
  cfstringStruct *local_50;
  long local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_3);
  pcVar1 = local_40;
  FUN_01e9cda8();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_40;
  local_40 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if (local_48 == 0) {
    local_d0 = *(long *)PTR____NSDictionary0___02578288;
  }
  else {
    local_d0 = local_48;
  }
  FUN_01e95a54();
  _objc_retainAutoreleasedReturnValue();
  local_58 = local_d0;
  FUN_01e9d3d8();
  _objc_retainAutoreleasedReturnValue();
  if (local_50 == (cfstringStruct *)0x0) {
    local_e0 = &cf___;
  }
  else {
    local_e0 = local_50;
  }
  local_60 = local_d0;
  FUN_01e9d3d8();
  _objc_retainAutoreleasedReturnValue();
  local_70 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  if (local_50 == (cfstringStruct *)0x0) {
    local_f8 = &cf___;
  }
  else {
    local_f8 = local_50;
  }
  local_68 = local_e0;
  FUN_01e9cad0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_stringWithFormat__0269cca8,&cf_<metaname__wcr_work_id_content_____>);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(local_f8);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &
             cf_<script>_function___vars____if_window___wcrApplyStorageSnapshot__window___wcrApplyStorageSnapshot_s______else_try_varw____varp____try_p_localStorage_getItem____WCR_WORK_ID__________catch_e___if_p___w__try_localStorage_clear____catch_e____Object_keys_s______forEach_function_k__localStorage_setItem_k_s_k__________if_w_localStorage_setItem____WCR_WORK_ID____w___catch_e____window___WCRefineLocalStorage_s______<_script>
            );
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_70;
  local_78 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_stringByAppendingString__0269d398,puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (local_40 == (cfstringStruct *)0x0) {
    local_128 = &cf___;
  }
  else {
    local_128 = local_40;
  }
  local_80 = pcVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_128;
  puVar2 = PTR_s_rangeOfString_options__0269d118;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_128,PTR_s_rangeOfString_options__0269d118,&cf_<head>,1);
  local_98 = local_128;
  local_90 = puVar2;
  if (local_128 == (cfstringStruct *)0x7fffffffffffffff) {
    pcVar3 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_stringByAppendingString__0269d398,local_88)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar3;
  }
  else {
    pcVar3 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_mutableCopy_0269d8a0);
    local_30 = local_98;
    local_28 = local_90;
    local_a0 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_insertString_atIndex__026ad120,local_80,
               local_90 + (long)&local_98->field0_0x0);
    pcVar3 = local_a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = pcVar3;
    _objc_storeStrong(&local_a0,0);
  }
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_38);
  return;
}

