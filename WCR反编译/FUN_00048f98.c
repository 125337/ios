// FUN_00048f98 @ 00048f98

byte FUN_00048f98(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_48;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_20;
  if (0.0 < param_1) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_rawAmount);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_0003102c();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar3;
      FUN_00041d24();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((long)local_48 < 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_amount);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        FUN_0003102c();
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar3;
        FUN_00041d24();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      local_11 = -1 < (long)local_48 && local_48 == (long)(param_1 * 100.0);
      goto LAB_00049268;
    }
  }
  local_11 = false;
LAB_00049268:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

