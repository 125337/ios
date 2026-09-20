// FUN_018ce530 @ 018ce530

byte FUN_018ce530(double param_1,double param_2,undefined8 param_3,double *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  double dVar6;
  double local_68;
  undefined *local_60;
  long local_58;
  undefined *local_50;
  undefined4 local_44;
  long local_40;
  double *local_38;
  double local_30;
  double local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  lVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_38 = param_4;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  lVar2 = local_40;
  if (lVar3 == 0) {
    local_11 = 0;
    local_44 = 1;
    goto LAB_018ce88c;
  }
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf_eE);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_s_rangeOfCharacterFromSet__0269db68;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_58 = lVar2;
  local_50 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (lVar2 != 0x7fffffffffffffff) {
    local_11 = 0;
    local_44 = 1;
    goto LAB_018ce88c;
  }
  puVar1 = PTR__OBJC_CLASS___NSScanner_026ce368;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_68 = 0.0;
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_scanDouble__026abd28,&local_68);
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar1 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isAtEnd_026ab608),
     ((ulong)puVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    lVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf__);
    lVar2 = 0;
    if (lVar3 != 0x7fffffffffffffff) {
      lVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      lVar2 = (lVar4 - lVar3) + -2;
      if (lVar4 - lVar3 != 1 && lVar2 != 0) {
        local_11 = 0;
        goto LAB_018ce87c;
      }
    }
    dVar6 = local_68;
    FUN_018cd42c(lVar2);
    if ((dVar6 < local_28) || (local_30 < dVar6)) {
      local_11 = 0;
    }
    else {
      if (local_38 != (double *)0x0) {
        *local_38 = dVar6;
      }
      local_11 = 1;
    }
  }
LAB_018ce87c:
  local_44 = 1;
  _objc_storeStrong(&local_60,0);
LAB_018ce88c:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

