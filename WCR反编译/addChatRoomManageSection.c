// addChatRoomManageSection @ 018a6124

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomFunctionViewController::addChatRoomManageSection(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_60;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHeaderTitle__0269e3c0,&cf___t);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setFooterTitle__0269e3c8,&cf_SN_N0YR_hKm0ydbXT07Re4YPI_0);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_28;
  local_38 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomQuickKickEnabled_0269ece8);
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,&cf_SN);
  }
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomAutoKickEnabled_0269ed30);
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,&::cf_R);
  }
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomDuplicateJoinEnabled_0269ed98);
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,&cf_YR_);
  }
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomRemoveInvitedEnabled_0269ede8);
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,&cf_Deu);
  }
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomMemberAvatarRefreshEnabl_026a5ff8);
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,&cf_4YP7Re);
  }
  pcVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_60 = &cf__g;
  }
  else {
    local_60 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_componentsJoinedByString__0269d140,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_60;
  if (pcVar4 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  puVar1 = local_30;
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
             PTR_s_openChatRoomManage_026b76f8,local_18,&cf__Owc_t,local_40,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

