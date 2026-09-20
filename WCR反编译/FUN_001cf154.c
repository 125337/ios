// FUN_001cf154 @ 001cf154

void FUN_001cf154(undefined8 param_1,undefined8 param_2)

{
  FUN_0022527c(param_1,&cf_ImageScrollView_onFullScreenClosebeforeorig);
  (*DAT_028c8fc0)(param_1,param_2);
  FUN_0022527c(param_1,&cf_ImageScrollView_onFullScreenCloseafterorig);
  return;
}

