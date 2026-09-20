// FUN_0018f978 @ 0018f978

void FUN_0018f978(undefined8 param_1,long param_2,ulong param_3,byte param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_78;
  ulong local_70;
  undefined *local_68 [3];
  ulong local_50;
  undefined4 local_48;
  byte local_41;
  ulong local_40;
  long local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_41 = param_4;
  local_40 = param_3;
  local_38 = param_2;
  if ((local_30 == 0) || (param_2 < 0)) {
    local_28 = 0;
    local_48 = 1;
  }
  else {
    uVar1 = local_30;
    FUN_0018a708(local_30,param_4 & 1);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar1;
    if (uVar1 == 0) {
      local_28 = 0;
      local_48 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_38);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_50;
      local_68[0] = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectForKeyedSubscript__0269d098,puVar2)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar3;
      FUN_0018f95c();
      uVar1 = local_70;
      if ((uVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_removeObjectForKey__0269d700,local_68[0]);
        local_28 = 0;
        local_48 = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((uVar1 & 1) == 0) ||
           ((0 < (long)local_40 &&
            (uVar1 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0),
            uVar1 != local_40)))) {
          uVar1 = local_70;
          if (((local_41 & 1) == 0) || ((long)local_40 < 1)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = uVar1;
            local_48 = 1;
          }
          else {
            uVar1 = local_30;
            FUN_001904cc(local_40,local_30,local_38,local_40);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            local_78 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((uVar1 & 1) == 0) ||
               (uVar1 = local_78,
               (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0), uVar1 == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_removeObjectForKey__0269d700,local_68[0]);
              local_28 = 0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,local_78,local_68[0]);
              uVar1 = local_78;
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = uVar1;
            }
            local_48 = 1;
            _objc_storeStrong(&local_78,0);
          }
        }
        else {
          uVar1 = local_70;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar1;
          local_48 = 1;
        }
      }
      _objc_storeStrong(&local_70);
      _objc_storeStrong(local_68,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

