// FUN_01faafd8 @ 01faafd8

void FUN_01faafd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  undefined8 local_80;
  double local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  undefined8 local_58;
  double local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  local_30 = param_3;
  local_28 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
             *(undefined8 *)(param_3 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  local_40 = (undefined *)0x0;
  local_38 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    local_48 = 0x4072c00000000000;
    dVar4 = 300.0;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_size_026cab00);
    uVar3 = local_48;
    local_50 = 300.0 / dVar4;
    uVar5 = local_48;
    local_60 = dVar4;
    local_58 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_size_026cab00);
    dVar6 = dVar4 * local_50;
    local_80 = uVar5;
    local_78 = dVar4;
    FUN_01fa8478();
    local_70 = uVar3;
    local_68 = dVar6;
    _UIGraphicsBeginImageContextWithOptions(uVar3,dVar6,0);
    puVar2 = local_38;
    uVar7 = 0;
    uVar3 = uVar7;
    uVar5 = local_70;
    dVar4 = local_68;
    FUN_01fa74bc();
    local_a0 = uVar7;
    local_98 = uVar3;
    local_90 = uVar5;
    local_88 = dVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,uVar3,uVar5,dVar4,puVar2,PTR_s_drawInRect__026ca610)
    ;
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_40;
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _UIGraphicsEndImageContext();
  }
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_40;
  local_d0 = PTR___NSConcreteStackBlock_02578660;
  local_c8 = 0xc2000000;
  local_c4 = 0;
  local_c0 = FUN_01fab280;
  local_b8 = &DAT_0257a7a0;
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = puVar2;
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = uVar3;
  _dispatch_async(puVar1,&local_d0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

