// FUN_002e1ca4 @ 002e1ca4

void FUN_002e1ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined *local_28;
  undefined **local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  ppuVar1 = &local_30;
  local_30 = (undefined *)0x0;
  _objc_storeStrong(ppuVar1,param_2);
  local_44 = param_4;
  local_40 = param_1;
  local_38 = param_3;
  FUN_002e4604(param_1);
  _objc_retainAutoreleasedReturnValue();
  local_50 = ppuVar1;
  if (ppuVar1 == (undefined **)0x0) {
    puVar2 = local_30;
    (*DAT_028c98d0)(local_40,local_30,local_38,local_44);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_20 = ppuVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar2;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_28);
  return;
}

