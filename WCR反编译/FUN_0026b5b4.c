// FUN_0026b5b4 @ 0026b5b4

byte FUN_0026b5b4(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong local_68;
  ulong local_60;
  uint local_54;
  ulong local_50;
  byte local_41;
  undefined *local_40 [5];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  if (local_50 == 0) {
    local_41 = 0;
    local_54 = 1;
  }
  else {
    local_40[0] = PTR_s_GetDataPathForFav_026a13f8;
    local_40[1] = PTR_s_GetDataPath_026a1400;
    local_40[2] = PTR_s_dataPathForDisplay_026a1408;
    local_40[3] = PTR_s_Get3rdAppFileDataTempPath_026a1410;
    local_40[4] = PTR_s_sourceDataPath_026a1418;
    for (local_60 = 0; local_60 < 5; local_60 = local_60 + 1) {
      uVar2 = local_50;
      FUN_0026b450(local_50,local_40[local_60]);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar2;
      FUN_0026b920();
      bVar1 = (uVar2 & 1) != 0;
      if (bVar1) {
        local_41 = 1;
      }
      local_54 = (uint)bVar1;
      _objc_storeStrong(&local_68,0);
      if (local_54 != 0) goto LAB_0026b738;
    }
    local_41 = 0;
    local_54 = 1;
  }
LAB_0026b738:
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return local_41 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

