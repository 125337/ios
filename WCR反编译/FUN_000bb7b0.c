// FUN_000bb7b0 @ 000bb7b0

/* WARNING: Removing unreachable block (ram,0x000bbd10) */

void FUN_000bb7b0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *local_30;
  ulong local_28;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = &cf_arrow_up_right_square;
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCPayMainViewControllerV2);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_isEqualToString__0269ccc8,&cf_KindaViewController), (uVar1 & 1) == 0)
     ) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCFinderLiveHomePageViewController);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCTimeLineViewController);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCFinderTimelineTabViewController);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_isEqualToString__0269ccc8,&cf_CameraScanViewController);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WeNoteFlutterViewController);
            if ((uVar1 & 1) == 0) {
              uVar1 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_isEqualToString__0269ccc8,
                         &cf_WCAccountLoginUsersViewController);
              if ((uVar1 & 1) == 0) {
                uVar1 = local_20;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCPluginsViewController);
                if ((uVar1 & 1) == 0) {
                  uVar1 = local_20;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_20,PTR_s_containsString__0269d0b0,&cf_Search);
                  if (((uVar1 & 1) == 0) &&
                     (uVar1 = local_28,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_28,PTR_s_containsString__0269d0b0,&cf_d__), (uVar1 & 1) == 0))
                  {
                    uVar1 = local_20;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_20,PTR_s_isEqualToString__0269ccc8,
                               &cf_WCRefineRootViewController);
                    if (((uVar1 & 1) == 0) &&
                       (uVar1 = local_20,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_20,PTR_s_isEqualToString__0269ccc8,
                                  &cf_WCRefineFloatingTabBarSettingsViewController),
                       (uVar1 & 1) == 0)) {
                      uVar1 = local_20;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_20,PTR_s_isEqualToString__0269ccc8,&cf_ThemeBoxViewController
                                );
                      if ((uVar1 & 1) == 0) {
                        uVar1 = local_20;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_20,PTR_s_isEqualToString__0269ccc8,
                                   &cf_NewHBALLSettingController);
                        if ((uVar1 & 1) == 0) {
                          uVar1 = local_20;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_20,PTR_s_isEqualToString__0269ccc8,
                                     &cf_NewPersonalQRCodeViewController);
                          if ((uVar1 & 1) != 0) {
                            _objc_storeStrong(&local_30,&cf_qrcode);
                          }
                        }
                        else {
                          _objc_storeStrong(&local_30,&cf_wand_and_stars);
                        }
                      }
                      else {
                        _objc_storeStrong(&local_30,&cf_paintbrush);
                      }
                    }
                    else {
                      _objc_storeStrong(&local_30,&cf_gearshape);
                    }
                  }
                  else {
                    _objc_storeStrong(&local_30,&cf_magnifyingglass);
                  }
                }
                else {
                  _objc_storeStrong(&local_30,&cf_archivebox);
                }
              }
              else {
                _objc_storeStrong(&local_30,&cf_person_crop_circle);
              }
            }
            else {
              _objc_storeStrong(&local_30,&cf_square_and_pencil);
            }
          }
          else {
            _objc_storeStrong(&local_30,&cf_qrcode_viewfinder);
          }
        }
        else {
          _objc_storeStrong(&local_30,&cf_play_rectangle);
        }
      }
      else {
        _objc_storeStrong(&local_30,&cf_circle_grid_2x2);
      }
    }
    else {
      _objc_storeStrong(&local_30,&cf_dot_radiowaves_left_and_right);
    }
  }
  else {
    _objc_storeStrong(&local_30,&cf_creditcard);
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

