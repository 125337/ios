// messages @0xe898

/* Function Stack Size: 0x10 bytes */

ID WCMInboxController::messages(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_messages);
}

