// FUN_003b75dc @ 003b75dc

void FUN_003b75dc(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_48;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_title_0269d250);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_48 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_48;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_imageName_0269fc08);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = false;
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_eQO);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_Yl);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_n_v);
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar3 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_fh);
          if (((ulong)pcVar3 & 1) == 0) {
            pcVar3 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_containsString__0269d0b0,&cf_MQSbpb);
            if (((ulong)pcVar3 & 1) == 0) {
              pcVar3 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_4YP)
              ;
              if (((ulong)pcVar3 & 1) == 0) {
                pcVar3 = local_20;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_20,PTR_s_containsString__0269d0b0,&cf_R_);
                local_90 = &cf_folder;
                if (((ulong)pcVar3 & 1) == 0) {
                  local_90 = &cf_gearshape;
                }
              }
              else {
                local_90 = &cf_person_crop_circle;
              }
              local_88 = local_90;
            }
            else {
              local_88 = &cf_bell_slash;
            }
            local_80 = local_88;
          }
          else {
            local_80 = &cf_star;
          }
          local_78 = local_80;
        }
        else {
          local_78 = &cf_pin;
        }
        local_70 = local_78;
      }
      else {
        local_70 = &cf_pencil;
      }
      local_68 = local_70;
    }
    else {
      local_68 = &cf_arrow_up_right_square;
    }
    local_60 = local_68;
  }
  else {
    local_60 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_imageName_0269fc08);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_30 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_60;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,local_28);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar4);
  return;
}

