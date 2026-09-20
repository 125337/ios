// FUN_0039d7f0 @ 0039d7f0

void FUN_0039d7f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_d8;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  long local_48;
  undefined4 local_3c;
  long local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_28 = local_30;
  if (local_38 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_3c = 1;
    goto LAB_0039dce8;
  }
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_section_0269e988);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_targetSection_026a2d68);
  if ((long)puVar1 - lVar2 != 0) {
    puVar4 = local_30;
    FUN_003d7f2c((long)puVar1 - lVar2,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_3c = 1;
    local_28 = puVar4;
    goto LAB_0039dce8;
  }
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_preservedOriginalRows_026a2ce0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  puVar1 = local_30;
  local_48 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_row_0269e210);
  local_28 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
  local_50 = puVar1;
  if ((long)puVar1 < local_48) {
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_preservedOriginalRows_026a2ce0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_section_0269e988);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_indexPathForRow_inSection__0269e9a0,lVar5,puVar1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    local_3c = 1;
    goto LAB_0039dce8;
  }
  puVar4 = local_30;
  FUN_0039d35c((long)puVar1 - local_48,local_30,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar1 = local_30;
    FUN_0039d4e0(local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      lVar2 = local_38;
      FUN_003d8280();
      if (lVar2 <= (long)local_50) {
        lVar2 = (long)local_50 - lVar2;
        lVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_trailingOriginalRows_026a2cd8);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar3);
        local_28 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
        if (lVar2 < lVar5) {
          lVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_trailingOriginalRows_026a2cd8);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          puVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_section_0269e988);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_indexPathForRow_inSection__0269e9a0,lVar5,puVar1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)(lVar3);
          (*(code *)PTR__objc_release_02578630)(lVar2);
          goto LAB_0039dcc8;
        }
      }
      puVar1 = local_30;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_originalIndexPath_026a27d8);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        local_d8 = local_30;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_d8;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
LAB_0039dcc8:
    local_3c = 1;
    _objc_storeStrong(&local_60,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_3c = 1;
    local_28 = puVar4;
  }
  _objc_storeStrong(&local_58,0);
LAB_0039dce8:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

