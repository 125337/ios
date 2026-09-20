// mappedBlurAlpha @ 00eb5430

/* Function Stack Size: 0x10 bytes */

double WCRefineBackgroundBlur::mappedBlurAlpha(ID param_1,SEL param_2)

{
  undefined *puVar1;
  float fVar2;
  double dVar3;
  double local_78;
  float local_2c;
  double local_18;
  
  local_18 = DAT_02323d28;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  dVar3 = DAT_02323d28;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  local_2c = SUB84(dVar3,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_2c < 0.1) {
    local_2c = 50.0;
  }
  if (local_2c < 1.0) {
    local_2c = 1.0;
  }
  if (100.0 < local_2c) {
    local_2c = 100.0;
  }
  fVar2 = (((local_2c - 1.0) * 20.0) / 99.0 + 80.0) / 100.0;
  if (0.0 < fVar2) {
    if (0.8 < fVar2) {
      local_78 = local_18 + (double)((fVar2 - 0.8) * 0.5);
      if (1.0 <= local_78) {
        local_78 = 1.0;
      }
      local_18 = local_78;
    }
    else {
    }
  }
  else {
    local_18 = 0.0;
  }
  return local_18;
}

