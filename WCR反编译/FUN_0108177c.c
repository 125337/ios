// FUN_0108177c @ 0108177c

void FUN_0108177c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) != 0) &&
     ((uVar2 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x20)),
      (uVar2 & 1) != 0 ||
      (uVar2 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_hasPrefix__0269d320,*(undefined8 *)(param_1 + 0x28)),
      (uVar2 & 1) != 0)))) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_addIndex__0269fc98,param_3);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

