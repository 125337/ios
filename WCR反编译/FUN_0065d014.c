// FUN_0065d014 @ 0065d014

void FUN_0065d014(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long local_80;
  long local_78;
  undefined *local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined *local_28;
  
  local_80 = 0;
  _objc_storeStrong(&local_80,param_1);
  lVar1 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_78 = 0;
  }
  else {
    lVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_rangeOfString_options__0269d118,&cf_<refermsg,1);
    lVar1 = local_80;
    if (lVar2 == 0x7fffffffffffffff) {
      local_78 = 0;
    }
    else {
      lVar3 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
      local_50 = lVar3 - lVar2;
      puVar4 = PTR_s_rangeOfString_options_range__0269d130;
      local_48 = lVar2;
      local_40 = lVar2;
      local_38 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar1,PTR_s_rangeOfString_options_range__0269d130,&cf_<_refermsg>,1,lVar2,local_50)
      ;
      if (lVar1 == 0x7fffffffffffffff) {
        local_78 = 0;
      }
      else {
        local_70 = puVar4 + (lVar1 - lVar2);
        lVar3 = local_80;
        local_68 = lVar2;
        local_60 = lVar2;
        local_58 = local_70;
        local_30 = lVar1;
        local_28 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_substringWithRange__0269d138,lVar2,local_70);
        _objc_retainAutoreleasedReturnValue();
        local_78 = lVar3;
      }
    }
  }
  _objc_storeStrong(&local_80,0);
  _objc_autoreleaseReturnValue(local_78);
  return;
}

