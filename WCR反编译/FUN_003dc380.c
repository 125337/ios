// FUN_003dc380 @ 003dc380

double FUN_003dc380(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  double local_60;
  double local_58;
  undefined *local_20;
  double local_18;
  
  puVar2 = PTR_WCRefineOfficialTheme_026ce620;
  local_58 = 17.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4031000000000000,*(undefined8 *)PTR__UIFontWeightRegular_02578158,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_dynamicSettingFontForProperty_in_026a32a0,&cf_cell_msglabel_textsize,
             &cf__mainframe_table);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pointSize_026a1d68);
  if (local_58 <= 1.0) {
    local_58 = 17.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pointSize_026a1d68);
  }
  local_60 = local_18 * 0.75;
  if (local_58 < local_60) {
    local_60 = local_58;
  }
  _objc_storeStrong(&local_20,0);
  return local_60;
}

