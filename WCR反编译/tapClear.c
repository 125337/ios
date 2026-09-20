// tapClear @ 019b18d0

/* Function Stack Size: 0x10 bytes */

void WCRFilePathListViewController::tapClear(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined *local_40;
  undefined1 auStack_38 [8];
  SEL local_30;
  ID local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_clearBlock_026ba7d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    _objc_initWeak(auStack_38,local_28);
    puVar1 = PTR_WCRFileSheetAction_026cf1c0;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_019b1b0c;
    local_50 = &DAT_0257be28;
    _objc_copyWeak(auStack_48,auStack_38);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_destructiveActionWithTitle_handl_026ba5d8,&cf_ndhQ,&local_68);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_20 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    FUN_0199377c(local_28,&cf_nd,local_40,&cf_Sm);
    _objc_storeStrong(&local_40,0);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

