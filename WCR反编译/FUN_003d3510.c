// FUN_003d3510 @ 003d3510

void FUN_003d3510(undefined8 param_1)

{
  bool bVar1;
  segment_command *psVar2;
  segment_command *psVar3;
  segment_command *psVar4;
  segment_command *local_120;
  segment_command *local_90;
  byte local_81;
  segment_command *local_80;
  byte local_71;
  segment_command *local_70;
  segment_command *local_68;
  segment_command *local_60;
  uint local_54;
  segment_command *local_50;
  segment_command *local_48;
  segment_command *local_40;
  segment_command *local_38;
  segment_command *local_30;
  segment_command *local_28;
  
  local_30 = (segment_command *)0x0;
  _objc_storeStrong(&local_30,param_1);
  psVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_avatarSource_026a3170);
  _objc_retainAutoreleasedReturnValue();
  psVar3 = psVar2;
  FUN_003aa040();
  _objc_retainAutoreleasedReturnValue();
  local_38 = psVar3;
  (*(code *)PTR__objc_release_02578630)(psVar2);
  psVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_avatarValue_026a3178);
  _objc_retainAutoreleasedReturnValue();
  psVar2 = psVar3;
  FUN_003aa040();
  _objc_retainAutoreleasedReturnValue();
  local_40 = psVar2;
  (*(code *)PTR__objc_release_02578630)();
  psVar2 = (segment_command *)PTR__OBJC_CLASS___NSString_026cdfe8;
  FUN_003d5540();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scope_0269ea90);
  psVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_groupId_0269ea88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(psVar2,PTR_s_stringWithFormat__0269cca8,&cf___________lu___)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_48 = psVar2;
  (*(code *)PTR__objc_release_02578630)(psVar4);
  (*(code *)PTR__objc_release_02578630)(psVar3);
  psVar2 = local_48;
  FUN_003d560c();
  _objc_retainAutoreleasedReturnValue();
  local_50 = psVar2;
  if (psVar2 == (segment_command *)0x0) {
    psVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_photo);
    if ((((ulong)psVar2 & 1) != 0) ||
       (psVar2 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_file),
       ((ulong)psVar2 & 1) != 0)) {
      psVar2 = (segment_command *)PTR__OBJC_CLASS___UIImage_026cdfd0;
      psVar3 = local_40;
      FUN_003d572c();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(psVar2,PTR_s_imageWithContentsOfFile__0269e0e0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = psVar2;
      (*(code *)PTR__objc_release_02578630)(psVar3);
      bVar1 = local_60 != (segment_command *)0x0;
      if (bVar1) {
        FUN_003d5944(local_60,local_48);
        psVar2 = local_60;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = psVar2;
      }
      local_54 = (uint)bVar1;
      _objc_storeStrong(&local_60,0);
      if (local_54 != 0) goto LAB_003d3b84;
    }
    psVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    local_120 = (segment_command *)PTR_WCRefineGroup_026ce630;
    local_71 = 0;
    local_81 = 0;
    if (psVar2 == (segment_command *)0x0) {
      psVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scope_0269ea90);
      psVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_groupId_0269ea88);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = psVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_120,PTR_s_defaultAvatarIconNameForScope_gr_026a3180,psVar3);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_120;
    }
    else {
      local_120 = local_40;
    }
    local_81 = psVar2 == (segment_command *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_120;
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    psVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scope_0269ea90);
    if (((psVar2 == &segment_command_00000020) ||
        (psVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scope_0269ea90),
        psVar2 == (segment_command *)&segment_command_00000020.vmsize)) &&
       ((psVar2 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
        psVar2 == (segment_command *)0x0 ||
        (psVar2 = local_68,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_isEqualToString__0269ccc8,&cf_icons_filled_chatbox),
        ((ulong)psVar2 & 1) != 0)))) {
      psVar2 = (segment_command *)PTR_WCRefineGroup_026ce630;
      psVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scope_0269ea90);
      psVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_groupId_0269ea88);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (psVar2,PTR_s_defaultAvatarIconNameForScope_gr_026a3180,psVar3);
      _objc_retainAutoreleasedReturnValue();
      psVar3 = local_68;
      local_68 = psVar2;
      (*(code *)PTR__objc_release_02578630)(psVar3);
      (*(code *)PTR__objc_release_02578630)(psVar4);
    }
    psVar2 = local_68;
    FUN_003d5a7c();
    _objc_retainAutoreleasedReturnValue();
    local_90 = psVar2;
    if (psVar2 == (segment_command *)0x0) {
      local_28 = (segment_command *)0x0;
    }
    else {
      FUN_003d5944(psVar2,local_48);
      psVar2 = local_90;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = psVar2;
    }
    local_54 = 1;
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_68,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_54 = 1;
    local_28 = psVar2;
  }
LAB_003d3b84:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

