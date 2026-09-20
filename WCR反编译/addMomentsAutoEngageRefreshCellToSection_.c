// addMomentsAutoEngageRefreshCellToSection: @ 01c096b0

/* Function Stack Size: 0x18 bytes */

void WCRefineMomentsViewController::addMomentsAutoEngageRefreshCellToSection_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x7;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_momentsAutoEngageFollowsSharedRe_026c10e8);
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if ((IVar1 & 1) == 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar4 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
                 PTR_s_setMomentsAutoEngageRefreshInter_026c10f0,local_18,&::cf__,local_40,0,in_x7,
                 puVar3);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addCell__0269e3f8,puVar4);
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
      local_2c = 0;
    }
    else {
      puVar4 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,0,
                 local_18,&::cf__,&cf_2R_,0);
      _objc_retainAutoreleasedReturnValue();
      local_38 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addCell__0269e3f8,puVar4);
      local_2c = 1;
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

