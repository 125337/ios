// FUN_0064d6c4 @ 0064d6c4

uint FUN_0064d6c4(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint local_3c;
  undefined *local_20;
  double local_18;
  
  _CFAbsoluteTimeGetCurrent();
  if (0.3 < param_1 - DAT_028cbc10) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_20 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_newFileMessageTipEnabled_026a6280);
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_quoteMeMessageTipEnabled_026a6288);
    local_3c = (uint)(((ulong)puVar1 & 1) != 0);
    if ((((ulong)puVar1 & 1) != 0) &&
       (puVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_20,PTR_s_newFileMessageTipRedStrongEnable_026a6290),
       ((ulong)puVar1 & 1) != 0)) {
      local_3c = local_3c | 2;
    }
    if (((ulong)puVar2 & 1) != 0) {
      local_3c = local_3c | 4;
    }
    if ((((ulong)puVar2 & 1) != 0) &&
       (puVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_20,PTR_s_quoteMeMessageTipRedStrongEnable_026a6298),
       ((ulong)puVar1 & 1) != 0)) {
      local_3c = local_3c | 8;
    }
    DAT_028cbc18 = local_3c;
    DAT_028cbc10 = local_18;
    _objc_storeStrong(&local_20,0);
  }
  return DAT_028cbc18;
}

