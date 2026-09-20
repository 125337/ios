// frameDisplayNameDay:night: @ 0183d410

/* Function Stack Size: 0x20 bytes */

ID WCRefineAvatarFrameSpecialUserDetailViewController::frameDisplayNameDay_night_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  cfstringStruct *pcVar2;
  long local_88;
  long local_78;
  long local_60;
  long local_58;
  bool local_49;
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
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_49 = false;
  if (lVar1 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_78;
  }
  local_49 = lVar1 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_78;
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_88 = 0;
  }
  else {
    local_88 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_88;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_88;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_40 == 0) && (local_58 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_N_O_u;
  }
  else if ((local_40 == 0) || (local_58 == 0)) {
    if (local_40 == 0) {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Y_);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
    else {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_e_);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
  }
  else {
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_e_);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar2;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

