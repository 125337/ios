// FUN_01bf79dc @ 01bf79dc

void FUN_01bf79dc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar3 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar3;
  if (uVar3 == 0) {
    local_2c = 1;
  }
  else {
    _objc_getAssociatedObject(uVar3,_kWCRefineDraftEditingIndexKey);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    if ((uVar3 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_integerValue_026ca750),
       uVar3 != *(ulong *)(param_1 + 0x30))) {
      local_2c = 1;
    }
    else {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_textView_0269d0f8);
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar3;
      if ((uVar3 != 0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88),
         uVar2 = local_40, puVar1 = PTR_s_setText__026caa88, (uVar3 & 1) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_content_026a4a90);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_performSelector_withObject__026ca7c0,puVar1);
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      _objc_storeStrong(&local_40,0);
      local_2c = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

