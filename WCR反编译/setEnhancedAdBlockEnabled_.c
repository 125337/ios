// setEnhancedAdBlockEnabled: @ 02184428

/* Function Stack Size: 0x14 bytes */

void WCRefineConfig::setEnhancedAdBlockEnabled_(ID param_1,SEL param_2,bool param_3)

{
  FUN_02184474(&cf_WCRefineEnhancedAdBlockEnabled,param_3 & 1);
  if ((param_3 & 1) != 0) {
    FUN_02184590();
  }
  return;
}

