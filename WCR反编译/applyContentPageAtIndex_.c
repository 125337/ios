// applyContentPageAtIndex: @ 00ff231c

/* Function Stack Size: 0x18 bytes */

void WCRKeywordAlertDanmakuBubbleView::applyContentPageAtIndex_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ulong local_78;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_contentPages_026ad660);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_contentLabel_026ad638);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  else {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_contentPages_026ad660);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_78 = IVar2 - 1;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (param_3 < local_78) {
      local_78 = param_3;
    }
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setContentPageIndex__026ad668,local_78);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_contentPages_026ad660);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_contentLabel_026ad638);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setNeedsLayout_0269deb8);
  }
  return;
}

