// FUN_0017c42c @ 0017c42c

void FUN_0017c42c(undefined8 param_1,long *param_2,long *param_3,undefined1 *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *local_58;
  undefined1 *local_50;
  long *local_48;
  long *local_40;
  long local_38;
  long local_30;
  undefined *local_28;
  
  plVar1 = &local_38;
  local_38 = 0;
  _objc_storeStrong(plVar1,param_1);
  local_50 = param_4;
  local_48 = param_3;
  local_40 = param_2;
  FUN_0017c848();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_38;
  puVar4 = PTR_s_rangeOfString__0269d838;
  local_58 = plVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rangeOfString__0269d838,plVar1);
  lVar3 = local_38;
  if (lVar2 == 0x7fffffffffffffff) {
    if (local_40 != (long *)0x0) {
      _objc_retainAutorelease();
      *local_40 = lVar3;
    }
    if (local_48 != (long *)0x0) {
      _objc_retainAutorelease();
      *local_48 = (long)&cf___;
    }
    if (local_50 != (undefined1 *)0x0) {
      *local_50 = 0;
    }
  }
  else {
    if (local_40 != (long *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_substringToIndex__0269d6c0,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_40 = lVar3;
    }
    if (local_48 != (long *)0x0) {
      lVar3 = local_38;
      local_30 = lVar2;
      local_28 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_substringFromIndex__0269d120,puVar4 + lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_48 = lVar3;
    }
    if (local_50 != (undefined1 *)0x0) {
      *local_50 = 1;
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_38,0);
  return;
}

