// setExpanded: @ 0170674c

/* Function Stack Size: 0x14 bytes */

void Knob::setExpanded_(ID param_1,SEL param_2,bool param_3)

{
  if ((*(byte *)(param_1 + (long)_expanded) & 1) != ((byte)param_3 & 1)) {
    *(byte *)(param_1 + (long)_expanded) = (byte)param_3 & 1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s__setExpanded__026b3760,param_3 & 1);
  }
  return;
}

