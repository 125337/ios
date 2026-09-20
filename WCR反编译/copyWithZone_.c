// copyWithZone: @ 01acf03c

/* Function Stack Size: 0x18 bytes */

ID WCRefineGroup::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *local_30;
  _NSZone *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineGroup_026ce630;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGroup_026ce630,PTR_s_allocWithZone__026a4248,param_3);
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar2 = *(undefined8 *)(local_18 + 0x10);
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_copy_0269d150);
  uVar3 = *(undefined8 *)(local_30 + 0x10);
  *(undefined8 *)(local_30 + 0x10) = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar2 = *(undefined8 *)(local_18 + 0x18);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_copy_0269d150);
  uVar3 = *(undefined8 *)(local_30 + 0x18);
  *(undefined8 *)(local_30 + 0x18) = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  *(undefined8 *)(local_30 + 0x20) = *(undefined8 *)(local_18 + 0x20);
  *(undefined8 *)(local_30 + 0x28) = *(undefined8 *)(local_18 + 0x28);
  uVar2 = *(undefined8 *)(local_18 + 0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_copy_0269d150);
  uVar3 = *(undefined8 *)(local_30 + 0x30);
  *(undefined8 *)(local_30 + 0x30) = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  *(undefined8 *)(local_30 + 0x38) = *(undefined8 *)(local_18 + 0x38);
  local_30[8] = *(byte *)(local_18 + 8) & 1;
  local_30[9] = *(byte *)(local_18 + 9) & 1;
  uVar2 = *(undefined8 *)(local_18 + 0x40);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_copy_0269d150);
  uVar3 = *(undefined8 *)(local_30 + 0x40);
  *(undefined8 *)(local_30 + 0x40) = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar2 = *(undefined8 *)(local_18 + 0x48);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_copy_0269d150);
  uVar3 = *(undefined8 *)(local_30 + 0x48);
  *(undefined8 *)(local_30 + 0x48) = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar2 = *(undefined8 *)(local_18 + 0x50);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_copy_0269d150);
  uVar3 = *(undefined8 *)(local_30 + 0x50);
  *(undefined8 *)(local_30 + 0x50) = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar2 = *(undefined8 *)(local_18 + 0x58);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_copy_0269d150);
  uVar3 = *(undefined8 *)(local_30 + 0x58);
  *(undefined8 *)(local_30 + 0x58) = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar2 = *(undefined8 *)(local_18 + 0x60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_copy_0269d150);
  uVar3 = *(undefined8 *)(local_30 + 0x60);
  *(undefined8 *)(local_30 + 0x60) = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar2 = *(undefined8 *)(local_18 + 0x68);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_copy_0269d150);
  uVar3 = *(undefined8 *)(local_30 + 0x68);
  *(undefined8 *)(local_30 + 0x68) = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar2 = *(undefined8 *)(local_18 + 0x70);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_copy_0269d150);
  uVar3 = *(undefined8 *)(local_30 + 0x70);
  *(undefined8 *)(local_30 + 0x70) = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar2 = *(undefined8 *)(local_18 + 0x78);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_copy_0269d150);
  uVar3 = *(undefined8 *)(local_30 + 0x78);
  *(undefined8 *)(local_30 + 0x78) = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30,0);
  return (ID)puVar1;
}

