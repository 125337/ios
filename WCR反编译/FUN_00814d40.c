// FUN_00814d40 @ 00814d40

uint FUN_00814d40(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  uint local_44;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028cd1d5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_18;
  local_20 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_image_026ca678);
  _objc_retainAutoreleasedReturnValue();
  local_44 = 1;
  if (lVar2 == 0) {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isReadyForDisplay_026a8c70);
    local_44 = (uint)lVar1;
  }
  (*(code *)PTR__objc_release_02578630)(lVar2);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_44 & 1;
}

