// FUN_00eab9b0 @ 00eab9b0

void FUN_00eab9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  uint local_b4;
  undefined *local_78;
  ulong local_70;
  long local_68;
  ulong local_60;
  ulong local_58;
  long local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_50 = param_1;
  _objc_storeStrong(&local_58);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_3);
  uVar3 = local_58;
  local_30 = &cf_maskTruename;
  local_28 = &cf_maskTrueName;
  local_20 = &cf_receiverMaskTrueName;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_68 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,3);
  _objc_retainAutoreleasedReturnValue();
  FUN_00eabd24();
  _objc_retainAutoreleasedReturnValue();
  local_70 = uVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  uVar3 = local_60;
  if (uVar4 == 0) {
    local_48 = &cf_maskTruename;
    local_40 = &cf_maskTrueName;
    local_38 = &cf_receiverMaskTrueName;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,3
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_00eabd24();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_70;
    local_70 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = PTR_WCRefineAuthNameHelper_026ce2e8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAuthNameHelper_026ce2e8,PTR_s_lastCharFromMaskedPayLabel__026ab170,local_70
            );
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_60;
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_78 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
  local_b4 = 0;
  if ((uVar3 & 1) != 0) {
    uVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,&cf_timeout);
    local_b4 = (uint)uVar3;
  }
  bVar1 = true;
  if (((local_b4 & 1) == 0) && (bVar1 = false, local_60 != 0)) {
    puVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    bVar1 = false;
    if (puVar2 == (undefined *)0x0) {
      uVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      bVar1 = uVar3 == 0;
    }
  }
  FUN_00eac128(*(undefined8 *)(param_1 + 0x20),local_78,bVar1 ^ 1);
  _objc_loadWeakRetained(param_1 + 0x28);
  (*(code *)PTR__objc_release_02578630)();
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

