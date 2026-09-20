// FUN_000bb020 @ 000bb020

void FUN_000bb020(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  double dVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  cfstringStruct *local_178;
  undefined *local_e8;
  undefined8 local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  double local_90;
  cfstringStruct *local_88;
  undefined8 local_80;
  double local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_48 = param_1;
  local_40 = param_4;
  local_38 = param_3;
  _objc_alloc();
  dVar6 = (double)NEON_ucvtf(local_38);
  dVar6 = *(double *)(param_1 + 0x38) * dVar6;
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = 0;
  FUN_000baddc();
  local_80 = uVar5;
  local_78 = dVar6;
  local_70 = uVar8;
  local_68 = uVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,dVar6,uVar8,uVar10,puVar1,PTR_s_initWithFrame__026ca6e8);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
  _objc_retainAutoreleasedReturnValue();
  local_178 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_178 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_178;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  local_90 = *(double *)(param_1 + 0x48);
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_value);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  FUN_000bb7b0();
  _objc_retainAutoreleasedReturnValue();
  local_98 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithImage__0269e558,local_98);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar10 = 0x4032000000000000;
  lVar7 = (long)((*(double *)(param_1 + 0x38) - 18.0) * 0.5);
  uVar8 = 0x4032000000000000;
  local_a0 = puVar1;
  FUN_000baddc();
  local_e0 = uVar5;
  lStack_d8 = lVar7;
  local_d0 = uVar8;
  uStack_c8 = uVar10;
  local_c0 = uVar5;
  lStack_b8 = lVar7;
  local_b0 = uVar8;
  uStack_a8 = uVar10;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,lVar7,uVar8,uVar10,local_a0,PTR_s_setFrame__026ca960);
  puVar1 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setContentMode__026ca8e0,1);
  FUN_000ba020();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setTintColor__026caab0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_a0);
  local_90 = local_90 + *(double *)(param_1 + 0x50);
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_98,0);
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  dVar9 = (*(double *)(param_1 + 0x40) - local_90) - *(double *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = 0;
  dVar6 = local_90;
  FUN_000baddc();
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar6,uVar5,dVar9,uVar8,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_e8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setAutoresizingMask__026ca878,0x12);
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setTag__026caa80,&DAT_000e1af0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e8,PTR_s_setFont__026ca958,*(undefined8 *)(param_1 + 0x20));
  puVar1 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setText__026caa88,local_88);
  FUN_000ba020();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setTextAlignment__026caa90,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_e8);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addSubview__026ca4c0,local_50);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_addObject__0269d180,local_50);
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_30,0);
  return;
}

