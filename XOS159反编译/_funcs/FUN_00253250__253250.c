// FUN_00253250 @0x253250


void FUN_00253250(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,long param_5)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  cfstringStruct *pcVar9;

  cfstringStruct *pcVar10;

  cfstringStruct *pcVar11;

  cfstringStruct *pcVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  cfstringStruct *pcVar16;

  undefined8 uVar17;

  undefined8 uVar18;

  undefined8 uVar19;

  undefined8 uVar20;

  undefined8 uVar21;

  undefined8 uVar22;

  undefined8 uVar23;

  undefined8 uVar24;

  undefined8 uVar25;

  undefined8 uVar26;

  undefined8 uVar27;

  undefined8 extraout_x1;

  ulong extraout_x1_00;

  ulong uVar28;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  long lVar29;

  long lVar30;

  cfstringStruct *pcVar31;

  undefined1 auVar32 [16];

  undefined1 auVar33 [16];

  undefined1 auVar34 [16];

  cfstringStruct *local_e0;

  undefined8 uVar3;

  

  _objc_retain();

  _objc_retain(param_5);

  iVar2 = FUN_002365a4();

  FUN_00291da0(&_OBJC_CLASS___NSMutableArray,extraout_x1,4);

  auVar32 = _objc_retainAutoreleasedReturnValue();

  uVar28 = auVar32._8_8_;

  uVar3 = auVar32._0_8_;

  if (param_5 != 0) {

    if (0 < param_2) {

      lVar30 = 0;

      do {

        if (iVar2 == 0) {

          auVar32._8_8_ = 0;

          auVar32._0_8_ = uVar28;

          auVar32 = auVar32 << 0x40;

        }

        else {

          FUN_00239d20(lVar30,param_5);

          auVar32 = _objc_retainAutoreleasedReturnValue();

        }

        pcVar9 = auVar32._0_8_;

        pcVar31 = &cf___;

        if (pcVar9 != (cfstringStruct *)0x0) {

          pcVar31 = pcVar9;

        }

        FUN_00291240(uVar3,auVar32._8_8_,pcVar31);

        _objc_release(pcVar9);

        lVar30 = lVar30 + 1;

        uVar28 = extraout_x1_00;

      } while (param_2 != lVar30);

    }

    if (iVar2 != 0) {

      FUN_0023aa8c(param_5);

      auVar33 = _objc_retainAutoreleasedReturnValue();

      goto LAB_00253344;

    }

  }

  auVar33._8_8_ = 0;

  auVar33._0_8_ = uVar28;

  auVar33 = auVar33 << 0x40;

LAB_00253344:

  pcVar31 = auVar33._0_8_;

  FUN_00291da0(&_OBJC_CLASS___NSMutableArray,auVar33._8_8_,4);

  auVar32 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar32._0_8_;

  FUN_00291da0(&_OBJC_CLASS___NSMutableArray,auVar32._8_8_,4);

  auVar32 = _objc_retainAutoreleasedReturnValue();

  uVar5 = auVar32._0_8_;

  FUN_00291da0(&_OBJC_CLASS___NSMutableArray,auVar32._8_8_,4);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  if (0 < param_2) {

    lVar30 = 0;

    do {

      FUN_0023b9f4(lVar30,param_2,0,param_4);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_00254464();

      auVar32 = _objc_retainAutoreleasedReturnValue();

      FUN_00291240(uVar4,auVar32._8_8_,auVar32._0_8_);

      _objc_release(auVar32._0_8_);

      FUN_0023b9f4(lVar30,param_2,1,param_4);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_00254464();

      auVar32 = _objc_retainAutoreleasedReturnValue();

      FUN_00291240(uVar5,auVar32._8_8_,auVar32._0_8_);

      _objc_release(auVar32._0_8_);

      FUN_00237f98(lVar30);

      auVar32 = _objc_retainAutoreleasedReturnValue();

      pcVar10 = auVar32._0_8_;

      pcVar9 = &cf___;

      if (pcVar10 != (cfstringStruct *)0x0) {

        pcVar9 = pcVar10;

      }

      FUN_00291240(uVar6,auVar32._8_8_,pcVar9);

      _objc_release(pcVar10);

      _objc_release(uVar8);

      _objc_release(uVar7);

      lVar30 = lVar30 + 1;

    } while (param_2 != lVar30);

  }

  if (param_2 <= (long)param_3 || 0x7fffffffffffffff < param_3) {

    param_3 = 0;

  }

  FUN_0023b9f4(param_3,param_2,1,param_4);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00254464();

  pcVar9 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  _objc_release(uVar7);

  FUN_00237604();

  pcVar10 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  FUN_0023bed0(param_4);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00254464();

  pcVar11 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  FUN_00238d18();

  lVar30 = _objc_retainAutoreleasedReturnValue();

  if (lVar30 == 0) {

    DAT_003eb318 = 0;

    _objc_release();

    pcVar1 = DAT_003eb320;

    DAT_003eb320 = (cfstringStruct *)0x0;

    _objc_release(pcVar1);

    local_e0 = &cf___;

  }

  else if ((lVar30 == DAT_003eb318) && (DAT_003eb320 != (cfstringStruct *)0x0)) {

    local_e0 = DAT_003eb320;

    _objc_retain();

  }

  else {

    FUN_00254464(lVar30);

    local_e0 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    _objc_retain(lVar30);

    lVar29 = DAT_003eb318;

    DAT_003eb318 = lVar30;

    _objc_release(lVar29);

    _objc_retain(local_e0);

    pcVar1 = DAT_003eb320;

    DAT_003eb320 = local_e0;

    _objc_release(pcVar1);

  }

  FUN_00239254();

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00254554();

  pcVar12 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  _objc_release(uVar8);

  _objc_retain(param_1);

  _objc_retain(uVar3);

  _objc_retain(uVar4);

  _objc_retain(uVar5);

  _objc_retain(uVar6);

  _objc_retain(pcVar10);

  _objc_retain(pcVar9);

  _objc_retain(pcVar11);

  _objc_retain(pcVar31);

  _objc_retain(local_e0);

  _objc_retain(pcVar12);

  pcVar1 = &cf__ffffff;

  if ((int)param_4 == 0) {

    pcVar1 = &cf__000000;

  }

  _objc_retain(pcVar1);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,

               &

               cf__root___dock_width___0fpx___dock_height___0fpx___dock_bg______dock_label______dock_accent______dock_selected______dock_selected_text__fff_

              );

  auVar32 = _objc_retainAutoreleasedReturnValue();

  FUN_00291da0(&_OBJC_CLASS___NSMutableArray,auVar32._8_8_,4);

  auVar33 = _objc_retainAutoreleasedReturnValue();

  uVar8 = auVar33._8_8_;

  uVar13 = auVar33._0_8_;

  if (0 < param_2) {

    lVar29 = 0;

    do {

      auVar33 = FUN_00293860(uVar3);

      auVar34._8_8_ = auVar33._8_8_;

      auVar34._0_8_ = &cf___;

      if (lVar29 < auVar33._0_8_) {

        FUN_00299500(uVar3,auVar33._8_8_,lVar29);

        auVar34 = _objc_retainAutoreleasedReturnValue();

      }

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar34._8_8_,&cf_____);

      auVar33 = _objc_retainAutoreleasedReturnValue();

      FUN_00291240(uVar13,auVar33._8_8_,auVar33._0_8_);

      _objc_release(auVar33._0_8_);

      _objc_release(auVar34._0_8_);

      lVar29 = lVar29 + 1;

      uVar8 = extraout_x1_02;

    } while (param_2 != lVar29);

  }

  FUN_00293240(uVar13,uVar8,&cf__);

  auVar33 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar33._8_8_,&cf_____);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar33._0_8_);

  FUN_00291da0(&_OBJC_CLASS___NSMutableArray,extraout_x1_03,4);

  auVar33 = _objc_retainAutoreleasedReturnValue();

  uVar8 = auVar33._8_8_;

  uVar15 = auVar33._0_8_;

  if (0 < param_2) {

    lVar29 = 0;

    do {

      auVar33 = FUN_00293860(uVar4);

      pcVar16 = &cf___;

      if (lVar29 < auVar33._0_8_) {

        FUN_00299500(uVar4,auVar33._8_8_,lVar29);

        pcVar16 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      }

      FUN_00254388(pcVar16);

      auVar33 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar33._8_8_,&cf_____);

      auVar34 = _objc_retainAutoreleasedReturnValue();

      FUN_00291240(uVar15,auVar34._8_8_,auVar34._0_8_);

      _objc_release(auVar34._0_8_);

      _objc_release(auVar33._0_8_);

      _objc_release(pcVar16);

      lVar29 = lVar29 + 1;

      uVar8 = extraout_x1_04;

    } while (param_2 != lVar29);

  }

  FUN_00293240(uVar15,uVar8,&cf__);

  auVar33 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar33._8_8_,&cf_____);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar33._0_8_);

  FUN_00291da0(&_OBJC_CLASS___NSMutableArray,extraout_x1_05,4);

  auVar33 = _objc_retainAutoreleasedReturnValue();

  uVar8 = auVar33._8_8_;

  uVar18 = auVar33._0_8_;

  if (0 < param_2) {

    lVar29 = 0;

    do {

      auVar33 = FUN_00293860(uVar5);

      pcVar16 = &cf___;

      if (lVar29 < auVar33._0_8_) {

        FUN_00299500(uVar5,auVar33._8_8_,lVar29);

        pcVar16 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      }

      FUN_00254388(pcVar16);

      auVar33 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar33._8_8_,&cf_____);

      auVar34 = _objc_retainAutoreleasedReturnValue();

      FUN_00291240(uVar18,auVar34._8_8_,auVar34._0_8_);

      _objc_release(auVar34._0_8_);

      _objc_release(auVar33._0_8_);

      _objc_release(pcVar16);

      lVar29 = lVar29 + 1;

      uVar8 = extraout_x1_06;

    } while (param_2 != lVar29);

  }

  FUN_00293240(uVar18,uVar8,&cf__);

  auVar33 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar33._8_8_,&cf_____);

  uVar19 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar33._0_8_);

  FUN_00291da0(&_OBJC_CLASS___NSMutableArray,extraout_x1_07,4);

  auVar33 = _objc_retainAutoreleasedReturnValue();

  uVar8 = auVar33._8_8_;

  uVar20 = auVar33._0_8_;

  if (0 < param_2) {

    lVar29 = 0;

    do {

      auVar33 = FUN_00293860(uVar6);

      pcVar16 = &cf___;

      if (lVar29 < auVar33._0_8_) {

        FUN_00299500(uVar6,auVar33._8_8_,lVar29);

        pcVar16 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      }

      FUN_00254388(pcVar16);

      auVar33 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar33._8_8_,&cf_____);

      auVar34 = _objc_retainAutoreleasedReturnValue();

      FUN_00291240(uVar20,auVar34._8_8_,auVar34._0_8_);

      _objc_release(auVar34._0_8_);

      _objc_release(auVar33._0_8_);

      _objc_release(pcVar16);

      lVar29 = lVar29 + 1;

      uVar8 = extraout_x1_08;

    } while (param_2 != lVar29);

  }

  FUN_00293240(uVar20,uVar8,&cf__);

  auVar33 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar33._8_8_,&cf_____);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar33._0_8_);

  pcVar16 = &cf___;

  if (pcVar10 != (cfstringStruct *)0x0) {

    pcVar16 = pcVar10;

  }

  FUN_00254388(pcVar16);

  uVar21 = _objc_retainAutoreleasedReturnValue();

  pcVar16 = &cf___;

  if (pcVar9 != (cfstringStruct *)0x0) {

    pcVar16 = pcVar9;

  }

  FUN_00254388(pcVar16);

  uVar22 = _objc_retainAutoreleasedReturnValue();

  pcVar16 = &cf___;

  if (pcVar11 != (cfstringStruct *)0x0) {

    pcVar16 = pcVar11;

  }

  FUN_00254388(pcVar16);

  uVar23 = _objc_retainAutoreleasedReturnValue();

  pcVar16 = &cf___;

  if (pcVar31 != (cfstringStruct *)0x0) {

    pcVar16 = pcVar31;

  }

  FUN_00254388(pcVar16);

  uVar24 = _objc_retainAutoreleasedReturnValue();

  pcVar16 = &cf___;

  if (local_e0 != (cfstringStruct *)0x0) {

    pcVar16 = local_e0;

  }

  FUN_00254388(pcVar16);

  uVar25 = _objc_retainAutoreleasedReturnValue();

  pcVar16 = &cf__ffffff;

  if (pcVar12 != (cfstringStruct *)0x0) {

    pcVar16 = pcVar12;

  }

  FUN_00254388(pcVar16);

  uVar26 = _objc_retainAutoreleasedReturnValue();

  FUN_00254388(&cf__ff3b30);

  auVar33 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar33._8_8_,

               &

               cf_window_dockData__width___0f_height___0f_tabCount__ld_selectedIndex__ld_isDarkMode____badges____icons____selectedIcons____names____searchText______menuIcon______searchIcon______menuBadge______iconSize___0f_badgeBgImage______badgeTextColor______badgeBgColor______tabLabelHidden_____

              );

  uVar27 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar33._0_8_);

  _objc_release(uVar26);

  _objc_release(uVar25);

  _objc_release(uVar24);

  _objc_release(uVar23);

  _objc_release(uVar22);

  _objc_release(uVar21);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_09,

               &

               cf_<_DOCTYPEhtml><html><head><metacharset__utf_8_><metaname__viewport_content__width_device_width,initial_scale_1,user_scalable_no_><style>___webkit_user_drag_none__webkit_touch_callout_none__img__webkit_user_drag_none__webkit_touch_callout_none__webkit_user_select_none_user_select_none__<_style><style>__<_style><_head><bodystyle__margin:0_padding:0_overflow:hidden_background:transparent__webkit_touch_callout:none__webkit_user_select:none__webkit_user_drag:none__><script>__<_script><script>__<_script>__<script>if_window_dockApplyBadgeTheme_window_dockApplyBadgeTheme_window_dockData_badgeBgImage_window_dockData_badgeTextColor_window_dockData_badgeBgColor__<_script><_body><_html>

              );

  uVar21 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar27);

  _objc_release(uVar8);

  _objc_release(uVar20);

  _objc_release(uVar19);

  _objc_release(uVar18);

  _objc_release(uVar17);

  _objc_release(uVar15);

  _objc_release(uVar14);

  _objc_release(uVar13);

  _objc_release(auVar32._0_8_);

  _objc_release(pcVar1);

  _objc_release(pcVar12);

  _objc_release(local_e0);

  _objc_release(pcVar31);

  _objc_release(pcVar11);

  _objc_release(pcVar9);

  _objc_release(pcVar10);

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(param_1);

  _objc_release(pcVar12);

  _objc_release(lVar30);

  _objc_release(local_e0);

  _objc_release(pcVar11);

  _objc_release(uVar7);

  _objc_release(pcVar10);

  _objc_release(pcVar9);

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_release(pcVar31);

  _objc_release(uVar3);

  _objc_release(param_5);

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar21);

  return;

}




