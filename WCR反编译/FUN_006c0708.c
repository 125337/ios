// FUN_006c0708 @ 006c0708

byte FUN_006c0708(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  byte local_a0;
  ulong local_40 [3];
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98);
    if ((((uVar1 == 0x3e3) ||
         (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98),
         uVar1 == 0x3e4)) ||
        (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98),
        uVar1 == 0x3e6)) ||
       (((uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98),
         uVar1 == 999 ||
         (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98),
         uVar1 == 0x3e2)) ||
        (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98),
        uVar1 = local_20, uVar2 == 0x65)))) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_40[0] = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_MMCPLabel);
        local_a0 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_40[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40[0],PTR_s_containsString__0269d0b0,&cf_MMUILabel);
          local_a0 = (byte)uVar1;
        }
        local_11 = local_a0 & 1;
        local_24 = 1;
        _objc_storeStrong(local_40,0);
      }
      else {
        local_11 = 1;
        local_24 = 1;
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

