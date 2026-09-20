// FUN_00298e7c @ 00298e7c

byte FUN_00298e7c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_d0;
  bool local_71;
  ulong local_70;
  ulong local_68 [2];
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar1 = local_30;
  FUN_002992e0();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isVideo_026a1888);
  if ((uVar1 & 1) == 0) {
    uVar2 = local_30;
    FUN_002993d8();
    _objc_retainAutoreleasedReturnValue();
    local_58 = 0;
    local_50 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_valueForKey__0269d128,&cf_mediaList);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_58;
    local_58 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_58;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_71 = (uVar1 & 1) == 0;
    if (local_71) {
      local_d0 = 0;
    }
    else {
      local_d0 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_d0;
    }
    local_71 = !local_71;
    (*(code *)PTR__objc_retain_02578638)();
    local_68[0] = local_d0;
    if (local_71) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    uVar1 = local_68[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_valueForKey__0269d128,&cf_mediaType);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_21 = uVar2 == 4;
    local_48 = 1;
    _objc_storeStrong(local_68);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  else {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isVideo_026a1888);
    local_21 = (byte)uVar1 & 1;
    local_48 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

