// _WCRefineSetClownYinYangOverride @ 00f19f30

void _WCRefineSetClownYinYangOverride(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long local_38;
  undefined4 local_2c;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_18;
  _WCRefineClownMessageKey();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_2c = 1;
  }
  else {
    FUN_00f16cb4();
    uVar3 = local_20;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_boolValue_026ca540),
       (uVar3 & 1) == 0)) {
      lVar4 = DAT_028e2b88;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b88,PTR_s_objectForKeyedSubscript__0269d098,local_28);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_18;
      puVar2 = PTR_s_setM_uiIsSenderStatus__026abd58;
      local_38 = lVar4;
      if (lVar4 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_unsignedIntValue_0269db10);
        FUN_00f19e90(lVar1,puVar2,lVar4);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b80,PTR_s_removeObjectForKey__0269d700,local_28);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b88,PTR_s_removeObjectForKey__0269d700,local_28);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b90,PTR_s_removeObjectForKey__0269d700,local_28);
      local_2c = 1;
      _objc_storeStrong(&local_38,0);
    }
    else {
      lVar1 = DAT_028e2b90;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b90,PTR_s_objectForKeyedSubscript__0269d098,local_28);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      if (lVar1 == 0) {
        lVar1 = local_18;
        FUN_00f1a350(local_18,PTR_s_m_uiIsSenderStatus_026a62e0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithUnsignedInt__0269d800,lVar1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028e2b88,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_28);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        lVar1 = local_18;
        FUN_00f1a400(local_18);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithBool__0269ce60,lVar1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028e2b90,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_28);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b80,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_28);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      lVar1 = DAT_028e2b90;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b90,PTR_s_objectForKeyedSubscript__0269d098,local_28);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar1);
      FUN_00f1a5c4(local_18,(uint)lVar4 & 1);
      local_2c = 0;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

