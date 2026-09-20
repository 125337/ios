// FUN_0093ec70 @ 0093ec70

byte FUN_0093ec70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  uVar1 = local_20;
  FUN_009418d0(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  local_40 = uVar1;
  FUN_0094091c(local_20,&cf_m_uiMesLocalID);
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || ((long)uVar2 < 1)) {
    local_11 = 0;
  }
  else {
    puVar3 = PTR_WCRClipboardHistoryStore_026ce680;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_40;
    uVar4 = local_20;
    FUN_0094091c(local_20,&cf_m_n64MesSvrID);
    uVar5 = local_20;
    FUN_0093e2b0(local_20,&cf_m_uiMessageType);
    puVar6 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_appendMessageRefWithSession_loca_026aa7d8,uVar1,uVar2,uVar4,
               uVar5 & 0xffffffff,local_30,local_38);
    local_11 = (byte)puVar6 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

