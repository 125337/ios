// avatarFrameDisplayNameWithDayPath:nightPath: @ 01811378

/* Function Stack Size: 0x20 bytes */

ID WCRefineAvatarCornerBeautifyViewController::avatarFrameDisplayNameWithDayPath_nightPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  local_48 = 0;
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_40;
    local_40 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_48;
    local_48 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  if ((local_40 == 0) && (local_48 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_N_O_u;
  }
  else if ((local_40 == 0) || (local_48 == 0)) {
    if (local_40 == 0) {
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Y_);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar3;
    }
    else {
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_e_);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar3;
    }
  }
  else {
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_e_);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar3;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

