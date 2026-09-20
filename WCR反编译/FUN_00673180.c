// FUN_00673180 @ 00673180

undefined * FUN_00673180(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_88;
  ulong local_80;
  undefined *local_78;
  undefined *local_70;
  undefined4 local_68;
  ulong local_58;
  ulong local_50;
  undefined *local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_2);
  uVar2 = local_50;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar3 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf__),
     uVar2 = local_58, (uVar3 & 1) == 0)) {
    local_48 = (undefined *)0x0;
    local_68 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
       uVar2 == 0)) {
      local_48 = (undefined *)0x0;
      local_68 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__N_);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      puVar4 = PTR_s_rangeOfString__0269d838;
      local_70 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_rangeOfString__0269d838,puVar1);
      local_80 = uVar2;
      local_78 = puVar4;
      if ((uVar2 == 0x7fffffffffffffff) || (uVar2 < 2)) {
        local_48 = (undefined *)0x0;
        local_68 = 1;
      }
      else {
        local_40 = uVar2 - 1;
        local_38 = 1;
        local_30 = 1;
        uVar3 = local_50;
        local_28 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_substringWithRange__0269d138,1,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_88 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
        uVar2 = local_88;
        if (uVar3 == 0) {
          local_48 = (undefined *)0x0;
        }
        else {
          puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_decimalDigitCharacterSet_026a5190);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          uVar3 = local_80;
          if (uVar2 == 0x7fffffffffffffff) {
            puVar1 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
            local_48 = puVar1 + uVar3;
          }
          else {
            local_48 = (undefined *)0x0;
          }
        }
        local_68 = 1;
        _objc_storeStrong(&local_88,0);
      }
      _objc_storeStrong(&local_70,0);
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  return local_48;
}

