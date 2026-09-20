// FUN_0089c3a4 @ 0089c3a4

void FUN_0089c3a4(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *local_170;
  undefined *local_168;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "setExtSpamInfo:";
  local_d8 = param_1;
  local_d0 = param_1;
  _sel_registerName();
  local_48 = &cf_VerifyUserRequest;
  local_40 = &cf_ManualAuthAesReqData;
  local_38 = &cf_AutoAuthAesReqData;
  local_30 = &cf_AddOpenIMContactPreCheckReq;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_e0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar2;
  _memset(auStack_130,0,0x40);
  puVar2 = local_e8;
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_c8,0x10);
  if (local_168 != (undefined *)0x0) {
    lVar3 = *local_120;
    local_170 = (undefined *)0x0;
    do {
      do {
        if (*local_120 - lVar3 != 0) {
          _objc_enumerationMutation(*local_120 - lVar3,puVar2);
        }
        uVar4 = *(undefined8 *)(local_128 + (long)local_170 * 8);
        local_f0 = uVar4;
        _NSClassFromString();
        FUN_0089c628(uVar4,local_e0);
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_c8,0x10)
      ;
      local_170 = (undefined *)0x0;
    } while (local_168 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

