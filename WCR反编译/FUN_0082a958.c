// FUN_0082a958 @ 0082a958

void FUN_0082a958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  dispatch_time_t dVar7;
  cfstringStruct *local_130;
  cfstringStruct *local_118;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  cfstringStruct *local_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  uint local_58;
  undefined8 local_48;
  cfstringStruct *local_40;
  long local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  undefined8 *puVar3;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  puVar3 = &local_48;
  local_48 = 0;
  _objc_storeStrong(puVar3,param_5);
  uVar2 = (uint)puVar3;
  FUN_0082d7bc();
  if ((((uVar2 & 1) == 0) || (local_28 == (undefined *)0x0)) || (local_38 == 0)) {
    local_58 = 1;
  }
  else {
    if (local_30 == (cfstringStruct *)0x0) {
      local_118 = &cf___;
    }
    else {
      local_118 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_118;
    if (local_40 == (cfstringStruct *)0x0) {
      local_130 = &cf___;
    }
    else {
      local_130 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_130;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____p___);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_28;
    local_70 = puVar4;
    _objc_getAssociatedObject(local_28,&DAT_028cd1fc);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_78;
      local_78 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_setAssociatedObject(local_28,&DAT_028cd1fc,local_78,1);
    }
    puVar4 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_containsObject__0269cbb8,local_70);
    bVar1 = ((ulong)puVar4 & 1) == 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addObject__0269d180,local_70);
      _objc_initWeak(auStack_80,local_28);
      _objc_initWeak(auStack_88,local_38);
      _objc_initWeak(auStack_90,local_48);
      pcVar6 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_copy_0269d150);
      local_98 = pcVar6;
      dVar7 = _dispatch_time(0,500000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_d8 = PTR___NSConcreteStackBlock_02578660;
      local_d0 = 0xc2000000;
      local_cc = 0;
      local_c8 = FUN_00831d64;
      local_c0 = &DAT_02580740;
      _objc_copyWeak();
      _objc_copyWeak();
      pcVar6 = local_98;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = pcVar6;
      _objc_copyWeak();
      _dispatch_after(dVar7,puVar4,&local_d8);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_destroyWeak(auStack_a0);
      _objc_storeStrong(&local_b8);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_b0);
      _objc_storeStrong(&local_98,0);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
    }
    local_58 = (uint)!bVar1;
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

