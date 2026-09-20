// FUN_01f08ff8 @ 01f08ff8

void FUN_01f08ff8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined *local_50;
  ulong local_48;
  int local_3c;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = param_1;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_20;
  if ((uVar2 & 1) == 0) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_hasPrefix__0269d320,&cf___localStorage___);
    if ((uVar3 & 1) == 0) {
      uVar2 = local_48;
      puVar1 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rangeOfString__0269d838,&cf__);
      local_58 = uVar2;
      local_50 = puVar1;
      if (uVar2 == 0x7fffffffffffffff) {
        local_3c = 1;
      }
      else {
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_substringToIndex__0269d6c0,uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_48;
        local_60 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_substringFromIndex__0269d120,local_58 + 1);
        _objc_retainAutoreleasedReturnValue();
        local_68 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
        if (uVar2 != 0) {
          lVar4 = *(long *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
          if ((lVar4 == 0) ||
             (uVar2 = local_60,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_60,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x20)),
             (uVar2 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__0269d180,local_68);
          }
        }
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_60,0);
        local_3c = 0;
      }
    }
    else {
      local_3c = 1;
    }
    _objc_storeStrong(&local_48,0);
    if (local_3c == 0) {
      local_3c = 0;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

