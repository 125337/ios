// FUN_017919d8 @ 017919d8

/* WARNING: Removing unreachable block (ram,0x01791af8) */
/* WARNING: Removing unreachable block (ram,0x01791b0c) */
/* WARNING: Removing unreachable block (ram,0x01791b10) */
/* WARNING: Removing unreachable block (ram,0x01791b18) */
/* WARNING: Removing unreachable block (ram,0x01791b2c) */
/* WARNING: Removing unreachable block (ram,0x01791b30) */
/* WARNING: Removing unreachable block (ram,0x01791b3c) */
/* WARNING: Removing unreachable block (ram,0x01791b44) */
/* WARNING: Removing unreachable block (ram,0x01791a44) */
/* WARNING: Removing unreachable block (ram,0x01791a60) */
/* WARNING: Removing unreachable block (ram,0x01791a64) */
/* WARNING: Removing unreachable block (ram,0x01791a6c) */
/* WARNING: Removing unreachable block (ram,0x01791a80) */
/* WARNING: Removing unreachable block (ram,0x01791a84) */
/* WARNING: Removing unreachable block (ram,0x01791a90) */
/* WARNING: Removing unreachable block (ram,0x01791a98) */

double FUN_017919d8(double param_1)

{
  undefined *puVar1;
  double local_30;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (ABS(param_1) == INFINITY) {
    local_30 = 30.0;
  }
  else if (0.0 <= param_1) {
    local_30 = param_1;
    if (80.0 < param_1) {
      local_30 = 80.0;
    }
  }
  else {
    local_30 = 0.0;
  }
  return local_30;
}

