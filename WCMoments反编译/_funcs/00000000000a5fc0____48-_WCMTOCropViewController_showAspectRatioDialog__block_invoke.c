// ___48-[WCMTOCropViewController_showAspectRatioDialog]_block_invoke @0xa5fc0

void ___48__WCMTOCropViewController_showAspectRatioDialog__block_invoke
               (undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_3;
  _objc_storeStrong();
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  _objc_msgSend_objectAtIndexedSubscript_
            (*(undefined8 *)(param_3 + 0x28),local_58,*(undefined8 *)(param_3 + 0x30));
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend_size(uVar1,local_58);
  _objc_msgSend_setAspectRatioPreset_animated_(uVar3,param_2,uVar2,local_58,1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setAspectRatioLockEnabled_(*(undefined8 *)(param_3 + 0x20),local_58,1);
  _objc_storeStrong(&local_20,0);
  return;
}

