// FUN_01560954 @ 01560954

byte FUN_01560954(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte local_7c;
  undefined *local_70;
  undefined *local_60;
  undefined *local_50;
  undefined *local_48;
  undefined1 local_39;
  undefined *local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_customAvatarFeatureEnabled_026a0958);
    if (((ulong)puVar3 & 1) == 0) {
      local_11 = 0;
      local_2c = 1;
    }
    else {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasSuffix__0269d018,&cf__chatroom);
      local_39 = (undefined1)uVar2;
      bVar1 = (uVar2 & 1) == 0;
      local_70 = local_38;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_customAvatarContactEnabledIDs_026a09d8)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_70;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_customAvatarGroupEnabledIDs_026a09d0);
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_70;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = local_70;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      puVar3 = local_48;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_7c = 0;
      if (((ulong)puVar3 & 1) != 0) {
        puVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsObject__0269cbb8,local_28);
        local_7c = (byte)puVar3;
      }
      local_11 = local_7c & 1;
      local_2c = 1;
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

