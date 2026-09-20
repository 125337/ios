// FUN_015f36fc @ 015f36fc

void FUN_015f36fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_b0;
  undefined *local_78;
  undefined *local_68;
  undefined *local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  _objc_alloc();
  dVar4 = (double)NEON_ucvtf(local_28);
  dVar4 = *(double *)(param_1 + 0x30) * dVar4;
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = 0;
  FUN_015dff84();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,dVar4,uVar5,uVar6,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setText__026caa88,local_20);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTextAlignment__026caa90,1);
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402a000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)();
  FUN_015e16a4();
  bVar1 = ((ulong)puVar2 & 1) == 0;
  local_b0 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_b0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_b0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTextColor__026caa98,local_b0);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addSubview__026ca4c0,local_40);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__0269d180,local_40);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_20,0);
  return;
}

