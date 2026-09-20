// FUN_003ae880 @ 003ae880

void FUN_003ae880(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_78;
  undefined8 local_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong();
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_48 = param_1;
  local_40 = param_4;
  local_38 = param_3;
  _objc_alloc();
  dVar4 = (double)NEON_ucvtf(local_38);
  dVar4 = *(double *)(param_1 + 0x38) * dVar4;
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = 0;
  FUN_00360240();
  local_70 = uVar3;
  local_68 = dVar4;
  local_60 = uVar5;
  local_58 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithFrame__026ca6e8);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
  _CGRectInset();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,dVar4,uVar5,uVar6,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_78 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,&DAT_000e1af0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setFont__026ca958,*(undefined8 *)(param_1 + 0x20));
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setText__026caa88);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = 0;
  FUN_003aebd0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setTextAlignment__026caa90,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_78);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addSubview__026ca4c0,local_50);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_addObject__0269d180,local_50);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_30,0);
  return;
}

