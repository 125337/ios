// FUN_00187740 @ 00187740

void FUN_00187740(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_e0;
  cfstringStruct *local_d0;
  cfstringStruct *local_c0;
  cfstringStruct *local_b0;
  cfstringStruct *local_a0;
  cfstringStruct *local_70;
  cfstringStruct *local_50;
  cfstringStruct *local_48 [3];
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_title_0269d250);
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_70 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_70;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  bVar1 = false;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageName_0269fc08);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_e);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_Y);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_b_Y);
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_Ty);
          if (((ulong)pcVar3 & 1) == 0) {
            pcVar3 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_4YP);
            local_e0 = &cf_person_crop_circle;
            if (((ulong)pcVar3 & 1) == 0) {
              local_e0 = &cf_gearshape;
            }
          }
          else {
            local_e0 = &cf_pencil;
          }
          local_d0 = local_e0;
        }
        else {
          local_d0 = &cf_arrow_uturn_backward;
        }
        local_c0 = local_d0;
      }
      else {
        local_c0 = &cf_moon;
      }
      local_b0 = local_c0;
    }
    else {
      local_b0 = &cf_sun_max;
    }
    local_a0 = local_b0;
  }
  else {
    local_a0 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageName_0269fc08);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_50 = local_a0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48[0] = local_a0;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,local_48[0]);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar4);
  return;
}

