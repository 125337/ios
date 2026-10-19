// preloadWithPage: @0x8c12c

/* Function Stack Size: 0x18 bytes */

void WCMYBIBDataMediator::preloadWithPage_(ID param_1,SEL param_2,long_long param_3)

{
  ulong uVar1;
  undefined8 local_70;
  ulong local_68;
  undefined8 local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  long local_38;
  ulong local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20) / 2;
    local_50 = -uVar1;
    local_68 = local_50;
    if ((long)local_50 < 0) {
      local_68 = uVar1;
    }
    local_48 = local_68;
    local_38 = *(long *)(param_1 + 0x20) - local_68;
    local_40 = local_50;
    local_30 = local_50;
    local_28 = param_3;
    local_20 = param_2;
    local_18 = param_1;
    for (; (long)local_50 <= local_38; local_50 = local_50 + 1) {
      if (local_50 != 0) {
        _objc_msgSend_dataForCellAtIndex_(local_18,local_70,local_28 + local_50);
        local_58 = _objc_retainAutoreleasedReturnValue();
        uVar1 = _objc_opt_respondsToSelector(local_58,"wcm_yb_preload");
        if ((uVar1 & 1) != 0) {
          _objc_msgSend_wcm_yb_preload(local_58,local_70);
        }
        _objc_storeStrong(&local_58,0);
      }
    }
  }
  return;
}

