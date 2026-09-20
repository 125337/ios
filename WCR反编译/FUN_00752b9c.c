// FUN_00752b9c @ 00752b9c

void FUN_00752b9c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  lVar1 = local_50;
  local_58 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  lVar2 = local_50;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = lVar2;
    local_68 = 1;
  }
  else {
    local_80 = &local_88;
    local_88 = 0;
    local_78 = 0x20000000;
    local_74 = 0x20;
    local_70 = 0;
    local_a0 = &local_a8;
    local_a8 = 0;
    local_98 = 0x20000000;
    local_94 = 0x20;
    local_90 = 0x7fffffffffffffff;
    lVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    local_38 = 0;
    local_30 = 0;
    local_b8 = 0;
    local_f0 = PTR___NSConcreteStackBlock_02578660;
    local_e8 = 0xc2000000;
    local_e4 = 0;
    local_e0 = FUN_00752ec4;
    local_d8 = &DAT_0257f988;
    local_d0 = &local_88;
    local_c0 = local_58;
    local_c8 = &local_a8;
    local_b0 = lVar1;
    local_40 = lVar1;
    local_28 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_enumerateSubstringsInRange_optio_026a64a0,0,lVar1,2,&local_f0);
    lVar2 = local_50;
    if (local_a0[3] == 0x7fffffffffffffff) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = lVar2;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringToIndex__0269d6c0,local_a0[3]);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_48 = lVar1;
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    local_68 = 1;
    __Block_object_dispose(&local_a8,8);
    __Block_object_dispose(&local_88,8);
  }
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

