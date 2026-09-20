// FUN_00859aac @ 00859aac

void FUN_00859aac(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  byte local_79;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  undefined8 local_50 [3];
  byte local_35;
  undefined4 local_34;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if ((DAT_028cd280 & 1) == 0) {
    local_28 = 0;
    local_34 = 1;
  }
  else if (DAT_028cd288 + -2 == 0) {
    local_28 = 0;
    local_34 = 1;
  }
  else {
    uVar4 = local_30;
    FUN_0085a28c(DAT_028cd288 + -2);
    lVar2 = DAT_028cd048;
    local_35 = (byte)uVar4;
    if (DAT_028cd288 == 1) {
      uVar4 = DAT_028cd050;
      _WCRefineProfileBgHTMLWorkDirectory();
      _objc_retainAutoreleasedReturnValue();
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      local_70 = 0;
      local_50[0] = uVar4;
      _WCRefineProfileBgPreviewResolveDayNightOfKind(uVar4,2,&local_68,&local_70);
      _objc_storeStrong(&local_58,local_68);
      _objc_storeStrong(&local_60,local_70);
      lVar3 = local_58;
      lVar2 = local_60;
      if ((local_58 == 0) && (local_60 == 0)) {
        local_28 = 0;
      }
      else if (((local_35 & 1) == 0) || (local_60 == 0)) {
        if (local_58 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = lVar2;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = lVar3;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = lVar2;
      }
      local_34 = 1;
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(local_50,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = lVar2;
      if (lVar2 == 0) {
        local_28 = 0;
        local_34 = 1;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = 0;
        if (((ulong)puVar6 & 1) != 0) {
          bVar1 = local_79;
        }
        (*(code *)PTR__objc_release_02578630)(puVar5);
        lVar2 = local_78;
        if ((bVar1 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = lVar2;
          local_34 = 1;
        }
        else {
          local_88 = 0;
          local_90 = 0;
          puVar5 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_98 = local_88;
          local_a0 = local_90;
          _WCRefineProfileBgPreviewResolveDayNightOfKind(lVar2,puVar6,&local_98,&local_a0);
          _objc_storeStrong(&local_88,local_98);
          _objc_storeStrong(&local_90,local_a0);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          lVar3 = local_88;
          lVar2 = local_90;
          if ((local_88 == 0) && (local_90 == 0)) {
            local_28 = 0;
          }
          else if (((local_35 & 1) == 0) || (local_90 == 0)) {
            if (local_88 == 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = lVar2;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = lVar3;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = lVar2;
          }
          local_34 = 1;
          _objc_storeStrong(&local_90);
          _objc_storeStrong(&local_88,0);
        }
      }
      _objc_storeStrong(&local_78,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

