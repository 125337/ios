// FUN_0002b248 @ 0002b248

byte FUN_0002b248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *local_c8;
  undefined1 *local_80;
  byte local_71;
  undefined1 *local_70;
  byte local_61;
  undefined1 *local_60;
  undefined1 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  local_61 = 0;
  local_71 = 0;
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_n64MesSvrID_0269d3e0);
  local_c8 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_uiCreateTime_0269d208);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_stringWithFormat__0269cca8,&cf_____u___);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = local_c8;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_n64MesSvrID_0269d3e0);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_stringWithFormat__0269cca8,&cf__lld);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_c8;
  }
  puVar3 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_c8;
  if ((local_71 & 1) != 0) {
    puVar3 = local_70;
    (*(code *)PTR__objc_release_02578630)();
  }
  if ((local_61 & 1) != 0) {
    puVar3 = local_60;
    (*(code *)PTR__objc_release_02578630)();
  }
  FUN_0002cdd4();
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(puVar3);
  puVar4 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_containsObject__0269cbb8,local_48);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
    if ((undefined1 *)((long)&section_000001a8.reserved2 + 3) < puVar4) {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_removeAllObjects_0269d508);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addObject__0269d180,local_48);
    bVar1 = false;
  }
  else {
    local_21 = 0;
    bVar1 = true;
  }
  _objc_sync_exit(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar1) {
    local_21 = 1;
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

