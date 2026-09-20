// _WCRefineSetTransferAmountOverride @ 00f1721c

void _WCRefineSetTransferAmountOverride(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    FUN_00f16cb4();
    uVar3 = local_20;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
       uVar3 == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b38,PTR_s_removeObjectForKey__0269d700,local_18);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b38,PTR_s_setObject_forKeyedSubscript__0269d248,local_20,local_18);
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

