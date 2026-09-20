// FUN_00084574 @ 00084574

byte FUN_00084574(byte param_1,byte param_2,byte param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  uint local_78;
  ulong local_48;
  ulong local_38;
  ulong local_30 [3];
  byte local_14;
  byte local_13;
  byte local_12;
  byte local_11;
  
  if ((param_1 & 1) == 0) {
    if ((param_2 & 1) == 0) {
      local_11 = DAT_028c7e79 & 1;
    }
    else {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      local_14 = param_3;
      local_13 = param_2;
      local_12 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (((ulong)puVar4 & 1) == 0) {
        if ((DAT_028c7f30 & 1) != 0) {
          uVar5 = DAT_028c7d48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028c7d48,PTR_s_objectForKeyedSubscript__0269d098,&cf___wcr_af_my_page__);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = false;
          bVar1 = false;
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_30[0] = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_78 = 0;
          if ((uVar5 & 1) != 0) {
            local_38 = local_30[0];
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30[0],PTR_s_objectForKey__0269e048,&cf_configured);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = true;
            uVar5 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_78 = 0;
            if ((uVar5 & 1) != 0) {
              local_48 = local_30[0];
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30[0],PTR_s_objectForKey__0269e048,&cf_chatListEnabled);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = true;
              uVar5 = local_48;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_78 = (uint)uVar5;
            }
          }
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_48);
          }
          if (bVar2) {
            (*(code *)PTR__objc_release_02578630)(local_38);
          }
          bVar1 = (local_78 & 1) != 0;
          if (bVar1) {
            local_11 = 1;
          }
          _objc_storeStrong(local_30,0);
          if (bVar1) goto LAB_00084980;
        }
        local_11 = DAT_028c7e7c & 1;
      }
      else {
        local_11 = 0;
      }
    }
  }
  else if (((DAT_028c7e7b & 1) == 0) || ((param_3 & 1) != 0)) {
    local_11 = DAT_028c7e7a & 1;
  }
  else {
    local_11 = 0;
  }
LAB_00084980:
  return local_11 & 1;
}

