// FUN_01063e70 @ 01063e70

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01063e70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_1a8;
  cfstringStruct *local_190;
  cfstringStruct *local_180;
  ulong local_168;
  ulong local_150;
  ulong local_138;
  undefined *local_128;
  ulong local_118;
  undefined *local_e0;
  undefined *local_d0;
  undefined *local_c8;
  ulong local_c0;
  bool local_b1;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  bool local_91;
  ulong local_90;
  ulong local_88;
  bool local_79;
  undefined *local_78;
  undefined *local_70;
  ulong local_68;
  long local_60;
  undefined *local_58;
  ulong local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_40 = param_1;
  _objc_storeStrong(&local_48);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_3);
  local_58 = (undefined *)0x0;
  _objc_storeStrong(&local_58,param_4);
  uVar3 = local_50;
  puVar2 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
  local_60 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_118 = 0;
  }
  else {
    local_118 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_118;
  lVar5 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  local_79 = false;
  if (lVar5 == 0) {
    local_128 = (undefined *)0x0;
  }
  else {
    local_128 = PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_78 = local_128;
  }
  local_79 = lVar5 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_128;
  if ((local_79 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  puVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  local_91 = false;
  if (puVar2 == (undefined *)0x0) {
    local_138 = 0;
  }
  else {
    local_138 = *(ulong *)(param_1 + 0x40);
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_JSONObjectFromString__026adcc0,local_70);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_138;
  }
  local_91 = puVar2 != (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_138;
  if ((local_91 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  uVar3 = local_88;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_150 = 0;
  }
  else {
    local_150 = local_88;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  uVar3 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_b1 = false;
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_168 = 0;
  }
  else {
    local_168 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_data)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_b0 = local_168;
  }
  local_b1 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = local_168;
  if ((local_b1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  (*(code *)PTR__objc_release_02578630)(local_150);
  uVar3 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a8,PTR_s_objectForKeyedSubscript__0269d098,
             &cf_xdt_api__v1__media__shortcode__web_info);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineLinkParseResult_026cecb0;
  local_c0 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288);
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setPlatform__026adde8,6);
  local_180 = *(cfstringStruct **)(param_1 + 0x20);
  if (local_180 == (cfstringStruct *)0x0) {
    local_180 = &cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setSourceURL__026addf0,local_180);
  local_190 = *(cfstringStruct **)(param_1 + 0x20);
  if (local_190 == (cfstringStruct *)0x0) {
    local_190 = &cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setResolvedURL__026addf8,local_190);
  if (local_c0 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x40),PTR_s_fillInstagramResult_fromJSON__026ae100,local_c8
               ,local_c0);
  }
  puVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_hasMedia_026ada58);
  if ((((ulong)puVar2 & 1) == 0) && (local_a0 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x40),PTR_s_fillInstagramResult_fromJSON__026ae100,local_c8
               ,local_a0);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar4 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_hasMedia_026ada58);
    puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
    if (((ulong)puVar4 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x38);
      local_1a8 = local_58;
      bVar1 = local_58 == (undefined *)0x0;
      if (bVar1) {
        local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
        local_30 = &cf_I;
        local_d0 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkParser,
                   0xfffffffffffffff6);
        _objc_retainAutoreleasedReturnValue();
        local_1a8 = puVar2;
        local_e0 = puVar2;
      }
      (**(code **)(lVar5 + 0x10))(lVar5,0,local_1a8);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_e0);
        (*(code *)PTR__objc_release_02578630)(local_d0);
      }
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),local_c8,0);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_finishTasksAndInvalidate_026a15a8);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

