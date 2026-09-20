// clearEntertainmentFakeGroups @ 01a1a2a4

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::clearEntertainmentFakeGroups(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined *local_38;
  uint local_2c;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar3 = PTR_WCRefineClearSessionHook_026ce348;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineClearSessionHook_026ce348,PTR_s_entertainmentFakeGroupUserNames_026bb948);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (puVar3 != (undefined *)0x0) {
    puVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf_qQhKm0R);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_28;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_01a1a478;
    local_40 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_presentNativePageSheetConfirmWit_0269ed28,&cf__bg1ZPN_SGP__Rd,puVar5,0,
               &cf_nx,&cf_Sm,&local_58,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_38,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRlgGP_U_);
  }
  local_2c = (uint)(puVar3 == (undefined *)0x0);
  _objc_storeStrong(&local_28,0);
  return;
}

