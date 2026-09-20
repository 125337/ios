// FUN_004f2c04 @ 004f2c04

byte FUN_004f2c04(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *local_50;
  undefined4 local_48;
  long local_38;
  long local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    local_18 = &DAT_028caee0;
    local_20 = 0;
    local_50 = puVar3;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257d6b8);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    uVar1 = DAT_028cae88;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    uVar4 = DAT_028cae88;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cae88,PTR_s_containsObject__0269cbb8,local_50);
    if ((uVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cae88,PTR_s_addObject__0269d180,local_50);
      uVar4 = DAT_028cae88;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cae88,PTR_s_count_0269cfe0);
      if (400 < uVar4) {
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028cae88,PTR_s_removeAllObjects_0269d508);
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028cae88,PTR_s_addObject__0269d180,local_50);
      }
      local_21 = 1;
    }
    else {
      local_21 = 0;
    }
    local_48 = 1;
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

