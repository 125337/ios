// removeObjectForKey: @ 01fcafc0

/* Function Stack Size: 0x18 bytes */

void WCRConfigMutableSnapshot::removeObjectForKey_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (*(long *)(local_18 + (long)_wcrMutableStorage) == 0) {
    uVar1 = *(undefined8 *)(local_18 + (long)_wcrSnapshot);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_mutableCopy_0269d8a0);
    uVar2 = *(undefined8 *)(local_18 + (long)_wcrMutableStorage);
    *(undefined8 *)(local_18 + (long)_wcrMutableStorage) = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(local_18 + (long)_wcrSnapshot,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_18 + (long)_wcrMutableStorage),PTR_s_removeObjectForKey__0269d700
             ,local_28);
  _objc_storeStrong(&local_28,0);
  return;
}

