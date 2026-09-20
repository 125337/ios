// FUN_008cf7ec @ 008cf7ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008cf7ec(void)

{
  bool bVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_a8;
  cfstringStruct *local_58;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar3 = &cf_other_voice_pack_attachment;
  _WCRPluginIconResolvedIcon(&cf_other_voice_pack_attachment,&cf_icons_filled_song);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = (cfstringStruct *)PTR_WCRefinePluginIconCatalog_026ce4e0;
  uVar2 = DAT_02324360;
  pcVar4 = pcVar3;
  local_20 = pcVar3;
  FUN_008cfa58();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,pcVar5,PTR_s_displayImageForIconValue_size_co_026a3cf8,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  if (local_28 == (cfstringStruct *)0x0) {
    pcVar3 = &cf_icons_filled_song;
    FUN_008cfe24(DAT_02324360,_UNK_02324368);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_28;
    local_28 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
  }
  bVar1 = local_28 == (cfstringStruct *)0x0;
  if (bVar1) {
    local_a8 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,&cf_music_note);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_a8;
  }
  else {
    local_a8 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_a8;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

