// FUN_00427bbc @ 00427bbc

void FUN_00427bbc(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined *local_88;
  undefined *local_80;
  long local_78;
  long local_70;
  undefined4 local_64;
  long local_60 [3];
  long local_48;
  long local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  lVar1 = local_40;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar1;
  FUN_0040d5d4(lVar1,&cf_appmsg);
  _objc_retainAutoreleasedReturnValue();
  local_60[0] = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_64 = 1;
    local_38 = puVar2;
  }
  else {
    lVar1 = local_48;
    FUN_0040ca7c();
    local_70 = lVar1;
    if (lVar1 == 0x13) {
      lVar1 = local_60[0];
      FUN_0040d830(0,local_60[0],&cf_title);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      FUN_0040494c();
      _objc_retainAutoreleasedReturnValue();
      local_78 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      lVar1 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
      if (lVar1 == 0) {
        puVar2 = *(undefined **)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = puVar2;
      }
      else {
        local_30 = local_78;
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_30,1);
        _objc_retainAutoreleasedReturnValue();
        local_38 = puVar2;
      }
      local_64 = 1;
      _objc_storeStrong(&local_78,0);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_80 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_60[0];
      local_88 = puVar3;
      FUN_0040d830(local_60[0],&cf_title);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_60[0];
      local_90 = lVar1;
      FUN_0040d830(local_60[0],&cf_content);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_60[0];
      local_98 = lVar4;
      FUN_0040d830(local_60[0],&cf_des);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = lVar1;
      FUN_0040d1ec(local_80,local_88,local_90);
      FUN_0040d1ec(local_80,local_88,local_98);
      FUN_0040d1ec(local_80,local_88,local_a0);
      lVar1 = local_60[0];
      FUN_0040d5d4(local_60[0],&cf_refermsg);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = lVar1;
      FUN_0040d830(lVar1,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_a8;
      local_b0 = lVar1;
      FUN_0040d830(local_a8,&cf_content);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = lVar4;
      FUN_0040d1ec(local_80,local_88,local_b0);
      FUN_0040d1ec(local_80,local_88,local_b8);
      lVar1 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      if ((((lVar1 == 0) &&
           (lVar1 = local_98, (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0),
           lVar1 == 0)) &&
          (lVar1 = local_a0, (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0),
          lVar1 == 0)) &&
         (lVar1 = local_b0, (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0),
         lVar1 == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
      }
      puVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_copy_0269d150);
      local_64 = 1;
      local_38 = puVar2;
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_80,0);
    }
  }
  _objc_storeStrong(local_60);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

