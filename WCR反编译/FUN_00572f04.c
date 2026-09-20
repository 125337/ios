// FUN_00572f04 @ 00572f04

void FUN_00572f04(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  bVar1 = (byte)puVar2;
  FUN_0057348c();
  if ((bVar1 & 1) != 0) {
    uVar3 = local_18;
    FUN_005734fc(local_18,"m_privacyButton");
    _objc_retainAutoreleasedReturnValue();
    FUN_00573640();
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  if (DAT_028cb568 != (code *)0x0) {
    (*DAT_028cb568)(local_18,param_2);
  }
  if ((bVar1 & 1) != 0) {
    uVar3 = local_18;
    FUN_005734fc(local_18,"m_privacyButton");
    _objc_retainAutoreleasedReturnValue();
    FUN_00573640();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    FUN_00573898(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

