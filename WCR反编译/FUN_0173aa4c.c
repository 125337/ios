// FUN_0173aa4c @ 0173aa4c

void FUN_0173aa4c(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_50;
  uint local_44;
  long local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  bVar1 = local_40 != 0;
  if (bVar1) {
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402a000000000000,*(undefined8 *)PTR__UIFontWeightRegular_02578158,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_40;
    puVar5 = PTR__NSFontAttributeName_02578068;
    local_28 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_50 = puVar3;
    local_20 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_setTitleTextAttributes_forState__0269e9f0,puVar4,0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    lVar2 = local_40;
    local_38 = *(undefined8 *)puVar5;
    local_30 = local_50;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_setTitleTextAttributes_forState__0269e9f0,puVar5,4);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setApportionsSegmentWidthsByCont_0269e9e8,0);
    _objc_storeStrong(&local_50,0);
  }
  local_44 = (uint)!bVar1;
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

