// handleMosaicPan: @ 01680028

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::handleMosaicPan_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  double in_d0;
  double dVar3;
  double dVar4;
  double dVar5;
  double in_d1;
  double dVar6;
  long local_1b0;
  double local_188;
  long local_f0;
  long local_48;
  SEL local_40;
  ID local_38;
  double local_30;
  double local_28;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_mosaicBrushMode_026b1e10);
  lVar2 = local_48;
  if ((IVar1 & 1) != 0) {
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_locationInView__026ca798);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    lVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_state_026cab20);
    if (lVar2 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,local_38,PTR_s_setLastDrawPoint__026b1fd8);
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,in_d1,local_38,PTR_s_stampMosaicAtViewPoint__026b2838);
    }
    else {
      lVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_state_026cab20);
      if (lVar2 == 2) {
        local_188 = 6.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_mosaicBrushSize_026b2780);
        local_188 = local_188 * DAT_02324280;
        if (local_188 <= 6.0) {
          local_188 = 6.0;
        }
        dVar5 = in_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lastDrawPoint_026b1fa8);
        dVar3 = in_d0 - dVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lastDrawPoint_026b1fa8);
        local_30 = in_d1 - dVar5;
        local_28 = dVar3;
        _hypot(dVar3,local_30);
        if (local_188 * 0.5 <= dVar3) {
          local_1b0 = (long)(dVar3 / local_188);
          if (local_1b0 < 2) {
            local_1b0 = 1;
          }
          for (local_f0 = 1; local_f0 <= local_1b0; local_f0 = local_f0 + 1) {
            dVar4 = (double)local_f0 / (double)local_1b0;
            dVar5 = dVar4;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lastDrawPoint_026b1fa8);
            dVar3 = in_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lastDrawPoint_026b1fa8);
            dVar5 = dVar5 + dVar4 * (in_d0 - dVar3);
            dVar3 = dVar4;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lastDrawPoint_026b1fa8);
            dVar6 = dVar3;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lastDrawPoint_026b1fa8);
            dVar3 = dVar3 + dVar4 * (in_d1 - dVar6);
            FUN_0164494c();
            (*(code *)PTR__objc_msgSend_02578628)
                      (dVar5,dVar3,local_38,PTR_s_stampMosaicAtViewPoint__026b2838);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (in_d0,in_d1,local_38,PTR_s_setLastDrawPoint__026b1fd8);
        }
      }
    }
  }
  _objc_storeStrong(&local_48,0);
  return;
}

