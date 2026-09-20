// currentSharedWebHostCardIfAny @ 01e893b8

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoCardView::currentSharedWebHostCardIfAny(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int local_34;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  if (DAT_028e47d0 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_028e4808;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = DAT_028e47d0;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e47d0,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_30 = puVar1;
      while (puVar1 = local_30, local_30 != (undefined *)0x0) {
        puVar2 = PTR_WCRefineToDoCardView_026ce978;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineToDoCardView_026ce978,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        puVar2 = local_30;
        if (((ulong)puVar1 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = puVar2;
          local_34 = 1;
          goto LAB_01e89514;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_30;
        local_30 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      local_34 = 2;
LAB_01e89514:
      _objc_storeStrong(&local_30,0);
      if (local_34 != 1) {
        local_18 = (undefined *)0x0;
      }
    }
    else {
      puVar1 = &DAT_028e4808;
      _objc_loadWeakRetained();
      local_18 = puVar1;
    }
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

