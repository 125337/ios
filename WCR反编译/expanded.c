// expanded @ 01706ffc

/* Function Stack Size: 0x10 bytes */

bool Knob::expanded(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_expanded) & 1;
}

