// calcMaxBufferCount @0x9ecb0

/* Function Stack Size: 0x10 bytes */

void WCMYYAnimatedImageView::calcMaxBufferCount(ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  ulong local_90;
  ulong local_88;
  double local_80;
  double local_78;
  ulong local_40;
  long local_28;
  
  local_28 = _objc_msgSend_animatedImageBytesPerFrame
                       (*(undefined8 *)(param_1 + (long)_curAnimatedImage));
  if (local_28 == 0) {
    local_28 = 0x400;
  }
  lVar1 = __YYDeviceMemoryTotal();
  lVar2 = __YYDeviceMemoryFree();
  local_80 = (double)lVar2 * 0.6;
  if ((double)lVar1 * 0.2 < local_80) {
    local_80 = (double)lVar1 * 0.2;
  }
  local_88 = (ulong)local_80;
  if ((long)local_88 < 0xa00000) {
    local_88 = 0xa00000;
  }
  local_40 = local_88;
  if (*(long *)(param_1 + (long)_maxBufferSize) != 0) {
    if (*(ulong *)(param_1 + (long)_maxBufferSize) < local_88) {
      local_90 = *(ulong *)(param_1 + (long)_maxBufferSize);
    }
    else {
      local_90 = local_88;
    }
    local_40 = local_90;
  }
  local_78 = (double)(long)local_40 / (double)local_28;
  if (1.0 <= local_78) {
    if (512.0 < local_78) {
      local_78 = 512.0;
    }
  }
  else {
    local_78 = 1.0;
  }
  *(long *)(param_1 + (long)_maxBufferCount) = (long)local_78;
  return;
}

