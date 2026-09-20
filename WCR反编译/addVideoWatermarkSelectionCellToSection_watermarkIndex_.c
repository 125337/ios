// addVideoWatermarkSelectionCellToSection:watermarkIndex: @ 017f0854

/* Function Stack Size: 0x20 bytes */

void WCRefineAssistFunctionViewController::addVideoWatermarkSelectionCellToSection_watermarkIndex_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  char *pcVar6;
  ID IVar7;
  cfstringStruct *local_88;
  char *local_68;
  byte local_59;
  cfstringStruct *local_58;
  byte local_49;
  ID local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  long_long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_openVideoWatermarkSelector_ld);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _NSSelectorFromString();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_88 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  local_49 = 0;
  local_59 = 0;
  bVar2 = local_30 != 1;
  local_38 = puVar4;
  if (bVar2) {
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_watermarkLayerDisplayNameForInde_026b5848,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_stringWithFormat__0269cca8,&cf_b_);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_88;
  }
  else {
    local_88 = &cf_b4lpS_j_g;
  }
  local_59 = bVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_88;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  pcVar6 = "WCTableViewNormalCellManager";
  _objc_getClass();
  IVar5 = local_18;
  puVar3 = local_38;
  pcVar1 = local_40;
  IVar7 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_videoWatermarkSelectionStatusFor_026b5858,local_30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar6,PTR_s_normalCellForSel_target_title_ri_026a0a88,puVar3,IVar5,pcVar1,IVar7,0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar6;
  (*(code *)PTR__objc_release_02578630)(IVar7);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addCell__0269e3f8,local_68);
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

