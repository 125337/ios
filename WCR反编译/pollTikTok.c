// pollTikTok @ 01076be4

/* Function Stack Size: 0x10 bytes */

void WCRXHSWebExtractSession::pollTikTok(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  IVar2 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pollCount_026ae170);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPollCount__026ae178,IVar2 + 1);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pollCount_026ae170);
  if ((long)IVar2 < 0x1b) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &
               cf__function___try_functionisItem_o__if__o__typeofo____object__returnfalse_varv_o_video_return___v__typeofv____object____v_playAddr__v_playAddrH264__v_bitrateInfo____functionfind_o_d_seen__if__o__typeofo____object___d>10__seen_indexOf_o_>_0_returnnull_seen_push_o__if_isItem_o__returno_if_Array_isArray_o___for_vari_0_i<o_length_i__)_varr_find(o[i],d_1,seen)_if(r)returnr___else_for(varkino)_varr_find(o[k],d_1,seen)_if(r)returnr___returnnull__varroots_[]_(window___WCR_DY_RESPONSES__[])_slice()_reverse()_forEach(function(x)_try_roots_push(JSON_parse(x_body))__catch(e)___)_vars_document_getElementById(___UNIVERSAL_DATA_FOR_REHYDRATION___)_if(s)_try_roots_push(JSON_parse(s_textContent))__catch(e)___roots_push(window___UNIVERSAL_DATA_FOR_REHYDRATION__,window_SIGI_STATE)_varitem_null_for(vari_0_i<roots_length&&_item_i__)item_find(roots[i],0,[])_vare_document_querySelector(_video_)_varsrc_(e&&(e_currentSrc__e_src__e_getAttribute(_src_)))_____if(___https_:_i_test(src))src____vart_document_querySelector(_meta[property__og:title_]_)_returnJSON_stringify(_ok:__(item__src),item:item,video:src,title:(t&&t_content)__document_title____,ready:document_readyState,captured:(window___WCR_DY_RESPONSES__[])_length,page:location_href_)__catch(e)_returnJSON_stringify(_ok:false,err:String(e)_)___)()
    ;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    pcVar1 = local_28;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_01076d6c;
    local_38 = &DAT_02584cd0;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_evaluateJavaScript_completionHan_026a12f0,pcVar1,&local_50);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

