// FUN_007301c0 @ 007301c0

byte FUN_007301c0(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long local_48;
  undefined *local_40;
  long local_38;
  uint local_30;
  long local_20;
  byte local_11;
  long *plVar3;
  
  plVar3 = &local_20;
  local_20 = 0;
  _objc_storeStrong(plVar3,param_1);
  uVar2 = (uint)plVar3;
  FUN_00730914();
  if (((uVar2 & 1) == 0) || (local_20 == 0)) {
    local_11 = 0;
    local_30 = 1;
    goto LAB_00730538;
  }
  lVar4 = local_20;
  FUN_00730a40();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
  if ((lVar4 == 0) || (DAT_028cc4c0 == (undefined *)0x0)) {
LAB_00730358:
    lVar4 = local_20;
    FUN_00730b0c(0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar4;
    FUN_00730e70();
    lVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if ((lVar6 != 0) && (local_48 != 0)) {
      if (DAT_028cc4c0 == (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = DAT_028cc4c0;
        DAT_028cc4c0 = puVar7;
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      puVar5 = DAT_028cc4c0;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,(uint)lVar4 & 1)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setObject_forKey__026ca9e8,puVar7,local_38)
      ;
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    local_11 = (byte)lVar4 & 1;
    local_30 = 1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    puVar5 = DAT_028cc4c0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cc4c0,PTR_s_objectForKey__0269e048,local_38);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = puVar5 != (undefined *)0x0;
    local_40 = puVar5;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_boolValue_026ca540);
      local_11 = (byte)puVar5 & 1;
    }
    local_30 = (uint)bVar1;
    _objc_storeStrong(&local_40,0);
    if (local_30 == 0) goto LAB_00730358;
  }
  _objc_storeStrong(&local_38,0);
LAB_00730538:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

