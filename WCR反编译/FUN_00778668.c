// FUN_00778668 @ 00778668

void FUN_00778668(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineSuperFloatBallWarehouseViewController_026ce920;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineSuperFloatBallWarehouseViewController_026ce920,
             PTR_s_importPackageAtPath__026a7f98,*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR___dispatch_main_q_02578680;
  local_28 = puVar1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_28;
  local_38 = uVar3;
  _dispatch_async(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_38,0);
  return;
}

