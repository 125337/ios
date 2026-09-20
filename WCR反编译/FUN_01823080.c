// FUN_01823080 @ 01823080

byte FUN_01823080(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_78;
  ulong local_70;
  long local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  long local_48;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  undefined8 *local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  lVar2 = local_30;
  if (lVar3 == 0) {
    local_11 = 0;
    local_34 = 1;
    goto LAB_018233d0;
  }
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf_eE);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_s_rangeOfCharacterFromSet__0269db68;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_48 = lVar2;
  local_40 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (lVar2 != 0x7fffffffffffffff) {
    local_11 = 0;
    local_34 = 1;
    goto LAB_018233d0;
  }
  puVar1 = PTR__OBJC_CLASS___NSScanner_026ce368;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_58 = 0;
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_scanDouble__026abd28,&local_58);
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar1 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isAtEnd_026ab608),
     ((ulong)puVar1 & 1) == 0)) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    lVar2 = local_30;
    puVar1 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_rangeOfString__0269d838,&cf__);
    local_68 = lVar2;
    local_60 = puVar1;
    if (lVar2 != 0x7fffffffffffffff) {
      lVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      local_70 = (lVar2 - local_68) - 1;
      if (2 < local_70) {
        local_11 = 0;
        local_34 = 1;
        goto LAB_018233c0;
      }
    }
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    uVar5 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar1;
    if (local_28 != (undefined8 *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_doubleValue_026ca608);
      *local_28 = uVar5;
    }
    local_11 = 1;
    local_34 = 1;
    _objc_storeStrong(&local_78,0);
  }
LAB_018233c0:
  _objc_storeStrong(&local_50,0);
LAB_018233d0:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

