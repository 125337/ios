// FUN_00295614 @ 00295614

void FUN_00295614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_70;
  undefined *local_48;
  undefined4 local_40;
  undefined8 local_30;
  cfstringStruct *local_28;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_1;
  if (local_20 == 0) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_70 = &cf__bcS1Y_;
    }
    FUN_0028e9e4(local_70);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_40 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    FUN_00294e24(puVar2,local_20);
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

