// preserveGroups @ 01e42f40

/* Function Stack Size: 0x10 bytes */

bool WCRTGLinkedGroupPicker::preserveGroups(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_preserveGroups) & 1;
}

