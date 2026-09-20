// tryFinishDouyinFromRenderedHTML: @ 01076944

/* Function Stack Size: 0x18 bytes */

void WCRXHSWebExtractSession::tryFinishDouyinFromRenderedHTML_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *local_48;
  undefined1 local_39;
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_finished_026a15b0);
  if (((IVar2 & 1) == 0) &&
     (lVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar3 != 0)) {
    puVar4 = PTR_WCRefineLinkParser_026ce168;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLinkParser_026ce168,PTR_s_douyinPlayURLsFromRenderedText__026adfe8,
               local_28);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = local_28;
    local_38 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_video_id_);
    lVar3 = local_28;
    puVar4 = PTR_WCRefineLinkParser_026ce168;
    local_39 = (undefined1)lVar5;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sourceURL_026ad980);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pageURL_026ae148);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_extractDouyinFromHTML_sourceURL__026adf98,lVar3,IVar2);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar4;
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLinkParser_026ce168,PTR_s_ensureDouyinBrowserPlaybackURLFo_026ad9e8,
               local_48);
    puVar7 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_imagesFromPageScan_026ade90);
    puVar1 = local_48;
    puVar4 = PTR_WCRefineLinkParser_026ce168;
    if (((ulong)puVar7 & 1) == 0) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_finishOnCardPlayback_026ae1b0);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_douyinParseSucceeded_cardPlaybac_026adf80,puVar1,IVar2);
      if (((ulong)puVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_finishWithResult_error__026adfc0,local_48,0);
      }
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

