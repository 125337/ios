// groupWithDictionary: @ 01acf8bc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineGroup::groupWithDictionary_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  cfstringStruct *pcVar7;
  ID IVar8;
  cfstringStruct *local_278;
  cfstringStruct *local_268;
  cfstringStruct *local_250;
  cfstringStruct *local_240;
  cfstringStruct *local_230;
  cfstringStruct *local_220;
  cfstringStruct *local_210;
  cfstringStruct *local_200;
  int local_1ec;
  int local_1dc;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a0;
  cfstringStruct *local_190;
  ID local_160;
  ID local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  bool local_131;
  cfstringStruct *local_130;
  bool local_121;
  cfstringStruct *local_120;
  bool local_111;
  cfstringStruct *local_110;
  bool local_101;
  cfstringStruct *local_100;
  bool local_f1;
  cfstringStruct *local_f0;
  bool local_e1;
  cfstringStruct *local_e0;
  byte local_d1;
  cfstringStruct *local_d0;
  byte local_c1;
  cfstringStruct *local_c0;
  byte local_b1;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  byte local_99;
  cfstringStruct *local_98;
  byte local_89;
  cfstringStruct *local_88;
  bool local_79;
  cfstringStruct *local_78;
  ID local_70;
  cfstringStruct *local_68;
  undefined4 local_5c;
  cfstringStruct *local_58;
  SEL local_50;
  ID local_48;
  ID local_40;
  ID local_38;
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = (cfstringStruct *)0x0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  pcVar5 = local_58;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)pcVar5 & 1) == 0) {
    local_40 = 0;
    local_5c = 1;
  }
  else {
    pcVar5 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_groupId);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_68 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((((ulong)pcVar5 & 1) == 0) ||
       (pcVar5 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
       pcVar5 == (cfstringStruct *)0x0)) {
      local_40 = 0;
      local_5c = 1;
    }
    else {
      IVar6 = local_48;
      _objc_alloc_init();
      local_70 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_setGroupId__026a30e8,local_68);
      pcVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar7 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_79 = false;
      bVar1 = ((ulong)pcVar7 & 1) == 0;
      if (bVar1) {
        local_190 = &::cf___;
      }
      else {
        local_190 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        local_78 = local_190;
      }
      local_79 = !bVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setName__0269e0c8,local_190);
      if ((local_79 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_kind);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      pcVar7 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_89 = 0;
      if (((ulong)pcVar7 & 1) == 0) {
        local_1a0 = (cfstringStruct *)0x0;
      }
      else {
        local_1a0 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_kind);
        _objc_retainAutoreleasedReturnValue();
        local_89 = 1;
        local_88 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setKind__026ad410,local_1a0);
      if ((local_89 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_scope);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      pcVar7 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_99 = 0;
      if (((ulong)pcVar7 & 1) == 0) {
        local_1b0 = (cfstringStruct *)0x1f;
      }
      else {
        local_1b0 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_scope);
        _objc_retainAutoreleasedReturnValue();
        local_99 = 1;
        local_98 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setScope__026be178,local_1b0);
      if ((local_99 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_members);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_a8 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((ulong)pcVar5 & 1) == 0) {
        local_1c0 = *(cfstringStruct **)PTR____NSArray0___02578280;
      }
      else {
        local_1c0 = local_a8;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setMembers__026b00e0,local_1c0);
      pcVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_order);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      pcVar7 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_b1 = 0;
      if (((ulong)pcVar7 & 1) == 0) {
        local_1d0 = (cfstringStruct *)0x0;
      }
      else {
        local_1d0 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_order);
        _objc_retainAutoreleasedReturnValue();
        local_b1 = 1;
        local_b0 = local_1d0;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setOrder__026ad418,local_1d0);
      if ((local_b1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_collapsed);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      pcVar7 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_c1 = 0;
      if (((ulong)pcVar7 & 1) == 0) {
        local_1dc = 0;
      }
      else {
        pcVar7 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_collapsed);
        _objc_retainAutoreleasedReturnValue();
        local_c1 = 1;
        local_c0 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1dc = (int)pcVar7;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setCollapsed__026be180,local_1dc != 0);
      if ((local_c1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_c0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_disabled);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      pcVar7 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_d1 = 0;
      if (((ulong)pcVar7 & 1) == 0) {
        local_1ec = 0;
      }
      else {
        pcVar7 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_disabled);
        _objc_retainAutoreleasedReturnValue();
        local_d1 = 1;
        local_d0 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1ec = (int)pcVar7;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setDisabled__026b0148,local_1ec != 0);
      if ((local_d1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_d0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_avatarSource);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar7 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_e1 = false;
      bVar1 = ((ulong)pcVar7 & 1) == 0;
      if (bVar1) {
        local_200 = &::cf___;
      }
      else {
        local_200 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_avatarSource);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = local_200;
      }
      local_e1 = !bVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setAvatarSource__026bdab0,local_200);
      if ((local_e1 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_e0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_avatarValue);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar7 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_f1 = false;
      bVar1 = ((ulong)pcVar7 & 1) == 0;
      if (bVar1) {
        local_210 = &::cf___;
      }
      else {
        local_210 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_avatarValue);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = local_210;
      }
      local_f1 = !bVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setAvatarValue__026bdab8,local_210);
      if ((local_f1 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_detailTemplate);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar7 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_101 = false;
      bVar1 = ((ulong)pcVar7 & 1) == 0;
      if (bVar1) {
        local_220 = &::cf___;
      }
      else {
        local_220 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_detailTemplate);
        _objc_retainAutoreleasedReturnValue();
        local_100 = local_220;
      }
      local_101 = !bVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setDetailTemplate__026a2dc8,local_220);
      if ((local_101 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_100);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_inlineDetailTemplate);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar7 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_111 = false;
      bVar1 = ((ulong)pcVar7 & 1) == 0;
      if (bVar1) {
        local_230 = &::cf___;
      }
      else {
        local_230 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_inlineDetailTemplate);
        _objc_retainAutoreleasedReturnValue();
        local_110 = local_230;
      }
      local_111 = !bVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setInlineDetailTemplate__026a2dd8,local_230);
      if ((local_111 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_110);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_memberSyncKind);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar7 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_121 = false;
      bVar1 = ((ulong)pcVar7 & 1) == 0;
      if (bVar1) {
        local_240 = &::cf___;
      }
      else {
        local_240 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_memberSyncKind);
        _objc_retainAutoreleasedReturnValue();
        local_120 = local_240;
      }
      local_121 = !bVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setMemberSyncKind__026be150,local_240);
      if ((local_121 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_120);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_memberSyncSource);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar7 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_131 = false;
      bVar1 = ((ulong)pcVar7 & 1) == 0;
      if (bVar1) {
        local_250 = &::cf___;
      }
      else {
        local_250 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_memberSyncSource);
        _objc_retainAutoreleasedReturnValue();
        local_130 = local_250;
      }
      local_131 = !bVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setMemberSyncSource__026be158,local_250);
      if ((local_131 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_130);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_memberSyncChatRooms);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = local_58;
      local_140 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_memberSyncTags);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_140;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_148 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((ulong)pcVar5 & 1) == 0) {
        local_268 = *(cfstringStruct **)PTR____NSArray0___02578280;
      }
      else {
        local_268 = local_140;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setMemberSyncChatRooms__026be140,local_268);
      pcVar5 = local_148;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((ulong)pcVar5 & 1) == 0) {
        local_278 = *(cfstringStruct **)PTR____NSArray0___02578280;
      }
      else {
        local_278 = local_148;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setMemberSyncTags__026be148,local_278);
      IVar6 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_memberSyncChatRooms_026bdb48);
      _objc_retainAutoreleasedReturnValue();
      IVar8 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      if (IVar8 == 0) {
        local_150 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_memberSyncTags_026bdb50);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = true;
        IVar8 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = false;
        if (IVar8 == 0) {
          local_160 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_memberSyncSource_026be188);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          IVar8 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = IVar8 != 0;
        }
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_160);
      }
      if (bVar3) {
        (*(code *)PTR__objc_release_02578630)(local_150);
      }
      (*(code *)PTR__objc_release_02578630)(IVar6);
      if (bVar1) {
        IVar6 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_memberSyncKind_026be190);
        _objc_retainAutoreleasedReturnValue();
        IVar8 = IVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar6);
        if ((IVar8 & 1) == 0) {
          IVar6 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_memberSyncKind_026be190);
          _objc_retainAutoreleasedReturnValue();
          IVar8 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar6);
          if ((IVar8 & 1) != 0) {
            IVar6 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_memberSyncSource_026be188);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            local_38 = IVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_38,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setMemberSyncChatRooms__026be140);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_release_02578630)(IVar6);
          }
        }
        else {
          IVar6 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_memberSyncSource_026be188);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_30 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_30,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setMemberSyncTags__026be148);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(IVar6);
        }
      }
      IVar6 = local_70;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = IVar6;
      local_5c = 1;
      _objc_storeStrong(&local_148);
      _objc_storeStrong(&local_140,0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

