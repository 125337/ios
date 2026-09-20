// FUN_008401c0 @ 008401c0

/* WARNING: Type propagation algorithm not settling */

void FUN_008401c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_88;
  int local_80;
  long local_70;
  undefined8 local_68;
  ulong local_60 [3];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60[1] = 0;
  local_60[2] = param_1;
  _objc_storeStrong(local_60 + 1);
  local_60[0] = 0;
  _objc_storeStrong(local_60,param_3);
  uVar4 = local_60[0];
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_70 = param_1;
  local_68 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = local_60[0], (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_length_0269cca0),
     uVar4 == 0)) {
    local_80 = 1;
  }
  else {
    uVar4 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_88 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_48 = &cf_mp4;
    local_40 = &cf_mov;
    local_38 = &cf_m4v;
    local_30 = &cf_gif;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (((ulong)puVar3 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_containsObject__0269cbb8,local_60[0]);
      if ((uVar4 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__0269d180,local_60[0]);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__0269d180,local_60[0]);
        local_80 = 0;
      }
      else {
        local_80 = 1;
      }
    }
    else {
      local_80 = 1;
    }
    _objc_storeStrong(&local_88,0);
    if (local_80 == 0) {
      local_80 = 0;
    }
  }
  _objc_storeStrong(local_60);
  _objc_storeStrong(local_60 + 1,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

