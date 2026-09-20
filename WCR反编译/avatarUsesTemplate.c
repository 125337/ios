// avatarUsesTemplate @ 00358e80

/* Function Stack Size: 0x10 bytes */

bool WCRGroupingEntry::avatarUsesTemplate(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

