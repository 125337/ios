// FUN_00554514 @ 00554514

void FUN_00554514(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  long local_58;
  long local_50 [3];
  long *local_38;
  undefined4 local_2c;
  long local_28;
  
  plVar1 = &local_28;
  local_28 = 0;
  _objc_storeStrong(plVar1,param_1);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    FUN_00554b54();
    _objc_retainAutoreleasedReturnValue();
    local_38 = plVar1;
    (*(code *)PTR__objc_msgSend_02578628)(plVar1,PTR_s_length_0269cca0);
    if (plVar1 == (long *)0x0) {
      local_2c = 1;
    }
    else {
      lVar2 = local_28;
      FUN_00550aa0(local_28,&cf_itemID);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_28;
      local_50[0] = lVar2;
      FUN_00550aa0(local_28,&cf_username);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_50[0];
      local_58 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_length_0269cca0);
      if ((lVar2 == 0) ||
         (lVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
         lVar2 == 0)) {
        local_2c = 1;
      }
      else {
        if (DAT_028cb438 == (char *)0x0) {
          pcVar4 = "WCCommentItem";
          _objc_getClass();
          DAT_028cb438 = pcVar4;
        }
        pcVar4 = DAT_028cb438;
        _objc_retainAutoreleaseReturnValue();
        local_60 = pcVar4;
        if (pcVar4 == (char *)0x0) {
          local_2c = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_genCommentObject_content_ref_sou_026a4788,local_28,local_38,0,0);
          _objc_retainAutoreleasedReturnValue();
          local_68 = pcVar4;
          if (pcVar4 == (char *)0x0) {
            local_2c = 1;
          }
          else {
            if (DAT_028cb400 == (char *)0x0) {
              pcVar4 = "MMContext";
              _objc_getClass();
              DAT_028cb400 = pcVar4;
            }
            pcVar4 = DAT_028cb400;
            _objc_retainAutoreleaseReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_currentContext_0269d5f8);
            _objc_retainAutoreleasedReturnValue();
            if (DAT_028cb428 == (char *)0x0) {
              pcVar5 = "WCFacade";
              _objc_getClass();
              DAT_028cb428 = pcVar5;
            }
            pcVar5 = DAT_028cb428;
            _objc_retainAutoreleaseReturnValue();
            pcVar6 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_getService__0269d170,pcVar5);
            _objc_retainAutoreleasedReturnValue();
            local_70 = pcVar6;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            if ((local_70 == (char *)0x0) ||
               (pcVar4 = local_70,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_70,PTR_s_respondsToSelector__026ca818,
                          PTR_s_commentObject_ForAd_extraInfo__026a4790), ((ulong)pcVar4 & 1) == 0))
            {
              local_2c = 1;
            }
            else {
              puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
              local_78 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,3);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar7,PTR_s_setObject_forKey__026ca9e8,puVar8,
                         &cf_WCMomentsInteractionExtraInfoKey_Scene);
              (*(code *)PTR__objc_release_02578630)(puVar8);
              pcVar5 = local_68;
              pcVar4 = local_70;
              lVar2 = local_28;
              FUN_0055373c();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar4,PTR_s_commentObject_ForAd_extraInfo__026a4790,pcVar5,lVar2,local_78)
              ;
              (*(code *)PTR__objc_release_02578630)(lVar2);
              _objc_storeStrong(&local_78,0);
              local_2c = 0;
            }
            _objc_storeStrong(&local_70,0);
          }
          _objc_storeStrong(&local_68,0);
        }
      }
      _objc_storeStrong(&local_58);
      _objc_storeStrong(local_50,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

