// setEditorDarkMode: @ 019712ac

/* Function Stack Size: 0x14 bytes */

void WCRefineFileManagerPreviewViewController::setEditorDarkMode_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_editorDarkMode) = (byte)param_3 & 1;
  return;
}

