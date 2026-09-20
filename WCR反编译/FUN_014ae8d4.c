// FUN_014ae8d4 @ 014ae8d4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014ae8d4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  double dVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  
  dVar1 = DAT_02323d00;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_bounds_026ca548);
  dVar4 = (param_3 * (1.0 - dVar1)) / 2.0;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_bounds_026ca548);
  dVar8 = 1.0 - dVar1;
  dVar5 = (param_4 * dVar8) / 2.0;
  dVar9 = dVar1;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_bounds_026ca548);
  dVar8 = dVar8 * dVar1;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_bounds_026ca548);
  dVar9 = dVar9 * dVar1;
  FUN_014aedb0();
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar4,dVar5,dVar8,dVar9,*(undefined8 *)(param_5 + 0x28),PTR_s_setFrame__026ca960);
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4039000000000000);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar6 = 0;
  uVar7 = 0x4014000000000000;
  FUN_014aedfc();
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar7);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3f000000);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,*(undefined8 *)(param_5 + 0x30),PTR_s_setAlpha__026ca860);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,*(undefined8 *)(param_5 + 0x38),PTR_s_setAlpha__026ca860);
  return;
}

