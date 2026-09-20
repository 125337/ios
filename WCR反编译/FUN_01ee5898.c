// FUN_01ee5898 @ 01ee5898

void FUN_01ee5898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_150;
  cfstringStruct *local_110;
  ulong local_100;
  ulong local_e8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  cfstringStruct *local_50;
  ulong local_48;
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
  FUN_01eea960();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_40;
  local_40 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  uVar3 = local_48;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_e8 = *(ulong *)PTR____NSDictionary0___02578288;
  }
  else {
    local_e8 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_e8;
  FUN_01f082cc();
  _objc_retainAutoreleasedReturnValue();
  local_100 = local_e8;
  if (local_e8 == 0) {
    local_100 = *(ulong *)PTR____NSDictionary0___02578288;
  }
  local_60 = local_e8;
  FUN_01f0fb6c();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_50;
  local_68 = local_100;
  FUN_01f06ca8();
  _objc_retainAutoreleasedReturnValue();
  local_110 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_110 = &cf___;
  }
  local_70 = pcVar4;
  FUN_01f0fb6c();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  local_78 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_<metaname__wcr_work_id_content_____>);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_80 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &
             cf_<script>_function___vars____if_window___wcrApplyStorageSnapshot__window___wcrApplyStorageSnapshot_s______else_try_varw____varp____try_p_localStorage_getItem____WCR_WORK_ID__________catch_e___if_p___w__try_localStorage_clear____catch_e____Object_keys_s______forEach_function_k__localStorage_setItem_k_s_k__________if_w_localStorage_setItem____WCR_WORK_ID____w___catch_e____window___WCRefineLocalStorage_s______<_script>
            );
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_80;
  local_88 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_stringByAppendingString__0269d398,puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (local_40 == (cfstringStruct *)0x0) {
    local_150 = &cf___;
  }
  else {
    local_150 = local_40;
  }
  local_90 = pcVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = local_150;
  puVar2 = PTR_s_rangeOfString_options__0269d118;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_rangeOfString_options__0269d118,&cf_<head>,1);
  local_a8 = local_150;
  local_a0 = puVar2;
  if (local_150 == (cfstringStruct *)0x7fffffffffffffff) {
    pcVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_stringByAppendingString__0269d398,local_98)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar4;
  }
  else {
    pcVar4 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_mutableCopy_0269d8a0);
    local_30 = local_a8;
    local_28 = local_a0;
    local_b0 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_insertString_atIndex__026ad120,local_90,
               local_a0 + (long)&local_a8->field0_0x0);
    pcVar4 = local_b0;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = pcVar4;
    _objc_storeStrong(&local_b0,0);
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
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

