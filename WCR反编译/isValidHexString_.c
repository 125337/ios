// isValidHexString: @ 0190b320

/* Function Stack Size: 0x18 bytes */

bool WCRefineColorPickerController::isValidHexString_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined *local_48;
  long local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if ((local_30 == 0) ||
     (lVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&::cf___);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 == 6) {
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf_0123456789ABCDEFabcdef);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      local_48 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_characterSetWithCharactersInStri_0269d1a0,local_40);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_48;
      local_50 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isSupersetOfSet__026b89e8,puVar3);
      local_11 = (byte)puVar2 & 1;
      local_34 = 1;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
    else {
      local_11 = 0;
      local_34 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

