// startRainbow @ 01f47f58

/* Function Stack Size: 0x10 bytes */

void WCRefineUpdateLogView::startRainbow(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rainbowDisplayLink_026c8f20);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sponsorLineRanges_026c8f28);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (IVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___CADisplayLink_026ce190;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CADisplayLink_026ce190,
                 PTR_s_displayLinkWithTarget_selector__0269dd38,local_18,PTR_s_rainbowTick__026c8f30
                );
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setPreferredFramesPerSecond__026b0dd8,0x1e)
      ;
      puVar3 = local_28;
      puVar4 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_addToRunLoop_forMode__0269dd48,puVar4,
                 *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRainbowDisplayLink__026c8f38,local_28)
      ;
      _objc_storeStrong(&local_28,0);
    }
  }
  return;
}

