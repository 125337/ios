// hasAnyRule @ 0185d968

/* Function Stack Size: 0x10 bytes */

bool WCRefineBatchRemarkViewController::hasAnyRule(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ID IVar5;
  ID IVar6;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_30;
  
  IVar5 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_prefixText_026b6a98);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_68 = 1;
  if (IVar6 == 0) {
    local_30 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_suffixText_026b6aa8);
    _objc_retainAutoreleasedReturnValue();
    bVar4 = true;
    IVar6 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = 1;
    if (IVar6 == 0) {
      local_40 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_findText_026b6ab8);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = true;
      IVar6 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_68 = 1;
      if (IVar6 == 0) {
        local_50 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_replaceText_026b6ac8);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        IVar6 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_68 = 1;
        if (IVar6 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_templateText_026b6ad8);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          IVar6 = param_1;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_68 = (uint)(IVar6 != 0);
          local_60 = param_1;
        }
      }
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar4) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(IVar5);
  return local_68;
}

