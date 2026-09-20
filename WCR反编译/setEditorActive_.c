// setEditorActive: @ 019710f4

/* Function Stack Size: 0x14 bytes */

void WCRefineFileManagerPreviewViewController::setEditorActive_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_editorActive) = (byte)param_3 & 1;
  return;
}

