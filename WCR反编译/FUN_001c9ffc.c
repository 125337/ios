// FUN_001c9ffc @ 001c9ffc

void FUN_001c9ffc(ulong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  int local_54;
  ulong local_50;
  ulong local_48;
  byte local_3a;
  undefined1 local_39;
  ulong local_38;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c8e10)(param_1,param_2);
  uVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  local_39 = 0;
  bVar2 = false;
  uVar1 = uVar3 != 0;
  if ((bool)uVar1) {
    uVar4 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c91a6);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar4 == 0;
    local_39 = uVar1;
    local_38 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar1 = local_39;
  }
  local_39 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (bVar2) {
    local_3a = 0;
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    do {
      if (local_48 == 0) break;
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_containsString__0269d0b0,&cf_WCFinderTimelineTabViewController);
      if ((uVar3 & 1) == 0) {
        uVar4 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_nextResponder_0269d0d8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_48;
        local_48 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_54 = 0;
      }
      else {
        local_3a = 1;
        local_54 = 3;
      }
      _objc_storeStrong(&local_50,0);
    } while (local_54 == 0);
    if ((local_3a & 1) != 0) {
      FUN_0021bf24(local_18);
    }
    uVar3 = local_18;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar3,&DAT_028c91a6,puVar5,1);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_48,0);
  }
  return;
}

