// setChecked: @ 0197f460

/* Function Stack Size: 0x14 bytes */

void WCRFileGridCell::setChecked_(ID param_1,SEL param_2,bool param_3)

{
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + (long)_checkView),PTR_s_setHidden__026ca970,
             (param_3 & 0xff ^ 1) & 1);
  return;
}

