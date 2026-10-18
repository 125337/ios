// FUN_00174f70 @0x174f70


void FUN_00174f70(double param_1,undefined1 param_2 [16],double param_3,undefined8 param_4,

                 long param_5,int param_6,undefined8 param_7)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  long lVar16;

  long lVar17;

  undefined8 uVar18;

  ulong uVar19;

  long lVar20;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined8 extraout_x1_13;

  undefined8 extraout_x1_14;

  undefined8 extraout_x1_15;

  undefined8 extraout_x1_16;

  undefined8 extraout_x1_17;

  undefined8 extraout_x1_18;

  undefined8 extraout_x1_19;

  undefined8 extraout_x1_20;

  undefined8 extraout_x1_21;

  undefined8 extraout_x1_22;

  undefined8 extraout_x1_23;

  undefined8 extraout_x1_24;

  undefined8 uVar21;

  undefined8 uVar22;

  undefined8 uVar23;

  undefined8 uVar24;

  undefined8 uVar25;

  double dVar26;

  undefined1 auVar27 [16];

  undefined1 auVar28 [16];

  undefined1 auVar29 [16];

  undefined1 auVar30 [16];

  long local_c8;

  undefined8 local_c0;

  undefined8 uStack_b8;

  undefined8 local_b0;

  undefined8 uStack_a8;

  undefined8 local_a0;

  undefined8 uStack_98;

  

  _objc_retain();

  _objc_retain(param_7);

  if ((param_5 == 0) || (lVar2 = FUN_00297fa0(param_5), lVar2 == 0)) {

    lVar2 = 0;

    goto LAB_00175d64;

  }

  FUN_00183c4c(param_7);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    FUN_00183c4c(param_5);

    local_c8 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    _objc_retain(lVar2);

    local_c8 = lVar2;

  }

  _objc_release(lVar2);

  if (((((param_6 == 0) || (DAT_003e8a30 == 0)) || (DAT_003e8a38 == 0)) ||

      ((DAT_003e8a40 == 0 || (iVar1 = FUN_00297820(DAT_003e8a40,extraout_x1,param_5), iVar1 == 0))))

     || ((uVar25 = 0x3fe0000000000000, 0.5 <= ABS(DAT_003e8ad8 - param_1) ||

         ((DAT_003e8a48 == 0 ||

          (iVar1 = FUN_00297820(DAT_003e8a48,extraout_x1_00,local_c8), iVar1 == 0)))))) {

    if (param_6 != 0) {

      FUN_00169444();

    }

    FUN_0016d8a8(param_1);

    uVar25 = _objc_retainAutoreleasedReturnValue();

    FUN_002984e0(param_5);

    uVar21 = _objc_retainAutoreleasedReturnValue();

    _objc_retain();

    if (DAT_003e8c68 != -1) {

      FUN_0028f694();

    }

    iVar1 = FUN_00183d4c(uVar21,DAT_003e8c60);

    _objc_release(uVar21);

    _objc_retain(uVar21);

    if (DAT_003e8c78 != -1) {

      FUN_0028f6a8();

    }

    FUN_00183d4c(uVar21,DAT_003e8c70);

    _objc_release(uVar21);

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar27 = _objc_retainAutoreleasedReturnValue();

    FUN_002924c0(auVar27._0_8_,auVar27._8_8_,&cf_xzyMusicRhythmVibrationEnabled);

    _objc_release(auVar27._0_8_);

    auVar27 = FUN_0029aba0(uVar21,extraout_x1_02,&cf_data_cadis_haptic_bpm);

    uVar22 = auVar27._8_8_;

    if (iVar1 != 0) {

      if (auVar27._0_8_ == 0x7fffffffffffffff) {

        _objc_retain(uVar21);

        if (DAT_003e8c88 != -1) {

          FUN_0028f6bc();

        }

        FUN_00183d4c(uVar21,DAT_003e8c80);

        _objc_release(uVar21);

      }

      _objc_retain(uVar21);

      if (DAT_003e8c98 != -1) {

        FUN_0028f6d0();

      }

      FUN_00183d4c(uVar21,DAT_003e8c90);

      _objc_release(uVar21);

      uVar22 = extraout_x1_03;

    }

    FUN_002a44a0(&cfstringStruct_003ac738,uVar22,

                 &

                 cf__function___if_window___cadisTimeoutSaverInstalled_return_window___cadisTimeoutSaverInstalled_1_varactive_true_nativeST_window_setTimeout_bind_window__nativeCT_window_clearTimeout_bind_window__items____seq_1_functionkeep___returnwindow___cadisAudioRuntime___true_functionmk_fn__returntypeoffn____function__fn_function___try_eval_String_fn___catch_e_____functionstart_id__varr_items_id__if__r__r_native_return_if__active___keep___return_r_native_nativeST_function___varq_items_id__if__q_return_q_native_0_if__active___keep___return_deleteitems_id__try_q_fn_apply_window_q_args__catch_e__nativeST_function___throwe__0____r_delay__functionstop_id__varr_items_id__if_r__r_native__nativeCT_r_native__r_native_0__window_setTimeout_function_fn_delay__varid_seq___items_id___fn_mk_fn__delay_Math_max_0_Number_delay___0__args_Array_prototype_slice_call_arguments_2__native_0__start_id__returnid__window_clearTimeout_function_id__if_items_id___stop_id__deleteitems_id__return_nativeCT_id___window_addEventListener__cadispause__function___active_false_if_keep___return_for_varidinitems_if_Object_prototype_hasOwnProperty_call_items_id__stop_id____window_addEventListener__cadisresume__function___active_true_for_varidinitems_if_Object_prototype_hasOwnProperty_call_items_id__start_id_________

                );

    uVar22 = _objc_retainAutoreleasedReturnValue();

    FUN_00136804();

    FUN_001369e0();

    uVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_00183a94();

    uVar23 = _objc_retainAutoreleasedReturnValue();

    FUN_00136d4c();

    uVar24 = _objc_retainAutoreleasedReturnValue();

    FUN_00183a94();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00136db8();

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00183a94();

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00136e24();

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_00183a94();

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00297c40(&_OBJC_CLASS___UIColor);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00183a94();

    uVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_0029bfa0(&_OBJC_CLASS___UIColor);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_00183a94();

    uVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4fc0(&_OBJC_CLASS___UIColor);

    uVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_00183a94();

    uVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4fe0(&_OBJC_CLASS___UIColor);

    uVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_00183a94();

    auVar27 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar27._8_8_,

                 &

                 cf__root___cadis_width___2fpx___cadis_card_width___2fpx___cadis_card_height___2fpx___cadis_bg______cadis_accent______cadis_selected______cadis_selected_text______cadis_label______cadis_secondary_label______cadis_tertiary_label______cadis_fill_____

                );

    uVar15 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar27._0_8_);

    _objc_release(uVar14);

    _objc_release(uVar13);

    _objc_release(uVar12);

    _objc_release(uVar11);

    _objc_release(uVar10);

    _objc_release(uVar9);

    _objc_release(uVar8);

    _objc_release(uVar7);

    _objc_release(uVar6);

    _objc_release(uVar5);

    _objc_release(uVar4);

    _objc_release(uVar3);

    _objc_release(uVar24);

    _objc_release(uVar23);

    _objc_release(uVar18);

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_04,

                 &

                 cf_<metaname__viewport_content__width_device_width,initial_scale_1,maximum_scale_1,user_scalable_no_><style>html_body_margin_0_padding_0_width_100___height_100___overflow_hidden_background_transparent_color_var___cadis_label__font_family__apple_system_BlinkMacSystemFont__HelveticaNeue__sans_serif__webkit_user_select_none__webkit_touch_callout_none____box_sizing_border_box____<_style><script>window___cadisAudioRuntime____window___cadisFileRuntime____window___cadisAutoHapticRuntime____window___cadisAudioRestoreRuntime____window___cadisHapticDisabled____window___cadisNS______window_CadisData____Object_keys_window_CadisData__forEach_function_k__window_k__window_CadisData_k_____<_script><script>__<_script><script>__<_script>

                );

    uVar18 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar15);

    _objc_retain(param_5);

    _objc_retain(uVar18);

    auVar27 = FUN_0029abc0(param_5,extraout_x1_05,&cf_<html,1);

    if (auVar27._0_8_ == 0x7fffffffffffffff) {

      auVar27 = FUN_0029abc0(param_5,auVar27._8_8_,&cf_<_doctype,1);

      if (auVar27._0_8_ != 0x7fffffffffffffff) goto LAB_00175610;

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar27._8_8_,

                   &cf_<_doctypehtml><html><head>__<_head><body>____<_body><_html>);

      uVar23 = _objc_retainAutoreleasedReturnValue();

    }

    else {

LAB_00175610:

      auVar27 = FUN_00299020(param_5);

      uVar23 = auVar27._0_8_;

      auVar27 = FUN_0029abc0(uVar23,auVar27._8_8_,&cf_<head,1);

      uVar24 = auVar27._8_8_;

      lVar2 = auVar27._0_8_;

      if (lVar2 == 0x7fffffffffffffff) {

LAB_0017566c:

        auVar27 = FUN_0029abc0(uVar23,uVar24,&cf_<_head>,1);

        if (auVar27._0_8_ == 0x7fffffffffffffff) {

          FUN_00297080(uVar23,auVar27._8_8_,uVar18,0);

          uVar24 = extraout_x1_06;

        }

        else {

          FUN_00297080(uVar23,auVar27._8_8_,uVar18,auVar27._0_8_);

          uVar24 = extraout_x1_07;

        }

      }

      else {

        auVar27 = FUN_00297fa0(uVar23);

        auVar27 = FUN_0029abe0(uVar23,auVar27._8_8_,&cf_>,0,lVar2,auVar27._0_8_ - lVar2);

        uVar24 = auVar27._8_8_;

        if (auVar27._0_8_ == 0x7fffffffffffffff) goto LAB_0017566c;

        FUN_00297080(uVar23,uVar24,uVar18,auVar27._0_8_ + 1);

        uVar24 = extraout_x1_08;

      }

      auVar27 = FUN_0029abc0(uVar23,uVar24,&cf_<_body>,5);

      if (auVar27._0_8_ == 0x7fffffffffffffff) {

        FUN_002919e0(uVar23,auVar27._8_8_,&cfstringStruct_003ac7f8);

      }

      else {

        FUN_00297080(uVar23,auVar27._8_8_,&cfstringStruct_003ac7f8,auVar27._0_8_);

      }

    }

    _objc_release(uVar18);

    _objc_release(param_5);

    uVar24 = _objc_alloc_init(&_OBJC_CLASS___WKWebViewConfiguration);

    uVar3 = _objc_alloc_init(&_OBJC_CLASS___WKUserContentController);

    auVar27 = _objc_alloc_init(&objc::class_t::CadisHTMLCalendarTapMessageHandler);

    FUN_00291320(uVar3,auVar27._8_8_,auVar27._0_8_,&cf_cadisCalendarTap);

    _objc_release(auVar27._0_8_);

    auVar27 = _objc_alloc_init(&objc::class_t::CadisHTMLCalendarHapticMessageHandler);

    FUN_00291320(uVar3,auVar27._8_8_,auVar27._0_8_,&cf_cadisHaptic);

    _objc_release(auVar27._0_8_);

    auVar27 = _objc_alloc_init(&objc::class_t::CadisHTMLFilePickerMessageHandler);

    FUN_00291320(uVar3,auVar27._8_8_,auVar27._0_8_,&cf_cadisFilePicker);

    _objc_release(auVar27._0_8_);

    auVar27 = _objc_alloc_init(&objc::class_t::CadisHTMLAudioStoreMessageHandler);

    FUN_00291320(uVar3,auVar27._8_8_,auVar27._0_8_,&cf_cadisAudioStore);

    _objc_release(auVar27._0_8_);

    auVar27 = _objc_alloc_init(&objc::class_t::CadisHTMLLyricsMessageHandler);

    FUN_00291320(uVar3,auVar27._8_8_,auVar27._0_8_,&cf_cadisLyrics);

    _objc_release(auVar27._0_8_);

    auVar27 = _objc_alloc(&_OBJC_CLASS___WKUserScript);

    auVar27 = FUN_00296e40(auVar27._0_8_,auVar27._8_8_,uVar22,0,1);

    FUN_00291460(uVar3,auVar27._8_8_,auVar27._0_8_);

    auVar28 = _objc_alloc(&_OBJC_CLASS___WKUserScript);

    auVar28 = FUN_00296e40(auVar28._0_8_,auVar28._8_8_,&cfstringStruct_003ac6f8,0,0);

    FUN_00291460(uVar3,auVar28._8_8_,auVar28._0_8_);

    if (iVar1 != 0) {

      auVar29 = _objc_alloc(&_OBJC_CLASS___WKUserScript);

      auVar29 = FUN_00296e40(auVar29._0_8_,auVar29._8_8_,

                             &

                             cf__function___if_window_CadisHaptic__window_CadisHaptic___cadisBoost_return_functionh___returnwindow_webkit__window_webkit_messageHandlers__window_webkit_messageHandlers_cadisHaptic_functionn_v_d__v_parseFloat_v__if__isFinite_v__returnd_if_v<0&&d<0)returnd_returnMath_max(0,Math_min(1,v))_functionp(o)_if(window___cadisHapticDisabled___true)return_varm_h()_if(m)m_postMessage(o)_varraw__start:function()_p(_type:_start__)_,pulse:function(i,b,m,hi)_p(_type:_pulse_,intensity:n(i,_45),bass:n(b,_1),mid:n(m,_1),high:n(hi,_1)_)_,kick:function(i,sh)_p(_type:_kick_,intensity:n(i,_7),sharpness:n(sh,_5)_)_,stop:function()_p(_type:_stop__)___window___cadisHapticRaw_raw_varH__start:raw_start,pulse:raw_pulse,kick:raw_kick,stop:raw_stop__window_CadisHaptic_H_varlast_0,seq_0,drop_0_functionc(v,d)_v_parseFloat(v)_returnisFinite(v)_Math_max(0,Math_min(1,v)):d_H___cadisBoost_1_H_start_function()_seq___returnraw_start()__H_stop_function()_seq___if(drop)_clearTimeout(drop)_drop_0_returnraw_stop()__H_pulse_function(i,b,m,hi)_if(window___cadisAutoHapticActive)return_i_c(i,_45)_b_c(b,i)_m_c(m,i*_55)_hi_c(hi,i*_25)_varlow_i<_38_i_low_i*_32:(i<_58_i*_62:(i<_74_Math_min(1,i*1_18):Math_min(1,_90_(i__74)*1_45)))_b_low_b*_38:Math_min(1,b*1_35_i*_18)_m_low_m*_45:Math_min(1,m*1_18)_hi_low_hi*_55:Math_min(1,hi*1_15)_varnow_Date_now()_if(i>_78&&now_last>135)_last_now_varmark_seq_raw_pulse(1,1,Math_max(_58,m),Math_max(_24,hi))_if(drop)clearTimeout(drop)_drop_setTimeout(function()_drop_0_if(mark___seq)raw_pulse(_18,_10,_08,_05)_,55)_raw_pulse(i,b,m,hi)__H_kick_raw_kick__)()_

                             ,0,0);

      FUN_00291460(uVar3,auVar29._8_8_,auVar29._0_8_);

      _objc_release(auVar29._0_8_);

    }

    auVar29 = _objc_alloc(&_OBJC_CLASS___WKUserScript);

    auVar29 = FUN_00296e40(auVar29._0_8_,auVar29._8_8_,

                           &

                           cf__function___if_window_CadisLyrics__window_CadisLyrics___cadisInstalled_return_functionh___returnwindow_webkit__window_webkit_messageHandlers__window_webkit_messageHandlers_cadisLyrics_varlastSent____lastSentAt_0_pendingText____functionanyAudioPlaying___try_varas_document_getElementsByTagName__audio___if__as___as_length_returntrue_for_vari_0_i<as_length_i__)_vara_as[i]_if(a&&_a_paused&&_a_ended)returntrue_returnfalse_catch(e)_returntrue__functionclr()_varm_h()_if(_m)return_lastSent____lastSentAt_Date_now()_pendingText____try_m_postMessage(_type:_clear__)_catch(e)___functionsend(t)_varm_h()_if(_m)return_if(typeoft____string_)t_t__null___:String(t)_if(t_length>0__document_getElementsByTagName__audio___length>0___anyAudioPlaying____pendingText_t_return_varnow_Date_now___if_t___lastSent__now_lastSentAt<2000)return_lastSent_t_lastSentAt_now_try_m_postMessage(_type:_update_,text:t_)_catch(e)___functionattachAudio(a)_if(_a__a___cadisLyricsHooked)return_a___cadisLyricsHooked_1_a_addEventListener(_play_,function()_lastSent____lastSentAt_0_if(pendingText)_vart_pendingText_pendingText____try_send(t)_catch(e)____)_a_addEventListener(_pause_,function()_clr()_)_a_addEventListener(_ended_,function()_clr()_)_functionbootAudio()_varas_document_getElementsByTagName(_audio_)_for(vari_0_i<as_length_i__)attachAudio(as[i])_try_varmo_newMutationObserver(function()_varbs_document_getElementsByTagName(_audio_)_for(varj_0_j<bs_length_j__)attachAudio(bs[j])_)_mo_observe(document_documentElement,_childList:true,subtree:true_)_catch(e)___if(document_readyState____loading_)document_addEventListener(_DOMContentLoaded_,bootAudio)_elsebootAudio()_varL__update:function(t)_send(t)_,clear:clr,__cadisInstalled:1__window_CadisLyrics_L_window_addEventListener(_pagehide_,function()_clr()_)__)()_

                           ,0,0);

    FUN_00291460(uVar3,auVar29._8_8_,auVar29._0_8_);

    FUN_002a23a0(uVar24,extraout_x1_09,uVar3);

    auVar30 = _objc_alloc_init(&objc::class_t::CadisMusicSchemeHandler);

    FUN_002a2300(uVar24,auVar30._8_8_,auVar30._0_8_,&cf_cadismusic);

    _objc_release(auVar30._0_8_);

    FUN_00294220(&_OBJC_CLASS___WKWebsiteDataStore);

    auVar30 = _objc_retainAutoreleasedReturnValue();

    FUN_002a26a0(uVar24,auVar30._8_8_,auVar30._0_8_);

    _objc_release(auVar30._0_8_);

    FUN_0029cae0(uVar24,extraout_x1_10,1);

    FUN_0029faa0(uVar24,extraout_x1_11,0);

    uVar4 = _objc_alloc(&_OBJC_CLASS___WKWebView);

    uVar5 = FUN_00136804();

    auVar30 = FUN_00296bc0(0,0,param_1,uVar5,uVar4,extraout_x1_12,uVar24);

    lVar20 = auVar30._0_8_;

    FUN_002a0420(lVar20,auVar30._8_8_,0);

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    auVar30 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(lVar20,auVar30._8_8_,auVar30._0_8_);

    _objc_release(auVar30._0_8_);

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_0029bee0(lVar20);

    auVar30 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(auVar30._0_8_,auVar30._8_8_,uVar4);

    _objc_release(auVar30._0_8_);

    _objc_release(uVar4);

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    auVar30 = _objc_retainAutoreleasedReturnValue();

    FUN_002a2320(lVar20,auVar30._8_8_,auVar30._0_8_);

    _objc_release(auVar30._0_8_);

    uVar4 = extraout_x1_13;

    if (DAT_003e8b00 == 0) {

      lVar16 = _objc_opt_new(&objc::class_t::CadisHTMLUIDelegate);

      lVar2 = DAT_003e8b00;

      DAT_003e8b00 = lVar16;

      _objc_release(lVar2);

      uVar4 = extraout_x1_14;

    }

    FUN_002a22a0(lVar20,uVar4,DAT_003e8b00);

    uVar4 = extraout_x1_15;

    if (DAT_003e8b08 == 0) {

      lVar16 = _objc_opt_new(&objc::class_t::CadisHTMLNavigationDelegate);

      lVar2 = DAT_003e8b08;

      DAT_003e8b08 = lVar16;

      _objc_release(lVar2);

      uVar4 = extraout_x1_16;

    }

    FUN_0029fee0(lVar20,uVar4,DAT_003e8b08);

    FUN_0029bee0(lVar20);

    auVar30 = _objc_retainAutoreleasedReturnValue();

    FUN_002a0f80(auVar30._0_8_,auVar30._8_8_,0);

    _objc_release(auVar30._0_8_);

    FUN_0029bee0(lVar20);

    auVar30 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d120(auVar30._0_8_,auVar30._8_8_,0);

    _objc_release(auVar30._0_8_);

    FUN_0029bee0(lVar20);

    auVar30 = _objc_retainAutoreleasedReturnValue();

    FUN_002a15c0(auVar30._0_8_,auVar30._8_8_,0);

    _objc_release(auVar30._0_8_);

    FUN_0029bee0(lVar20);

    auVar30 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1580(auVar30._0_8_,auVar30._8_8_,0);

    _objc_release(auVar30._0_8_);

    FUN_0029bee0(lVar20);

    auVar30 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d6a0(auVar30._0_8_,auVar30._8_8_,2);

    _objc_release(auVar30._0_8_);

    FUN_00290c20(&_OBJC_CLASS___NSURL,extraout_x1_17,&cf_https___cadis_calendar_local_);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(lVar20,PTR_LOOP_003e6dd0,uVar23,3);

    _objc_setAssociatedObject(lVar20,PTR_LOOP_003e6dd8,uVar4,1);

    FUN_00298180(lVar20,extraout_x1_18,uVar23,uVar4);

    _objc_unsafeClaimAutoreleasedReturnValue();

    uVar5 = FUN_00136804();

    _objc_alloc(&_OBJC_CLASS___UIView);

    lVar2 = FUN_00296b80(0,0,param_1,uVar5);

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    auVar30 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(lVar2,auVar30._8_8_,auVar30._0_8_);

    _objc_release(auVar30._0_8_);

    FUN_0029d4a0(lVar2,extraout_x1_19,0);

    FUN_0029ce00(lVar2,extraout_x1_20,0);

    FUN_002925a0(lVar2);

    FUN_0029e5e0(lVar20);

    FUN_0029ce00(lVar20,extraout_x1_21,0x12);

    FUN_00291380(lVar2,extraout_x1_22,lVar20);

    if (param_6 != 0) {

      _objc_retain(lVar20);

      lVar16 = DAT_003e8a30;

      DAT_003e8a30 = lVar20;

      _objc_release(lVar16);

      _objc_retain(lVar2);

      lVar16 = DAT_003e8a38;

      DAT_003e8a38 = lVar2;

      _objc_release(lVar16);

      lVar17 = FUN_002937a0(param_5);

      lVar16 = DAT_003e8a40;

      DAT_003e8a40 = lVar17;

      _objc_release(lVar16);

      DAT_003e8ad8 = param_1;

      lVar17 = FUN_002937a0(local_c8);

      lVar16 = DAT_003e8a48;

      DAT_003e8a48 = lVar17;

      _objc_release(lVar16);

      uVar6 = FUN_002937a0(uVar25);

      uVar5 = DAT_003e8a50;

      DAT_003e8a50 = uVar6;

      _objc_release(uVar5);

      FUN_001836f8();

      if (DAT_003e8a58 != 0) {

        FUN_00291380(DAT_003e8a58,extraout_x1_23,lVar2);

      }

    }

    _objc_release(uVar4);

    _objc_release(lVar20);

    _objc_release(auVar29._0_8_);

    _objc_release(auVar28._0_8_);

    _objc_release(auVar27._0_8_);

    _objc_release(uVar3);

    _objc_release(uVar24);

    _objc_release(uVar23);

    _objc_release(uVar18);

    _objc_release(uVar22);

    _objc_release(uVar21);

    _objc_release(uVar25);

  }

  else if (DAT_003e8a88 == '\x01') {

    FUN_0016c528();

    uVar25 = _objc_alloc(&_OBJC_CLASS___UIView);

    uVar21 = FUN_00136804();

    lVar2 = FUN_00296b80(0,0,param_1,uVar21,uVar25);

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    auVar27 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(lVar2,auVar27._8_8_,auVar27._0_8_);

    _objc_release(auVar27._0_8_);

    FUN_002a23c0(lVar2,extraout_x1_01,0);

    _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6dc0,PTR____kCFBooleanTrue_00388320,1);

  }

  else {

    FUN_0016968c(1);

    FUN_0016d8a8(param_1);

    auVar27 = _objc_retainAutoreleasedReturnValue();

    uVar21 = auVar27._0_8_;

    auVar27 = FUN_00297820(uVar21,auVar27._8_8_,DAT_003e8a50);

    if ((auVar27._0_8_ & 1) == 0) {

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar27._8_8_,

                   &

                   cf_try_window_CadisData____Object_keys_window_CadisData__forEach_function_k__try_window_k__window_CadisData_k__catch_e______if_typeofwindow_CadisFit____function__window_CadisFit___catch_e___

                  );

      auVar27 = _objc_retainAutoreleasedReturnValue();

      FUN_00294e20(DAT_003e8a30,auVar27._8_8_,auVar27._0_8_,0);

      uVar18 = FUN_002937a0(uVar21);

      uVar22 = DAT_003e8a50;

      DAT_003e8a50 = uVar18;

      _objc_release(uVar22);

      _objc_release(auVar27._0_8_);

    }

    if (DAT_003e8a38 == 0) {

      uStack_a8 = 0;

      local_b0 = 0;

      uStack_98 = 0;

      local_a0 = 0;

      uStack_b8 = 0;

      local_c0 = 0;

    }

    else {

      FUN_002a56a0(&local_c0);

    }

    auVar27 = _CGAffineTransformIsIdentity(&local_c0);

    if ((auVar27._0_8_ & 1) == 0) {

      uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 8);

      local_c0 = *(undefined8 *)PTR__CGAffineTransformIdentity_00388998;

      uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x18);

      uVar25 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x10);

      uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x28);

      local_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x20);

      local_b0 = uVar25;

      FUN_002a21c0(DAT_003e8a38,auVar27._8_8_,&local_c0);

    }

    uVar22 = FUN_00136804();

    FUN_00295600(DAT_003e8a38);

    uVar19 = _CGRectEqualToRect();

    if ((uVar19 & 1) == 0) {

      uVar25 = 0;

      FUN_0029e5e0(0,0,param_1,uVar22,DAT_003e8a38);

      param_3 = param_1;

      param_4 = uVar22;

    }

    uVar23 = FUN_00295600(DAT_003e8a30);

    uVar22 = uVar25;

    dVar26 = param_3;

    uVar18 = param_4;

    uVar24 = FUN_002925a0(DAT_003e8a38);

    uVar19 = _CGRectEqualToRect(uVar23,uVar25,param_3,param_4,uVar24,uVar22,dVar26,uVar18);

    if ((uVar19 & 1) == 0) {

      FUN_002925a0(DAT_003e8a38);

      FUN_0029e5e0(DAT_003e8a30);

    }

    FUN_002a4880(DAT_003e8a30);

    lVar20 = _objc_retainAutoreleasedReturnValue();

    lVar2 = DAT_003e8a38;

    _objc_release();

    if (lVar20 != lVar2) {

      FUN_00291380(DAT_003e8a38,extraout_x1_24,DAT_003e8a30);

    }

    lVar2 = DAT_003e8a38;

    _objc_retain(DAT_003e8a38);

    _objc_release(uVar21);

  }

  _objc_release(local_c8);

LAB_00175d64:

  _objc_release(param_7);

  _objc_release(param_5);

  _objc_autoreleaseReturnValue(lVar2);

  return;

}




