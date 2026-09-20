// FUN_007e439c @ 007e439c

byte FUN_007e439c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_78;
  undefined *local_48;
  undefined *local_40;
  undefined *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_themeBoxRedeemRule_026a84c8);
  puVar2 = local_28;
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_themeBoxSelectedGroups_026a84d0);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_78 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_78;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf__chatroom);
  if ((uVar3 & 1) == 0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_themeBoxPrivateChatRedeemEnabled_026a84d8);
    local_11 = (byte)puVar1 & 1;
  }
  else if (local_40 == (undefined *)0x0) {
    puVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsObject__0269cbb8,local_20);
    local_11 = (byte)puVar1 & 1;
  }
  else {
    puVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsObject__0269cbb8,local_20);
    local_11 = ((byte)puVar1 ^ 1) & 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

