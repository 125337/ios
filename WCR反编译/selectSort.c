// selectSort @ 01f5a01c

/* Function Stack Size: 0x10 bytes */

void WCRefineVoiceCloneListViewController::selectSort(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ID local_78;
  long local_70;
  long local_68;
  undefined *local_60;
  undefined *local_58;
  SEL local_50;
  ID local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = &cf_cPc_;
  local_38 = &cf_TyGS_;
  local_30 = &cf_TyM_;
  local_28 = &cf_eM_;
  local_20 = &cf_eGS_;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_58 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_68 = 0;
  local_60 = puVar4;
  while( true ) {
    lVar1 = local_68;
    puVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
    IVar2 = local_48;
    puVar3 = local_60;
    if ((long)puVar4 <= lVar1) break;
    ppuVar5 = &local_98;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_01f5a248;
    local_80 = &DAT_0257cc98;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = IVar2;
    local_70 = local_68;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(ppuVar5);
    _objc_storeStrong(&local_78,0);
    local_68 = local_68 + 1;
  }
  FUN_01f5a308(local_48,&cf_rc_,local_58,local_60,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

