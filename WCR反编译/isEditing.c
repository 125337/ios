// isEditing @ 0219c5d0

/* Function Stack Size: 0x10 bytes */

bool WCRefineConfig::isEditing(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xb) & 1;
}

