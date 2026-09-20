// FUN_0155f6d8 @ 0155f6d8

void FUN_0155f6d8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (lVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar1 = local_20, local_18 = PTR__OBJC_CLASS___UIImage_026cdfd0, lVar2 == 0)) {
    local_18 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_imageWithData_scale__026a8c78,lVar1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

