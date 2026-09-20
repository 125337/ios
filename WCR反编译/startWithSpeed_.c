// startWithSpeed: @ 000677b8

/* Function Stack Size: 0x18 bytes */

void WCRAutoScrollDriver::startWithSpeed_(ID param_1,SEL param_2,double param_3)

{
  ID IVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 uVar4;
  ID local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if ((param_1 != 0) && (uVar4 = 0x404e000000000000, 60.0 <= ABS(local_28))) {
    dVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSpeed__0269dd10);
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentOffset_0269dd18);
    FUN_00067a38(dVar3,uVar4,IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_attachTapIfNeeded_0269dd20);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_displayLink_0269dd28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___CADisplayLink_026ce190;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CADisplayLink_026ce190,
                 PTR_s_displayLinkWithTarget_selector__0269dd38,local_18,PTR_s_step__0269dd30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDisplayLink__0269dd40);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_displayLink_0269dd28);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_addToRunLoop_forMode__0269dd48,puVar2,
                 *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_displayLink_0269dd28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

