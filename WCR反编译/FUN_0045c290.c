// FUN_0045c290 @ 0045c290

byte FUN_0045c290(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte local_11;
  
  _CFAbsoluteTimeGetCurrent();
  local_11 = DAT_028cab20;
  if (0.3 < param_1 - DAT_028cab18) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    DAT_028cab20 = (byte)puVar2 & 1;
    DAT_028cab18 = param_1;
    local_11 = (byte)puVar2;
  }
  local_11 = local_11 & 1;
  return local_11;
}

