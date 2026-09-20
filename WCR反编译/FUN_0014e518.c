// FUN_0014e518 @ 0014e518

bool FUN_0014e518(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined *local_50;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((param_2 & 1) == 0) {
    local_50 = PTR_s_inputFullZSBG_0269f3e8;
  }
  else {
    local_50 = PTR_s_inputFullZSBG2_0269f3e0;
  }
  lVar1 = local_18;
  FUN_00148168(local_18,local_50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  _objc_storeStrong(&local_18,0);
  return lVar1 != 0;
}

