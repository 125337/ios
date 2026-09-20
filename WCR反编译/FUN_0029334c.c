// FUN_0029334c @ 0029334c

void FUN_0029334c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined1 local_ea;
  undefined1 local_e9;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined8 local_c8 [3];
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined **local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined **local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = 0;
  _objc_storeStrong(&local_80,param_1);
  uVar1 = local_80;
  local_58 = &cf_title;
  local_48 = &cf_OX_0ReN;
  local_50 = &cf_handler;
  ppuVar2 = &local_b0;
  local_b0 = PTR___NSConcreteStackBlock_02578660;
  local_a8 = 0xc2000000;
  local_a4 = 0;
  local_a0 = FUN_0029429c;
  local_98 = &DAT_02578c20;
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = uVar1;
  local_ea = 1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_40 = ppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_48,&local_58,2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_80;
  local_78 = &cf_title;
  local_68 = &cf_lS__YS;
  local_70 = &cf_handler;
  ppuVar4 = &local_e8;
  local_e8 = PTR___NSConcreteStackBlock_02578660;
  local_e0 = 0xc2000000;
  local_dc = 0;
  local_d8 = FUN_00294414;
  local_d0 = &DAT_02578c20;
  local_38 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_c8[0] = uVar1;
  local_e9 = 1;
  _objc_retainBlock();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_60 = ppuVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_68,&local_78,2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_e9 = 0;
  local_ea = 0;
  local_88 = puVar7;
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(ppuVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(ppuVar2);
  uVar1 = local_80;
  puVar3 = local_88;
  local_118 = PTR___NSConcreteStackBlock_02578660;
  local_110 = 0xc2000000;
  local_10c = 0;
  local_108 = FUN_0029457c;
  local_100 = &DAT_0257b608;
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = uVar1;
  FUN_0028fd68(puVar3,&local_118);
  FUN_002906f8(&cf__cS,local_88);
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(local_c8,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

