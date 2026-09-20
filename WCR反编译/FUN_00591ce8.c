// FUN_00591ce8 @ 00591ce8

void FUN_00591ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_88;
  undefined *local_80;
  uint local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50 [3];
  ulong local_38;
  ulong local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  FUN_0058e49c(local_30,&cf_dataPath);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    uVar2 = local_30;
    FUN_0058e49c(local_30,&cf_draftPath);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (uVar1 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    local_50[0] = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_50[0];
    local_58 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_size_026cab00);
    local_70 = param_1;
    local_68 = param_2;
    FUN_00592fcc(param_1);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar3;
    if (puVar3 != (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar3;
    }
    local_74 = (uint)(puVar3 != (undefined *)0x0);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(local_50,0);
    if (local_74 != 0) goto LAB_005921f0;
  }
  local_80 = (undefined *)0x0;
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_imageData);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
  local_88 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar1 & 1) != 0) {
    _objc_storeStrong(&local_80,local_88);
  }
  _objc_storeStrong(&local_88,0);
  uStack_98 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
  uVar5 = *(undefined8 *)PTR__CGSizeZero_025782f8;
  puVar3 = local_80;
  local_a0 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
  if (puVar3 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_80);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = puVar3;
    if (puVar3 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_size_026cab00);
      local_a0 = uVar5;
      uStack_98 = param_2;
    }
    _objc_storeStrong(&local_a8,0);
  }
  puVar3 = local_80;
  FUN_00592fcc(local_a0,uStack_98);
  _objc_retainAutoreleasedReturnValue();
  local_74 = 1;
  local_28 = puVar3;
  _objc_storeStrong(&local_80,0);
LAB_005921f0:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

