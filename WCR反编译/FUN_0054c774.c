// FUN_0054c774 @ 0054c774

byte FUN_0054c774(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_70;
  ulong local_68 [3];
  ulong local_50;
  undefined4 local_44;
  ulong *local_40;
  ulong *local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_40 = param_3;
  local_38 = param_2;
  if (local_30 == 0) {
    local_21 = 0;
    local_44 = 1;
    goto LAB_0054cb24;
  }
  uVar1 = local_30;
  FUN_00546750();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_21 = 0;
    local_44 = 1;
  }
  else {
    FUN_0054e6a4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68[0] = uVar2;
    (*(code *)PTR__objc_release_02578630)();
    FUN_0054e710();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar2 = local_68[0];
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar1 = local_70;
    if ((uVar2 & 1) == 0) {
LAB_0054c9dc:
      local_21 = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      uVar2 = local_68[0];
      if ((uVar1 & 1) == 0) goto LAB_0054c9dc;
      if (local_38 != (ulong *)0x0) {
        _objc_retainAutorelease();
        *local_38 = uVar2;
      }
      uVar1 = local_70;
      if (local_40 != (ulong *)0x0) {
        _objc_retainAutorelease();
        *local_40 = uVar1;
      }
      local_21 = 1;
    }
    local_44 = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(local_68,0);
  }
  _objc_storeStrong(&local_50,0);
LAB_0054cb24:
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

