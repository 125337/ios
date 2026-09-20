// sidebarWarmed @ 01602a74

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatRuntime::sidebarWarmed(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0x11) & 1;
}

