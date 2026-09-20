// FUN_003759b8 @ 003759b8

void FUN_003759b8(void)

{
  char *pcVar1;
  
  pcVar1 = "MainFrameItemView";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    FUN_003c28dc(pcVar1,PTR_s_updateNameLabel_026a2ff8,FUN_003c5884,&DAT_028ca230);
    FUN_003c28dc(pcVar1,PTR_s_updateMessageLabel_026a3000,FUN_003c590c,&DAT_028ca238);
    FUN_003c28dc(pcVar1,PTR_s_updateWithCellData__026a3008,FUN_003c598c,&DAT_028ca240);
    FUN_003c28dc(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_003c5a44,&DAT_028ca248);
    FUN_003c28dc(pcVar1,PTR_s_updateHeadView_0269dea8,FUN_003c5e88,&DAT_028ca250);
  }
  pcVar1 = "FakeMainFrameItemView";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    FUN_003c28dc(pcVar1,PTR_s_updateNameLabel_026a2ff8,FUN_003c5f14,&DAT_028ca258);
    FUN_003c28dc(pcVar1,PTR_s_updateMessageLabel_026a3000,FUN_003c5f9c,&DAT_028ca260);
    FUN_003c28dc(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_003c601c,&DAT_028ca268);
    FUN_003c28dc(pcVar1,PTR_s_updateHeadView_0269dea8,FUN_003c61ec,&DAT_028ca270);
  }
  pcVar1 = "NewMainFrameCell";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    FUN_003c28dc(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_003c6278,&DAT_028ca278);
  }
  pcVar1 = "MMBaseMultiMenuTableViewCell";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    FUN_003c28dc(pcVar1,PTR_s_gestureRecognizerShouldBegin__0269e2b8,FUN_003c6398,&DAT_028ca280);
  }
  return;
}

