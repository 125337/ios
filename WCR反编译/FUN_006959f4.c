// FUN_006959f4 @ 006959f4

byte FUN_006959f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_50;
  long local_48;
  ulong local_40;
  int local_38;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    local_40 = 0;
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_numberOfButtons_026a6510);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_buttonCount_026a6518);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_buttonCount_026a6518);
        local_40 = uVar2;
      }
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_numberOfButtons_026a6510);
      local_40 = uVar2;
    }
    for (local_48 = 0; local_48 < (long)local_40; local_48 = local_48 + 1) {
      local_50 = 0;
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_buttonTitleAtIndex__026a1248);
      if ((uVar2 & 1) != 0) {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_buttonTitleAtIndex__026a1248,local_48);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_50;
        local_50 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar2 = local_50;
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((uVar2 & 1) == 0) ||
         (uVar2 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_28),
         (uVar2 & 1) == 0)) {
        local_38 = 0;
      }
      else {
        local_11 = 1;
        local_38 = 1;
      }
      _objc_storeStrong(&local_50,0);
      if (local_38 != 0) goto LAB_00695d08;
    }
    local_11 = 0;
    local_38 = 1;
  }
LAB_00695d08:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

