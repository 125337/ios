// isEnabled @ 015d2868

/* Function Stack Size: 0x10 bytes */

bool WCRefineWechatThemeStore::isEnabled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

