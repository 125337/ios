// FUN_0044f2ec @ 0044f2ec

void FUN_0044f2ec(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint local_124;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined4 local_74;
  long local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  local_58 = 0;
  lVar1 = local_48;
  local_50 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_valueForKey__0269d128,&cf_tag);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_58 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if ((local_58 == 0x24f761) && (-1 < local_50)) {
    puVar3 = local_38;
    _objc_getAssociatedObject(local_38,"wcr_le_move_rel");
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_38;
    local_80 = puVar3;
    _objc_getAssociatedObject(local_38,"wcr_le_move_packs");
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_80;
    local_88 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    puVar3 = local_88;
    if (puVar5 == (undefined *)0x0) {
      local_74 = 1;
    }
    else {
      local_90 = (undefined *)0x0;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      lVar1 = local_50;
      if ((((ulong)puVar3 & 1) == 0) ||
         (puVar3 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0),
         (long)puVar3 <= lVar1)) {
        puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_createGroupWithAutoName_026a1100);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_90;
        local_90 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      else {
        puVar4 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_objectAtIndexedSubscript__0269cc78,local_50);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_90;
        local_90 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      puVar4 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
      local_124 = 0;
      if (puVar4 != (undefined *)0x0) {
        local_30 = local_80;
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_30,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_moveRelativePaths_toPack__026a3b18,puVar4,local_90);
        local_124 = (uint)puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      if ((local_124 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_1Y_);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__feR_);
      }
      FUN_00460088(local_38);
      _objc_storeStrong(&local_90,0);
      local_74 = 0;
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
  }
  else {
    local_74 = 1;
  }
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

