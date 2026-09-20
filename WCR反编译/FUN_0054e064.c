// FUN_0054e064 @ 0054e064

void FUN_0054e064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_108;
  ulong local_d8;
  bool local_81;
  ulong local_80;
  ulong local_78;
  byte local_69;
  ulong local_68;
  ulong local_60 [3];
  long local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  if (local_28 == 0) {
    local_3c = 1;
  }
  else {
    lVar1 = local_28;
    FUN_00546750();
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    uVar3 = local_30;
    if (lVar1 == 0) {
      local_3c = 1;
    }
    else {
      local_69 = 0;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) == 0) {
        local_d8 = *(ulong *)PTR____NSArray0___02578280;
      }
      else {
        local_d8 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
        local_69 = 1;
        local_68 = local_d8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60[0] = local_d8;
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      uVar3 = local_38;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_81 = (uVar3 & 1) == 0;
      if (local_81) {
        local_108 = *(ulong *)PTR____NSArray0___02578280;
      }
      else {
        local_108 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
        local_80 = local_108;
      }
      local_81 = !local_81;
      uVar3 = local_108;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_108;
      if (local_81) {
        (*(code *)PTR__objc_release_02578630)();
        uVar3 = local_80;
      }
      FUN_0054e6a4();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)();
      FUN_0054e710();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _objc_storeStrong(&local_78);
      _objc_storeStrong(local_60,0);
      local_3c = 0;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

