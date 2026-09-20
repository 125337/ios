// wcr_pickFilter: @ 01d8a73c

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineSessionStatsActivityViewController::wcr_pickFilter_
          (WCRefineSessionStatsActivityViewController *this,ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  double in_d0;
  undefined8 uVar8;
  uint local_6c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  if ((lVar3 == 4) || (lVar3 == 5)) {
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_6c = (uint)in_d0;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR_WCRefineSessionStatsEngine_026ced48;
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar8 = NEON_ucvtf((ulong)local_6c);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar8,puVar4,PTR_s_windowStartForTimeRange_now__026af740,puVar6);
    uVar7 = (uint)puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    uVar1 = 0x278d00;
    if (lVar3 != 5) {
      uVar1 = 0x93a80;
    }
    if ((uVar7 == 0) || (local_6c <= uVar7)) {
      local_6c = 0xffffffff;
    }
    else {
      local_6c = local_6c - uVar7;
    }
    if (local_6c < uVar1) {
      pcVar2 = &cf_HQb_e9eb;
      if (lVar3 != 5) {
        pcVar2 = &cf_HQb_e9eb;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar2);
      goto LAB_01d8a98c;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFilter__026b30e8,lVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_reloadRows_026c4d18);
LAB_01d8a98c:
  _objc_storeStrong(&local_28,0);
  return;
}

