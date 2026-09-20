// FUN_00115d04 @ 00115d04

void FUN_00115d04(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  undefined4 local_70;
  long local_60;
  undefined *local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  long *local_28;
  
  local_60 = 0;
  _objc_storeStrong(&local_60,param_1);
  lVar3 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    puVar4 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = 1;
    local_58 = puVar4;
  }
  else {
    local_28 = &DAT_028c85e0;
    local_30 = 0;
    _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_0257a2f8);
    if (*local_28 + 1 != 0) {
      _dispatch_once(*local_28 + 1,local_28,local_30);
    }
    _objc_storeStrong(&local_30,0);
    if (DAT_028c85d8 == 0) {
      puVar4 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = 1;
      local_58 = puVar4;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_60;
      lVar3 = DAT_028c85d8;
      lVar5 = local_60;
      local_78 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      lVar2 = local_60;
      local_48 = 0;
      local_40 = 0;
      local_88 = 0;
      local_b8 = PTR___NSConcreteGlobalBlock_02578658;
      local_b0 = 0xd0800000;
      local_ac = 0;
      local_a8 = FUN_001160fc;
      local_a0 = &DAT_0257a2a8;
      local_80 = lVar5;
      local_50 = lVar5;
      local_38 = lVar5;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_78;
      local_98 = lVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar3,PTR_s_enumerateMatchesInString_options_0269ef28,lVar1,0,local_88,local_80,
                 &local_b8);
      puVar4 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_copy_0269d150);
      local_70 = 1;
      local_58 = puVar4;
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_78,0);
    }
  }
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue(local_58);
  return;
}

