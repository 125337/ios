// FUN_007a2b0c @ 007a2b0c

void FUN_007a2b0c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong local_48;
  long local_40 [3];
  undefined *local_28;
  uint local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_homepageCornerEnabled_0269fc40);
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar2 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainFrameCornerEnabled_026a1ff0),
       ((ulong)puVar2 & 1) == 0)) {
      local_1c = 1;
    }
    else {
      local_40[0] = 0;
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_m_tableView);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = &cf_MainFrameTableView;
      local_48 = uVar3;
      _NSClassFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
      if ((uVar3 & 1) != 0) {
        _objc_storeStrong(local_40,local_48);
      }
      _objc_storeStrong(&local_48,0);
      bVar1 = local_40[0] != 0;
      if (bVar1) {
        FUN_007a2dbc(local_40[0]);
      }
      local_1c = (uint)!bVar1;
      _objc_storeStrong(local_40,0);
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

