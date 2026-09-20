// FUN_01bdacec @ 01bdacec

void FUN_01bdacec(long param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 auStack_130 [8];
  undefined *local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [8];
  undefined *local_b0 [3];
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [8];
  undefined *local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_50 = param_1;
  _objc_storeStrong(&local_58);
  puVar5 = PTR__OBJC_CLASS___UIAction_026ce028;
  puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  local_60 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,&cf_trash);
  _objc_retainAutoreleasedReturnValue();
  local_98 = PTR___NSConcreteStackBlock_02578660;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_01bdb540;
  local_80 = &DAT_0258b7c0;
  _objc_copyWeak(auStack_70,param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_actionWithTitle_image_identifier_0269fbf0,&cf_RdUSag,puVar3,0,&local_98);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setAttributes__0269fc00,2);
  local_b0[0] = PTR__OBJC_CLASS___UIAction_026ce028;
  pcVar1 = &cf_Sm6e;
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    pcVar1 = &cf_mR6e;
  }
  pcVar2 = &cf_star_slash;
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    pcVar2 = &cf_star;
  }
  puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = PTR___NSConcreteStackBlock_02578660;
  local_d8 = 0xc2000000;
  local_d4 = 0;
  local_d0 = FUN_01bdb5c8;
  local_c8 = &DAT_0258b7c0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = uVar4;
  _objc_copyWeak(auStack_b8,param_1 + 0x30);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0[0],PTR_s_actionWithTitle_image_identifier_0269fbf0,pcVar1,puVar5,0,&local_e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIAction_026ce028;
  puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,
             &cf_person_crop_circle_badge_xmark);
  _objc_retainAutoreleasedReturnValue();
  local_120 = PTR___NSConcreteStackBlock_02578660;
  local_118 = 0xc2000000;
  local_114 = 0;
  local_110 = FUN_01bdb69c;
  local_108 = &DAT_0258b8d0;
  _objc_copyWeak(auStack_f0,param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  local_100 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_actionWithTitle_image_identifier_0269fbf0,&cf_RddkNhQ_X_,puVar3,0,
             &local_120);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setAttributes__0269fc00,2);
  puVar5 = PTR__OBJC_CLASS___UIAction_026ce028;
  puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,
             &cf_person_badge_minus);
  _objc_retainAutoreleasedReturnValue();
  local_160 = PTR___NSConcreteStackBlock_02578660;
  local_158 = 0xc2000000;
  local_154 = 0;
  local_150 = FUN_01bdb728;
  local_148 = &DAT_0258b8d0;
  _objc_copyWeak(auStack_130,param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  local_140 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_actionWithTitle_image_identifier_0269fbf0,&cf_n_dkN_NN2R_u7b,puVar3,0,
             &local_160);
  _objc_retainAutoreleasedReturnValue();
  local_128 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if ((*(byte *)(param_1 + 0x39) & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setAttributes__0269fc00,1);
  }
  puVar5 = PTR__OBJC_CLASS___UIMenu_026ce388;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  FUN_01bc7c2c();
  _objc_retainAutoreleasedReturnValue();
  local_48 = local_68;
  local_40 = local_b0[0];
  local_38 = local_e8;
  local_30 = local_128;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_menuWithTitle_children__0269fb28,uVar4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_140,0);
  _objc_destroyWeak(auStack_130);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_100,0);
  _objc_destroyWeak(auStack_f0);
  _objc_storeStrong(local_b0,0);
  _objc_destroyWeak(auStack_b8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_78,0);
  _objc_destroyWeak(auStack_70);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar5);
  return;
}

