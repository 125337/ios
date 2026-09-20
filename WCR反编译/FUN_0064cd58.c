// FUN_0064cd58 @ 0064cd58

void FUN_0064cd58(double param_1,undefined8 param_2,ulong param_3)

{
  double dVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  double dVar5;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  double local_48;
  undefined4 local_40;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = param_3;
  FUN_0064d8b4();
  if ((param_3 & 1) == 0) {
    FUN_0064d900(local_28);
    local_40 = 1;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    uVar3 = local_28;
    uVar2 = local_30;
    local_48 = param_1;
    FUN_0064e3e8();
    _objc_getAssociatedObject(uVar3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    dVar1 = local_48;
    if (((uVar3 & 1) == 0) ||
       (dVar5 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_doubleValue_026ca608)
       , DAT_02323c78 <= dVar1 - dVar5)) {
      uVar3 = local_28;
      uVar2 = local_30;
      FUN_0064e3e8();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar3,uVar2,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      FUN_0064e414(local_28,local_30);
      uVar3 = local_28;
      FUN_0064f7f4(local_28,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
      if (uVar3 == 0) {
        FUN_0064d900(local_28);
        local_40 = 1;
      }
      else {
        uVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_lastObject_0269d200);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_60 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_60;
        local_68 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_msg);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_28;
        local_70 = uVar2;
        FUN_0064f9ac();
        _objc_retainAutoreleasedReturnValue();
        local_78 = uVar3;
        if (local_68 != 0) {
          uVar3 = local_28;
          FUN_0064fac4(local_28,local_30);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
          FUN_0064fc7c(local_30,local_78,local_68);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_removeLastObject_0269e830);
        FUN_0065020c(local_30,local_78);
        if ((local_70 != 0) &&
           (uVar3 = local_28,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_28,PTR_s_respondsToSelector__026ca818,
                      PTR_s_scrollToMessage_highlight_margin_0269ec38), (uVar3 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4054000000000000,local_28,PTR_s_scrollToMessage_highlight_margin_0269ec38,
                     local_70,1);
        }
        FUN_0064d900(local_28);
        _objc_storeStrong(&local_78);
        _objc_storeStrong(&local_70,0);
        _objc_storeStrong(&local_68,0);
        _objc_storeStrong(&local_60,0);
        local_40 = 0;
      }
      _objc_storeStrong(&local_58,0);
    }
    else {
      local_40 = 1;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

