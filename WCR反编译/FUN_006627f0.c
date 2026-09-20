// FUN_006627f0 @ 006627f0

byte FUN_006627f0(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong local_90;
  ulong local_88;
  undefined *local_80;
  undefined4 local_78;
  ulong local_68;
  ulong local_60;
  byte local_51;
  undefined8 local_50;
  long *local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_60 = 0;
  _objc_storeStrong(&local_60,param_1);
  uVar2 = local_60;
  FUN_006653e8();
  _objc_retainAutoreleasedReturnValue();
  local_68 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if ((uVar2 < 3) ||
     (uVar2 = local_68,
     (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_hasPrefix__0269d320,&cf__),
     (uVar2 & 1) == 0)) {
    local_51 = 0;
    local_78 = 1;
  }
  else {
    uVar2 = local_68;
    FUN_006620c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = local_68;
      puVar5 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rangeOfString__0269d838,&cf__);
      local_88 = uVar2;
      local_80 = puVar5;
      if (uVar2 == 0x7fffffffffffffff) {
        local_51 = 0;
        local_78 = 1;
      }
      else {
        uVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        if (uVar2 + 1 < uVar3) {
          local_51 = 1;
          local_78 = 1;
        }
        else {
          local_40 = local_88 - 1;
          local_38 = 1;
          local_30 = 1;
          uVar2 = local_68;
          local_28 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_substringWithRange__0269d138,1,local_40);
          _objc_retainAutoreleasedReturnValue();
          local_90 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_rangeOfString__0269d838,&cf__);
          bVar1 = true;
          if (uVar2 == 0x7fffffffffffffff) {
            uVar2 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_rangeOfString__0269d838,&cf_format_s_);
            bVar1 = uVar2 != 0x7fffffffffffffff;
          }
          if (bVar1) {
            local_51 = 0;
          }
          else {
            local_48 = &DAT_028cbc68;
            local_50 = 0;
            _objc_storeStrong(&local_50,&PTR___NSConcreteGlobalBlock_0257e7c8);
            if (*local_48 + 1 != 0) {
              _dispatch_once(*local_48 + 1,local_48,local_50);
            }
            _objc_storeStrong(&local_50,0);
            uVar4 = DAT_028cbc60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_028cbc60,PTR_s_containsObject__0269cbb8,local_90);
            local_51 = (byte)uVar4 & 1;
          }
          local_78 = 1;
          _objc_storeStrong(&local_90,0);
        }
      }
    }
    else {
      local_51 = 0;
      local_78 = 1;
    }
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  return local_51 & 1;
}

