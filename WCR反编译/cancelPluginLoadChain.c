// cancelPluginLoadChain @ 014bd4b0

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchManager::cancelPluginLoadChain(ID param_1,SEL param_2)

{
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  _objc_storeStrong(param_1 + 0x28,0);
  if ((*(byte *)(param_1 + 0xd) & 1) == 0) {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  return;
}

