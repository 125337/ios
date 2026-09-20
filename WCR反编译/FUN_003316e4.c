// FUN_003316e4 @ 003316e4

void FUN_003316e4(void)

{
  long lVar1;
  ulong local_28;
  ulong local_18;
  
  for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
    lVar1 = *(long *)(&DAT_026dfdd0 + local_18 * 8);
    _objc_getClass();
    if (lVar1 != 0) {
      FUN_00331f38(lVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_003320e8);
      FUN_00331f38(lVar1,PTR_s_layoutSubviews_0269de80,FUN_003321b0);
      FUN_00331f38(lVar1,PTR_s_didMoveToSuperview_0269f328,FUN_00332278);
    }
  }
  for (local_28 = 0; local_28 < 3; local_28 = local_28 + 1) {
    lVar1 = *(long *)(&DAT_026dfe10 + local_28 * 8);
    _objc_getClass();
    if (lVar1 != 0) {
      FUN_00331f38(lVar1,PTR_s_layoutSubviews_0269de80,FUN_00332340);
    }
  }
  return;
}

