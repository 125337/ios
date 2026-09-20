// ensureHostedWebFrontmost @ 01e88294

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::ensureHostedWebFrontmost(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID local_28;
  SEL local_20;
  undefined *local_18;
  
  local_20 = param_2;
  local_18 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if ((param_1 != 0) &&
     (puVar2 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webHostedOnTable_026c6f70),
     ((ulong)puVar2 & 1) != 0)) {
    puVar2 = &DAT_028e4808;
    _objc_loadWeakRetained();
    bVar1 = false;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = &DAT_028e4808;
      _objc_loadWeakRetained();
      bVar1 = puVar3 != local_18;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (!bVar1) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      if ((IVar5 & 1) != 0) {
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

