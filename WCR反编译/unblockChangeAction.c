// unblockChangeAction @ 0170f428

/* Function Stack Size: 0x10 bytes */

void SwitchThemesDayNight::unblockChangeAction(ID param_1,SEL param_2)

{
  *(undefined1 *)(param_1 + (long)_shouldSkipChangeAction) = 0;
  *(undefined1 *)(param_1 + (long)_shouldAnimate) = 0;
  return;
}

