// ingestExternalNSLog: @ 0091c1b4

/* Function Stack Size: 0x18 bytes */

void WCNavigationMonitor::ingestExternalNSLog_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  uint local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  if (((*(byte *)(local_18 + 9) & 1) == 0) || ((*(byte *)(local_18 + 0xb) & 1) != 0)) {
    local_2c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar2 & 1) == 0) ||
       (uVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
       uVar2 = local_28, uVar3 == 0)) {
      local_2c = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_appendEntry_toLogStore__026aa3c8,local_38,
                   *(undefined8 *)(local_18 + 0x20));
      }
      local_2c = (uint)(uVar2 == 0);
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

