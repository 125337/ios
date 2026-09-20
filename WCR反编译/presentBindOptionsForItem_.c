// presentBindOptionsForItem: @ 01f8dc9c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackPickerViewController::presentBindOptionsForItem_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  ulong local_108;
  undefined1 auStack_100 [8];
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  ulong local_d8;
  undefined1 auStack_d0 [8];
  undefined *local_c8 [3];
  undefined1 auStack_b0 [12];
  undefined4 local_a4;
  ulong local_a0;
  SEL local_98;
  ID local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined **local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined **local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a0 = 0;
  local_98 = param_2;
  local_90 = param_1;
  _objc_storeStrong(&local_a0,param_3);
  if ((local_a0 == 0) ||
     (uVar4 = local_a0, (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_isDirectory_026b0ba0),
     (uVar4 & 1) != 0)) {
    local_a4 = 1;
  }
  else {
    _objc_initWeak(auStack_b0,local_90);
    uVar4 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_repositoryCode_026b0ba8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (uVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_bindRepositoryForItem__026c9a10,local_a0)
      ;
      local_a4 = 0;
    }
    else {
      uVar4 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_name_0269d828);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_repositoryCode_026b0ba8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_0_);
      _objc_retainAutoreleasedReturnValue();
      local_c8[0] = puVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      IVar1 = local_90;
      puVar3 = local_c8[0];
      local_58 = &cf_title;
      local_48 = &cf_e__;
      local_50 = &cf_handler;
      ppuVar5 = &local_f8;
      local_f8 = PTR___NSConcreteStackBlock_02578660;
      local_f0 = 0xc2000000;
      local_ec = 0;
      local_e8 = FUN_01f8e98c;
      local_e0 = &DAT_02579c60;
      _objc_copyWeak(auStack_d0,auStack_b0);
      uVar4 = local_a0;
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = uVar4;
      _objc_retainBlock();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_40 = ppuVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_58,2);
      _objc_retainAutoreleasedReturnValue();
      local_88 = &cf_title;
      local_70 = &cf_nd__;
      local_80 = &cf_destructive;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_38 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_78 = &cf_handler;
      ppuVar8 = &local_128;
      local_128 = PTR___NSConcreteStackBlock_02578660;
      local_120 = 0xc2000000;
      local_11c = 0;
      local_118 = FUN_01f8e9f0;
      local_110 = &DAT_02579c60;
      local_68 = puVar7;
      _objc_copyWeak(auStack_100,auStack_b0);
      uVar4 = local_a0;
      (*(code *)PTR__objc_retain_02578638)();
      local_108 = uVar4;
      _objc_retainBlock();
      puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_60 = ppuVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_70,&local_88,3);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      FUN_01f8e354(IVar1,puVar3,puVar10,&cf_Sm);
      (*(code *)PTR__objc_release_02578630)(puVar10);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(ppuVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(ppuVar5);
      local_a4 = 1;
      _objc_storeStrong(&local_108);
      _objc_destroyWeak(auStack_100);
      _objc_storeStrong(&local_d8,0);
      _objc_destroyWeak(auStack_d0);
      _objc_storeStrong(local_c8,0);
    }
    _objc_destroyWeak(auStack_b0);
  }
  _objc_storeStrong(&local_a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

