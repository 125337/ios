// onClose @0x2efc4

/* Function Stack Size: 0x10 bytes */

ID WCMCacheController::onClose(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_onClose);
}

