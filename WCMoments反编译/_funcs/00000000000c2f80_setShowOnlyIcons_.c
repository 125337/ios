// setShowOnlyIcons: @0xc2f80

/* Function Stack Size: 0x14 bytes */

void WCMTOCropToolbar::setShowOnlyIcons_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 local_30;
  
  if (((*(long *)(param_1 + (long)_doneTextButton) != 0) &&
      (*(long *)(param_1 + (long)_cancelTextButton) != 0)) &&
     ((*(byte *)(param_1 + (long)_showOnlyIcons) & 1) != ((byte)param_3 & 1))) {
    *(byte *)(param_1 + (long)_showOnlyIcons) = (byte)param_3 & 1;
    _objc_msgSend_sizeToFit(*(undefined8 *)(param_1 + (long)_doneIconButton),local_30);
    _objc_msgSend_sizeToFit(*(undefined8 *)(param_1 + (long)_cancelIconButton),local_30);
    _objc_msgSend_setNeedsLayout(param_1,local_30);
  }
  return;
}

