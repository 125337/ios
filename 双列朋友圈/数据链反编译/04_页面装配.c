// ============================================================
// WCMoments 数据链反编译 · 04_页面装配
// WKWebView/分段控件/手势/刷新控件装配
// 函数数: 16
// ============================================================

// ---- viewDidLoad @0x60c0 ----


/* Function Stack Size: 0x10 bytes */



void WCMMomentsSettingsController::viewDidLoad(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 local_40;

  ID local_30;

  class_t *local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = &objc::class_t::WCMMomentsSettingsController;

  local_30 = param_1;

  local_20 = param_2;

  local_18 = param_1;

  _objc_msgSendSuper2(&local_30,"viewDidLoad");

  _objc_msgSend_setTitle_(local_18,local_40,&cf_SsgSW);

  _objc_msgSend_systemGroupedBackgroundColor(&_OBJC_CLASS___UIColor,local_40);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_tableView(local_18,local_40);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBackgroundColor_(uVar2,local_40,uVar1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_navigationItem(local_18,local_40);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setLargeTitleDisplayMode_(uVar1,local_40,2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return;

}






// ---- viewDidLoad @0x9d30 ----


/* Function Stack Size: 0x10 bytes */



void WCMInboxController::viewDidLoad(ID param_1,SEL param_2)



{

  ID IVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ulong uVar5;

  undefined8 uVar6;

  undefined8 local_d0;

  undefined8 local_c0;

  undefined8 local_b8;

  undefined8 local_b0;

  undefined8 uStack_a8;

  undefined8 local_a0;

  undefined8 uStack_98;

  undefined8 local_88;

  undefined8 uStack_80;

  undefined8 local_78;

  undefined8 uStack_70;

  undefined8 local_68;

  undefined8 local_60;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 local_48;

  ID local_40;

  class_t *local_38;

  SEL local_30;

  ID local_28;

  

  local_38 = &objc::class_t::WCMInboxController;

  local_40 = param_1;

  local_30 = param_2;

  local_28 = param_1;

  _objc_msgSendSuper2(&local_40,"viewDidLoad");

  _objc_msgSend_setTitle_(local_28,local_d0,&cf_mo_);

  _Service(&cf_WCFacade);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setFacade_(local_28,local_d0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _Context();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _Call(uVar2,&cf_userName,PTR____NSArray0__struct_00110718);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _Text();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setAccount_(local_28,local_d0);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_setAssociatedObject(local_28,&_MessageStyleKey,PTR____kCFBooleanTrue_00110730,1);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UISegmentedControl);

  uVar2 = _objc_msgSend_initWithItems_(uVar2,local_d0,&PTR__OBJC_CLASS___NSConstantArray_0010f8d8);

  _objc_msgSend_setCategories_(local_28,local_d0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_categories(local_28,local_d0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setSelectedSegmentIndex_(uVar2,local_d0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_categories(local_28,local_d0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addTarget_action_forControlEvents_(uVar2,local_d0,local_28,"changeCategory");

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UIView);

  uVar3 = 0;

  uVar4 = 0x4074000000000000;

  uVar6 = 0x404f000000000000;

  local_68 = _CGRectMake(0);

  local_60 = uVar3;

  local_58 = uVar4;

  local_50 = uVar6;

  local_48 = _objc_msgSend_initWithFrame_(local_68,uVar3,uVar4,uVar6,uVar2,local_d0);

  uVar2 = 0x4028000000000000;

  uVar3 = 0x4072000000000000;

  uVar4 = 0x4042000000000000;

  local_88 = _CGRectMake(0x4030000000000000);

  uStack_80 = uVar2;

  local_78 = uVar3;

  uStack_70 = uVar4;

  _objc_msgSend_categories(local_28,local_d0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uStack_a8 = uStack_80;

  local_b0 = local_88;

  uStack_98 = uStack_70;

  local_a0 = local_78;

  _objc_msgSend_setFrame_(local_88,uStack_80,local_78,uStack_70,uVar2,local_d0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_categories(local_28,local_d0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setAutoresizingMask_(uVar2,local_d0,2);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = local_48;

  _objc_msgSend_categories(local_28,local_d0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addSubview_(uVar2,local_d0);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  uVar2 = local_48;

  _objc_msgSend_tableView(local_28,local_d0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTableHeaderView_(uVar3,local_d0,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_msgSend_tableView(local_28,local_d0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setRowHeight_(0x405a800000000000,uVar2,local_d0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_tableView(local_28,local_d0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setSeparatorStyle_(uVar2,local_d0,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_systemGroupedBackgroundColor(&_OBJC_CLASS___UIColor,local_d0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_tableView(local_28,local_d0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBackgroundColor_(uVar3,local_d0,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___UIRefreshControl);

  _objc_msgSend_setRefreshControl_(local_28,local_d0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_refreshControl(local_28,local_d0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addTarget_action_forControlEvents_(uVar2,local_d0,local_28,"loadMessages",0x1000);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _NSClassFromString(&cf_WCCommentListViewController);

  local_b8 = uVar2;

  uVar3 = _objc_opt_class(&_OBJC_CLASS___UIViewController);

  uVar5 = _objc_msgSend_isSubclassOfClass_(uVar2,local_d0,uVar3);

  if ((uVar5 & 1) != 0) {

    uVar2 = _objc_alloc_init(local_b8);

    _objc_msgSend_setNativeRouter_(local_28,local_d0);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    IVar1 = local_28;

    _objc_msgSend_nativeRouter(local_28,local_d0);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addChildViewController_(IVar1,local_d0);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_nativeRouter(local_28,local_d0);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_didMoveToParentViewController_(uVar2,local_d0,local_28);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  uVar2 = _objc_alloc(&_OBJC_CLASS___UIPanGestureRecognizer);

  local_c0 = _objc_msgSend_initWithTarget_action_(uVar2,local_d0,local_28,"swipeCategory:");

  _objc_msgSend_setDelegate_(local_c0,local_d0,local_28);

  _objc_msgSend_setMaximumNumberOfTouches_(local_c0,local_d0,1);

  _objc_msgSend_setCancelsTouchesInView_(local_c0,local_d0,0);

  _objc_msgSend_tableView(local_28,local_d0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addGestureRecognizer_(uVar2,local_d0,local_c0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_loadMessages(local_28,local_d0);

  _StyleMessageController(local_28);

  _objc_storeStrong(&local_c0);

  _objc_storeStrong(&local_48,0);

  return;

}






// ---- viewDidLoad @0x100b8 ----


/* Function Stack Size: 0x10 bytes */



void WCMVideoComments::viewDidLoad(ID param_1,SEL param_2)



{

  ID IVar1;

  undefined8 uVar2;

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

  undefined8 uVar16;

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

  undefined8 uVar28;

  undefined8 uVar29;

  undefined8 uVar30;

  undefined8 uVar31;

  undefined8 uVar32;

  undefined8 uVar33;

  undefined8 uVar34;

  undefined8 uVar35;

  undefined8 uVar36;

  undefined8 uVar37;

  undefined8 uVar38;

  undefined8 uVar39;

  undefined8 uVar40;

  undefined8 uVar41;

  undefined8 uVar42;

  undefined8 uVar43;

  undefined8 uVar44;

  undefined8 uVar45;

  undefined8 uVar46;

  undefined8 uVar47;

  undefined8 uVar48;

  undefined8 uVar49;

  undefined8 uVar50;

  undefined8 uVar51;

  undefined8 uVar52;

  undefined8 uVar53;

  undefined8 uVar54;

  undefined8 uVar55;

  undefined8 uVar56;

  undefined8 uVar57;

  undefined8 uVar58;

  undefined8 uVar59;

  undefined8 uVar60;

  undefined8 uVar61;

  undefined8 uVar62;

  undefined8 uVar63;

  undefined8 uVar64;

  undefined8 uVar65;

  undefined8 uVar66;

  undefined8 uVar67;

  undefined8 uVar68;

  undefined8 uVar69;

  undefined8 uVar70;

  undefined8 uVar71;

  long lVar72;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 uVar73;

  undefined8 in_d3;

  undefined8 uVar74;

  undefined8 uVar75;

  undefined8 local_198;

  undefined8 local_168;

  undefined8 local_160;

  undefined8 local_158;

  undefined8 local_150;

  undefined8 local_148;

  undefined8 local_140;

  undefined8 local_138;

  undefined8 local_130;

  undefined8 local_108;

  undefined8 local_e8;

  ID local_e0;

  class_t *local_d8;

  SEL local_d0;

  ID local_c8;

  undefined8 local_c0;

  undefined8 local_b8;

  undefined8 local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 local_98;

  undefined8 local_90;

  undefined8 local_88;

  undefined8 local_80;

  undefined8 local_78;

  undefined8 local_70;

  undefined8 local_68;

  undefined8 local_60;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_d8 = &objc::class_t::WCMVideoComments;

  local_e0 = param_1;

  local_d0 = param_2;

  local_c8 = param_1;

  _objc_msgSendSuper2(&local_e0,"viewDidLoad");

  _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_c8,local_198);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBackgroundColor_(uVar3,local_198,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);

  _objc_msgSend_effectWithStyle_(&_OBJC_CLASS___UIBlurEffect,local_198,8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  local_e8 = _objc_msgSend_initWithEffect_(uVar2,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_msgSend_view(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_130 = _objc_msgSend_bounds(uVar2,local_198);

  local_108 = local_130;

  _objc_msgSend_setFrame_(local_130,in_d1,in_d2,in_d3,local_e8,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_setAutoresizingMask_(local_e8,local_198);

  _objc_msgSend_setUserInteractionEnabled_(local_e8,local_198,0);

  _objc_msgSend_view(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addSubview_(uVar2,local_198,local_e8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UIView);

  uVar3 = 0x4020000000000000;

  uVar73 = 0x4042000000000000;

  uVar74 = 0x4014000000000000;

  local_158 = _CGRectMake();

  local_150 = uVar3;

  local_148 = uVar73;

  local_140 = uVar74;

  local_138 = _objc_msgSend_initWithFrame_(local_158,uVar3,uVar73,uVar74,uVar2,local_198);

  _objc_msgSend_tertiaryLabelColor(&_OBJC_CLASS___UIColor,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBackgroundColor_(local_138,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_layer(local_138,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setCornerRadius_(0x4004000000000000,uVar2,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_setTag_(local_138,local_198,0x2c5);

  _objc_msgSend_view(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addSubview_(uVar2,local_198,local_138);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _Context();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _Call(uVar2,&cf_userName,PTR____NSArray0__struct_00110718);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _Text();

  uVar73 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setAccount_(local_c8,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar73);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _Service(&cf_WCFacade);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setFacade_(local_c8,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___UILabel);

  _objc_msgSend_setHeading_(local_c8,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_systemFontOfSize_weight_

            (0x402e000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_001100d0,

             &_OBJC_CLASS___UIFont,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_heading(local_c8,local_198);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setFont_(uVar3,local_198,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_heading(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTextAlignment_(uVar2,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_heading(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar2,local_198,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_view(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_heading(local_c8,local_198);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addSubview_(uVar2,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_198,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_160 = uVar2;

  _objc_msgSend_systemImageNamed_(&_OBJC_CLASS___UIImage,local_198,&cf_xmark);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setImage_forState_(uVar2,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_msgSend_secondaryLabelColor(&_OBJC_CLASS___UIColor,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTintColor_(local_160,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(local_160,local_198,0);

  _objc_msgSend_addTarget_action_forControlEvents_(local_160,local_198,local_c8,"closeComments");

  _objc_msgSend_view(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addSubview_(uVar2,local_198,local_160);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UITableView);

  uVar2 = _objc_msgSend_initWithFrame_style_

                    (*(undefined8 *)PTR__CGRectZero_001108d8,

                     *(undefined8 *)(PTR__CGRectZero_001108d8 + 8),

                     *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10),

                     *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18),uVar2,local_198,0);

  _objc_msgSend_setTable_(local_c8,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_table(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar2,local_198,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_table(local_c8,local_198);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBackgroundColor_(uVar3,local_198,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_table(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setSeparatorStyle_(uVar2,local_198,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar3 = *(undefined8 *)PTR__UITableViewAutomaticDimension_00110130;

  _objc_msgSend_table(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setRowHeight_(uVar3,uVar2,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_table(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setEstimatedRowHeight_(0x4055800000000000,uVar2,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  IVar1 = local_c8;

  _objc_msgSend_table(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setDataSource_(uVar2,local_198,IVar1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  IVar1 = local_c8;

  _objc_msgSend_table(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setDelegate_(uVar2,local_198,IVar1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_table(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setKeyboardDismissMode_(uVar2,local_198,1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_view(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_table(local_c8,local_198);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addSubview_(uVar2,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___UITextField);

  _objc_msgSend_setInput_(local_c8,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_input(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setPlaceholder_(uVar2,local_198,&cf_YuN_Ov_);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_tertiarySystemFillColor(&_OBJC_CLASS___UIColor,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_input(local_c8,local_198);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBackgroundColor_(uVar3,local_198,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_input(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_layer(uVar2,local_198);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setCornerRadius_(0x4032000000000000,uVar3,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_systemFontOfSize_(0x402e000000000000,&_OBJC_CLASS___UIFont,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_input(local_c8,local_198);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setFont_(uVar3,local_198,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_input(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setReturnKeyType_(uVar2,local_198,7);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  IVar1 = local_c8;

  _objc_msgSend_input(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setDelegate_(uVar2,local_198,IVar1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_input(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar2,local_198,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UIView);

  uVar73 = 0;

  uVar74 = 0x4028000000000000;

  uVar75 = 0x3ff0000000000000;

  uVar3 = _CGRectMake(0);

  uVar2 = _objc_msgSend_initWithFrame_(uVar3,uVar73,uVar74,uVar75,uVar2,local_198);

  local_168 = uVar2;

  _objc_msgSend_input(local_c8,local_198);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setLeftView_(uVar3,local_198,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_msgSend_input(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setLeftViewMode_(uVar2,local_198,3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_view(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_input(local_c8,local_198);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addSubview_(uVar2,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_198,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setSend_(local_c8,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_send(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTitle_forState_(uVar2,local_198,&cf_S,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_send(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar2,local_198,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_send(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addTarget_action_forControlEvents_(uVar2,local_198,local_c8,"sendComment",0x40);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_view(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_send(local_c8,local_198);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addSubview_(uVar2,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_input(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_bottomAnchor(uVar2,local_198);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_c8,local_198);

  uVar73 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_safeAreaLayoutGuide(uVar73,local_198);

  uVar74 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_bottomAnchor(uVar74,local_198);

  uVar75 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_constant_(0,uVar3,local_198);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setInputBottom_(local_c8,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar75);

  (*(code *)PTR__objc_release_00110458)(uVar74);

  (*(code *)PTR__objc_release_00110458)(uVar73);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_heading(local_c8,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_topAnchor(uVar2,local_198);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_c8,local_198);

  uVar73 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_topAnchor(uVar73,local_198);

  uVar74 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_constant_(0x4036000000000000,uVar3,local_198);

  uVar75 = _objc_retainAutoreleasedReturnValue();

  local_b8 = uVar75;

  _objc_msgSend_heading(local_c8,local_198);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_centerXAnchor(uVar4,local_198);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_c8,local_198);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_centerXAnchor(uVar6,local_198);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_(uVar5,local_198);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  local_b0 = uVar8;

  _objc_msgSend_heading(local_c8,local_198);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_heightAnchor(uVar9,local_198);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToConstant_(0x403c000000000000,uVar10,local_198);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  local_a8 = uVar11;

  _objc_msgSend_centerYAnchor(local_160,local_198);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_heading(local_c8,local_198);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_centerYAnchor(uVar13,local_198);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_(uVar12,local_198);

  uVar15 = _objc_retainAutoreleasedReturnValue();

  local_a0 = uVar15;

  _objc_msgSend_trailingAnchor(local_160,local_198);

  uVar16 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_c8,local_198);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_trailingAnchor(uVar17,local_198);

  uVar18 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_constant_(0xc030000000000000,uVar16,local_198);

  uVar19 = _objc_retainAutoreleasedReturnValue();

  local_98 = uVar19;

  _objc_msgSend_widthAnchor(local_160,local_198);

  uVar20 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToConstant_(0x4042000000000000,uVar20,local_198);

  uVar21 = _objc_retainAutoreleasedReturnValue();

  local_90 = uVar21;

  _objc_msgSend_heightAnchor(local_160,local_198);

  uVar22 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToConstant_(0x4042000000000000,uVar22,local_198);

  uVar23 = _objc_retainAutoreleasedReturnValue();

  local_88 = uVar23;

  _objc_msgSend_table(local_c8,local_198);

  uVar24 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_topAnchor(uVar24,local_198);

  uVar25 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_heading(local_c8,local_198);

  uVar26 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_bottomAnchor(uVar26,local_198);

  uVar27 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_constant_(0x4020000000000000,uVar25,local_198);

  uVar28 = _objc_retainAutoreleasedReturnValue();

  local_80 = uVar28;

  _objc_msgSend_table(local_c8,local_198);

  uVar29 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_leadingAnchor(uVar29,local_198);

  uVar30 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_c8,local_198);

  uVar31 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_leadingAnchor(uVar31,local_198);

  uVar32 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_(uVar30,local_198);

  uVar33 = _objc_retainAutoreleasedReturnValue();

  local_78 = uVar33;

  _objc_msgSend_table(local_c8,local_198);

  uVar34 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_trailingAnchor(uVar34,local_198);

  uVar35 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_c8,local_198);

  uVar36 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_trailingAnchor(uVar36,local_198);

  uVar37 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_(uVar35,local_198);

  uVar38 = _objc_retainAutoreleasedReturnValue();

  local_70 = uVar38;

  _objc_msgSend_table(local_c8,local_198);

  uVar39 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_bottomAnchor(uVar39,local_198);

  uVar40 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_input(local_c8,local_198);

  uVar41 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_topAnchor(uVar41,local_198);

  uVar42 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_constant_(uVar40,local_198);

  uVar43 = _objc_retainAutoreleasedReturnValue();

  local_68 = uVar43;

  _objc_msgSend_input(local_c8,local_198);

  uVar44 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_leadingAnchor(uVar44,local_198);

  uVar45 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_c8,local_198);

  uVar46 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_leadingAnchor(uVar46,local_198);

  uVar47 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_constant_(0x4030000000000000,uVar45,local_198);

  uVar48 = _objc_retainAutoreleasedReturnValue();

  local_60 = uVar48;

  _objc_msgSend_input(local_c8,local_198);

  uVar49 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_trailingAnchor(uVar49,local_198);

  uVar50 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_send(local_c8,local_198);

  uVar51 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_leadingAnchor(uVar51,local_198);

  uVar52 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_constant_(0xc020000000000000,uVar50,local_198);

  uVar53 = _objc_retainAutoreleasedReturnValue();

  local_58 = uVar53;

  _objc_msgSend_input(local_c8,local_198);

  uVar54 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_heightAnchor(uVar54,local_198);

  uVar55 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToConstant_(0x4044000000000000,uVar55,local_198);

  uVar56 = _objc_retainAutoreleasedReturnValue();

  local_50 = uVar56;

  _objc_msgSend_inputBottom(local_c8,local_198);

  uVar57 = _objc_retainAutoreleasedReturnValue();

  local_48 = uVar57;

  _objc_msgSend_send(local_c8,local_198);

  uVar58 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_centerYAnchor(uVar58,local_198);

  uVar59 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_input(local_c8,local_198);

  uVar60 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_centerYAnchor(uVar60,local_198);

  uVar61 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_(uVar59,local_198);

  uVar62 = _objc_retainAutoreleasedReturnValue();

  local_40 = uVar62;

  _objc_msgSend_send(local_c8,local_198);

  uVar63 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_trailingAnchor(uVar63,local_198);

  uVar64 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_c8,local_198);

  uVar65 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_trailingAnchor(uVar65,local_198);

  uVar66 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_constant_(0xc028000000000000,uVar64,local_198);

  uVar67 = _objc_retainAutoreleasedReturnValue();

  local_38 = uVar67;

  _objc_msgSend_send(local_c8,local_198);

  uVar68 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_widthAnchor(uVar68,local_198);

  uVar69 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToConstant_(0x4048000000000000,uVar69,local_198);

  uVar70 = _objc_retainAutoreleasedReturnValue();

  local_30 = uVar70;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_198,&local_b8,0x12);

  uVar71 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_activateConstraints_(&_OBJC_CLASS___NSLayoutConstraint,local_198);

  (*(code *)PTR__objc_release_00110458)(uVar71);

  (*(code *)PTR__objc_release_00110458)(uVar70);

  (*(code *)PTR__objc_release_00110458)(uVar69);

  (*(code *)PTR__objc_release_00110458)(uVar68);

  (*(code *)PTR__objc_release_00110458)(uVar67);

  (*(code *)PTR__objc_release_00110458)(uVar66);

  (*(code *)PTR__objc_release_00110458)(uVar65);

  (*(code *)PTR__objc_release_00110458)(uVar64);

  (*(code *)PTR__objc_release_00110458)(uVar63);

  (*(code *)PTR__objc_release_00110458)(uVar62);

  (*(code *)PTR__objc_release_00110458)(uVar61);

  (*(code *)PTR__objc_release_00110458)(uVar60);

  (*(code *)PTR__objc_release_00110458)(uVar59);

  (*(code *)PTR__objc_release_00110458)(uVar58);

  (*(code *)PTR__objc_release_00110458)(uVar57);

  (*(code *)PTR__objc_release_00110458)(uVar56);

  (*(code *)PTR__objc_release_00110458)(uVar55);

  (*(code *)PTR__objc_release_00110458)(uVar54);

  (*(code *)PTR__objc_release_00110458)(uVar53);

  (*(code *)PTR__objc_release_00110458)(uVar52);

  (*(code *)PTR__objc_release_00110458)(uVar51);

  (*(code *)PTR__objc_release_00110458)(uVar50);

  (*(code *)PTR__objc_release_00110458)(uVar49);

  (*(code *)PTR__objc_release_00110458)(uVar48);

  (*(code *)PTR__objc_release_00110458)(uVar47);

  (*(code *)PTR__objc_release_00110458)(uVar46);

  (*(code *)PTR__objc_release_00110458)(uVar45);

  (*(code *)PTR__objc_release_00110458)(uVar44);

  (*(code *)PTR__objc_release_00110458)(uVar43);

  (*(code *)PTR__objc_release_00110458)(uVar42);

  (*(code *)PTR__objc_release_00110458)(uVar41);

  (*(code *)PTR__objc_release_00110458)(uVar40);

  (*(code *)PTR__objc_release_00110458)(uVar39);

  (*(code *)PTR__objc_release_00110458)(uVar38);

  (*(code *)PTR__objc_release_00110458)(uVar37);

  (*(code *)PTR__objc_release_00110458)(uVar36);

  (*(code *)PTR__objc_release_00110458)(uVar35);

  (*(code *)PTR__objc_release_00110458)(uVar34);

  (*(code *)PTR__objc_release_00110458)(uVar33);

  (*(code *)PTR__objc_release_00110458)(uVar32);

  (*(code *)PTR__objc_release_00110458)(uVar31);

  (*(code *)PTR__objc_release_00110458)(uVar30);

  (*(code *)PTR__objc_release_00110458)(uVar29);

  (*(code *)PTR__objc_release_00110458)(uVar28);

  (*(code *)PTR__objc_release_00110458)(uVar27);

  (*(code *)PTR__objc_release_00110458)(uVar26);

  (*(code *)PTR__objc_release_00110458)(uVar25);

  (*(code *)PTR__objc_release_00110458)(uVar24);

  (*(code *)PTR__objc_release_00110458)(uVar23);

  (*(code *)PTR__objc_release_00110458)(uVar22);

  (*(code *)PTR__objc_release_00110458)(uVar21);

  (*(code *)PTR__objc_release_00110458)(uVar20);

  (*(code *)PTR__objc_release_00110458)(uVar19);

  (*(code *)PTR__objc_release_00110458)(uVar18);

  (*(code *)PTR__objc_release_00110458)(uVar17);

  (*(code *)PTR__objc_release_00110458)(uVar16);

  (*(code *)PTR__objc_release_00110458)(uVar15);

  (*(code *)PTR__objc_release_00110458)(uVar14);

  (*(code *)PTR__objc_release_00110458)(uVar13);

  (*(code *)PTR__objc_release_00110458)(uVar12);

  (*(code *)PTR__objc_release_00110458)(uVar11);

  (*(code *)PTR__objc_release_00110458)(uVar10);

  (*(code *)PTR__objc_release_00110458)(uVar9);

  (*(code *)PTR__objc_release_00110458)(uVar8);

  (*(code *)PTR__objc_release_00110458)(uVar7);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar75);

  (*(code *)PTR__objc_release_00110458)(uVar74);

  (*(code *)PTR__objc_release_00110458)(uVar73);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_198);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addObserver_selector_name_object_

            (uVar2,local_198,local_c8,"keyboard:",

             *(undefined8 *)PTR__UIKeyboardWillChangeFrameNotification_00110118,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_reloadComments(local_c8,local_198);

  _objc_msgSend_item(local_c8,local_198);

  lVar72 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)();

  if (lVar72 != 0) {

    _objc_msgSend_facade(local_c8,local_198);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_item(local_c8,local_198);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    local_c0 = uVar3;

    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_198,&local_c0,1);

    uVar73 = _objc_retainAutoreleasedReturnValue();

    _Call(uVar2,&cf_updateDataItemDetailByItem_);

    _objc_unsafeClaimAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar73);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  _objc_storeStrong(&local_168);

  _objc_storeStrong(&local_160,0);

  _objc_storeStrong(&local_138,0);

  _objc_storeStrong(&local_e8,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}






// ---- viewDidLoad @0x1804c ----


/* Function Stack Size: 0x10 bytes */



void WCMVideoController::viewDidLoad(ID param_1,SEL param_2)



{

  ID IVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ulong uVar5;

  long lVar6;

  undefined8 in_d1;

  undefined8 uVar7;

  undefined8 in_d2;

  undefined8 in_d3;

  ulong local_568;

  ulong local_560;

  ulong local_518;

  ulong local_510;

  undefined8 local_2c8;

  undefined8 local_2b0;

  undefined8 local_2a8;

  undefined8 local_2a0;

  undefined8 local_298;

  undefined8 local_290;

  undefined8 local_288;

  undefined8 local_280;

  undefined8 local_278;

  undefined8 local_270;

  undefined1 auStack_268 [8];

  long local_260;

  long *local_258;

  undefined8 local_228;

  undefined1 auStack_220 [8];

  long local_218;

  long *local_210;

  undefined8 local_1e0;

  undefined8 local_1d8;

  undefined8 local_1d0;

  undefined8 uStack_1c8;

  undefined8 local_1b0;

  undefined8 uStack_1a8;

  undefined8 local_190;

  undefined8 local_188;

  undefined8 local_180;

  undefined8 local_178;

  undefined8 local_170;

  undefined8 local_150;

  ID local_148;

  class_t *local_140;

  SEL local_138;

  ID local_130;

  undefined1 auStack_128 [128];

  undefined1 auStack_a8 [128];

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_140 = &objc::class_t::WCMVideoController;

  local_148 = param_1;

  local_138 = param_2;

  local_130 = param_1;

  _objc_msgSendSuper2(&local_148,"viewDidLoad");

  _objc_msgSend_blackColor(&_OBJC_CLASS___UIColor,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_130,local_2c8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBackgroundColor_(uVar3,local_2c8,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _Service(&cf_WCFacade);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setFacade_(local_130,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _Context();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _Call(uVar2,&cf_userName,PTR____NSArray0__struct_00110718);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _Text();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setAccount_(local_130,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  local_150 = _objc_opt_new(&_OBJC_CLASS___UICollectionViewFlowLayout);

  _objc_msgSend_setScrollDirection_(local_150,local_2c8);

  _objc_msgSend_setMinimumLineSpacing_(local_150,local_2c8);

  _objc_msgSend_setMinimumInteritemSpacing_(0,local_150,local_2c8);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UICollectionView);

  _objc_msgSend_view(local_130,local_2c8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  local_170 = _objc_msgSend_bounds(uVar3,local_2c8);

  uVar2 = _objc_msgSend_initWithFrame_collectionViewLayout_

                    (local_170,in_d1,uVar2,local_2c8,local_150);

  _objc_msgSend_setCollection_(local_130,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_msgSend_blackColor(&_OBJC_CLASS___UIColor,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_collection(local_130,local_2c8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBackgroundColor_(uVar3,local_2c8,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_collection(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setPagingEnabled_(uVar2,local_2c8,1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_collection(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setAlwaysBounceVertical_(uVar2,local_2c8,1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_collection(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setShowsVerticalScrollIndicator_(uVar2,local_2c8,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_collection(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setContentInsetAdjustmentBehavior_(uVar2,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  IVar1 = local_130;

  _objc_msgSend_collection(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setDataSource_(uVar2,local_2c8,IVar1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  IVar1 = local_130;

  _objc_msgSend_collection(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setDelegate_(uVar2,local_2c8,IVar1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_collection(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = _objc_opt_class(&objc::class_t::WCMVideoCell);

  _objc_msgSend_registerClass_forCellWithReuseIdentifier_(uVar2,local_2c8,uVar3,&cf_video);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_view(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_collection(local_130,local_2c8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addSubview_(uVar2,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  _objc_msgSend_setPreparedItems_(local_130,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  _objc_msgSend_setPreparingAssets_(local_130,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  _objc_msgSend_setPrefetchRequests_(local_130,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  _objc_msgSend_setProbeTimes_(local_130,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  _objc_msgSend_setRecoveryAttempts_(local_130,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___AVPlayer);

  _objc_msgSend_setPlayer_(local_130,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_player(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setAutomaticallyWaitsToMinimizeStalling_(uVar2,local_2c8,1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_player(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_playerLayerWithPlayer_(&_OBJC_CLASS___AVPlayerLayer,local_2c8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setPlayerLayer_(local_130,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar3 = *(undefined8 *)PTR__AVLayerVideoGravityResizeAspect_001101b8;

  _objc_msgSend_playerLayer(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setVideoGravity_(uVar2,local_2c8,uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_control_action_(local_130,local_2c8,&cf_chevron_left,"close");

  local_178 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTag_(local_178,local_2c8,0x2bd);

  _objc_msgSend_setAccessibilityLabel_(local_178,local_2c8,&cf_VgSW);

  _objc_msgSend_control_action_(local_130,local_2c8,&cf_speaker_wave_2_fill,"toggleMute");

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setMuteButton_(local_130,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_muteButton(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setAccessibilityLabel_(uVar2,local_2c8,&cf_Y);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_control_action_(local_130,local_2c8,&cf_bubble_right,"showComments");

  local_180 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTag_(local_180,local_2c8,0x2be);

  _objc_msgSend_setAccessibilityLabel_(local_180,local_2c8,&cf_Sb);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UIImageView);

  _objc_msgSend_systemImageNamed_(&_OBJC_CLASS___UIImage,local_2c8,&cf_person_crop_circle_fill);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  local_188 = _objc_msgSend_initWithImage_(uVar2,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_msgSend_setTag_(local_188,local_2c8,0x2c3);

  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTintColor_(local_188,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_setContentMode_(local_188,local_2c8,2);

  _objc_msgSend_layer(local_188,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setCornerRadius_(0x4036000000000000,uVar2,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_setClipsToBounds_(local_188,local_2c8,1);

  _objc_msgSend_view(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addSubview_(uVar2,local_2c8,local_188);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_buttonWithType_(&objc::class_t::WCMGlassButton,local_2c8,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setFollowButton_(local_130,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_followButton(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_systemImageNamed_(&_OBJC_CLASS___UIImage,local_2c8,&cf_plus);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setImage_forState_(uVar2,local_2c8,uVar3,0);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar7 = *(undefined8 *)PTR__UIFontWeightSemibold_001100d0;

  _objc_msgSend_systemFontOfSize_weight_(0x4028000000000000,&_OBJC_CLASS___UIFont,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_followButton(local_130,local_2c8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_titleLabel(uVar3,local_2c8);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setFont_(uVar4,local_2c8,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_followButton(local_130,local_2c8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTintColor_(uVar3,local_2c8,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_followButton(local_130,local_2c8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBackgroundColor_(uVar3,local_2c8,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_followButton(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setClipsToBounds_(uVar2,local_2c8,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_followButton(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_configurationWithPointSize_weight_

            (0x402a000000000000,&_OBJC_CLASS___UIImageSymbolConfiguration,local_2c8,6);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setPreferredSymbolConfiguration_forImageInState_(uVar2,local_2c8,uVar3,0);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);

  _objc_msgSend_effectWithStyle_(&_OBJC_CLASS___UIBlurEffect,local_2c8,0xb);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  local_190 = _objc_msgSend_initWithEffect_(uVar2,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_msgSend_followButton(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_1d0 = _objc_msgSend_bounds(uVar2,local_2c8);

  uStack_1c8 = uVar7;

  local_1b0 = local_1d0;

  uStack_1a8 = uVar7;

  _objc_msgSend_setFrame_(local_1d0,uVar7,in_d2,in_d3,local_190,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_setAutoresizingMask_(local_190,local_2c8,0x12);

  _objc_msgSend_setUserInteractionEnabled_(local_190,local_2c8,0);

  _objc_msgSend_setTag_(local_190,local_2c8,0x2c4);

  _objc_msgSend_followButton(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_insertSubview_atIndex_(uVar2,local_2c8,local_190,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_followButton(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addTarget_action_forControlEvents_(uVar2,local_2c8,local_130,"toggleVideoFollowing")

  ;

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_view(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_followButton(local_130,local_2c8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addSubview_(uVar2,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_control_action_(local_130,local_2c8,&cf_heart,"toggleVideoLike");

  local_1d8 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTag_(local_1d8,local_2c8,0x2c0);

  _objc_msgSend_setAccessibilityLabel_(local_1d8,local_2c8,&cf_p_);

  _memset(auStack_220,0,0x40);

  _objc_msgSend_subviews(local_1d8,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = _objc_msgSend_copy(uVar2,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  local_510 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                        (uVar3,local_2c8,auStack_220,auStack_a8,0x10);

  if (local_510 != 0) {

    lVar6 = *local_210;

    local_518 = 0;

    do {

      do {

        if (*local_210 - lVar6 != 0) {

          _objc_enumerationMutation(*local_210 - lVar6,uVar3);

        }

        uVar4 = *(undefined8 *)(local_218 + local_518 * 8);

        local_1e0 = uVar4;

        uVar2 = _objc_opt_class(&_OBJC_CLASS___UIVisualEffectView);

        uVar5 = _objc_opt_isKindOfClass(uVar4,uVar2);

        if ((uVar5 & 1) != 0) {

          _objc_msgSend_removeFromSuperview(local_1e0,local_2c8);

        }

        local_518 = local_518 + 1;

      } while (local_518 < local_510);

      local_510 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                            (uVar3,local_2c8,auStack_220,auStack_a8,0x10);

      local_518 = 0;

    } while (local_510 != 0);

  }

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _memset(auStack_268,0,0x40);

  _objc_msgSend_subviews(local_180,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = _objc_msgSend_copy(uVar2,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  local_560 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                        (uVar3,local_2c8,auStack_268,auStack_128,0x10);

  if (local_560 != 0) {

    lVar6 = *local_258;

    local_568 = 0;

    do {

      do {

        if (*local_258 - lVar6 != 0) {

          _objc_enumerationMutation(*local_258 - lVar6,uVar3);

        }

        uVar4 = *(undefined8 *)(local_260 + local_568 * 8);

        local_228 = uVar4;

        uVar2 = _objc_opt_class(&_OBJC_CLASS___UIVisualEffectView);

        uVar5 = _objc_opt_isKindOfClass(uVar4,uVar2);

        if ((uVar5 & 1) != 0) {

          _objc_msgSend_removeFromSuperview(local_228,local_2c8);

        }

        local_568 = local_568 + 1;

      } while (local_568 < local_560);

      local_560 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                            (uVar3,local_2c8,auStack_268,auStack_128,0x10);

      local_568 = 0;

    } while (local_560 != 0);

  }

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_msgSend_control_action_(local_130,local_2c8,&cf_arrow_clockwise,"retryVideo");

  local_270 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTag_(local_270,local_2c8,0x2bf);

  _objc_msgSend_setHidden_(local_270,local_2c8,1);

  _objc_msgSend_setAccessibilityLabel_(local_270,local_2c8,&cf_eR_);

  _objc_msgSend_control_action_(local_130,local_2c8,&cf_play_fill,"togglePlayback");

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setPauseButton_(local_130,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_pauseButton(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setHidden_(uVar2,local_2c8,1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_pauseButton(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setAccessibilityLabel_(uVar2,local_2c8,&cf___d>e);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___UILabel);

  _objc_msgSend_setHint_(local_130,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_hint(local_130,local_2c8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTextColor_(uVar3,local_2c8,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_hint(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTextAlignment_(uVar2,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_systemFontOfSize_(0x402c000000000000,&_OBJC_CLASS___UIFont,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_hint(local_130,local_2c8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setFont_(uVar3,local_2c8,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_view(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_hint(local_130,local_2c8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addSubview_(uVar2,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___UISlider);

  _objc_msgSend_setProgress_(local_130,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_progress(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setAccessibilityLabel_(uVar2,local_2c8,&cf__);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_progress(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setMinimumValue_(0,uVar2,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_progress(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setMaximumValue_(0x3f800000,uVar2,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_progress(local_130,local_2c8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTintColor_(uVar3,local_2c8,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UIGraphicsImageRenderer);

  uVar3 = 0x403c000000000000;

  local_288 = _CGSizeMake(0x403c000000000000);

  local_280 = uVar3;

  local_278 = _objc_msgSend_initWithSize_(local_288,uVar3,uVar2,local_2c8);

  _objc_msgSend_imageWithActions_(local_278,local_2c8,&___block_literal_global_922);

  local_290 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_imageWithActions_(local_278,local_2c8,&___block_literal_global_923);

  local_298 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_progress(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setThumbImage_forState_(uVar2,local_2c8,local_290,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_progress(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setThumbImage_forState_(uVar2,local_2c8,local_298,1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_progress(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addTarget_action_forControlEvents_(uVar2,local_2c8,local_130,"beginSeeking",1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_progress(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addTarget_action_forControlEvents_(uVar2,local_2c8,local_130,"endSeeking",0x1c0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_view(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_progress(local_130,local_2c8);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addSubview_(uVar2,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);

  local_2a0 = _objc_msgSend_initWithTarget_action_(uVar2,local_2c8,local_130,"showComments");

  _objc_msgSend_setNumberOfTapsRequired_(local_2a0,local_2c8,2);

  _objc_msgSend_setDelegate_(local_2a0,local_2c8,local_130);

  _objc_msgSend_collection(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addGestureRecognizer_(uVar2,local_2c8,local_2a0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);

  local_2a8 = _objc_msgSend_initWithTarget_action_(uVar2,local_2c8,local_130,"togglePlayback");

  _objc_msgSend_setDelegate_(local_2a8,local_2c8,local_130);

  _objc_msgSend_requireGestureRecognizerToFail_(local_2a8,local_2c8,local_2a0);

  _objc_msgSend_collection(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addGestureRecognizer_(uVar2,local_2c8,local_2a8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UIPanGestureRecognizer);

  local_2b0 = _objc_msgSend_initWithTarget_action_(uVar2,local_2c8,local_130,"horizontalReturn:");

  _objc_msgSend_setDelegate_(local_2b0,local_2c8,local_130);

  _objc_msgSend_collection(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addGestureRecognizer_(uVar2,local_2c8,local_2b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_videoCountLabel(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setLikeCountLabel_(local_130,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_videoCountLabel(local_130,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setCommentCountLabel_(local_130,local_2c8);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addObserver_selector_name_object_

            (uVar2,local_2c8,local_130,"backgroundVideo:",

             *(undefined8 *)PTR__UIApplicationWillResignActiveNotification_001100a0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addObserver_selector_name_object_

            (uVar2,local_2c8,local_130,"foregroundVideo:",

             *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_00110070,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_2c8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addObserver_selector_name_object_

            (uVar2,local_2c8,local_130,"loopVideo:",

             *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_001101d0,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeStrong(&local_2b0,0);

  _objc_storeStrong(&local_2a8,0);

  _objc_storeStrong(&local_2a0,0);

  _objc_storeStrong(&local_298,0);

  _objc_storeStrong(&local_290,0);

  _objc_storeStrong(&local_278,0);

  _objc_storeStrong(&local_270,0);

  _objc_storeStrong(&local_1d8,0);

  _objc_storeStrong(&local_190,0);

  _objc_storeStrong(&local_188,0);

  _objc_storeStrong(&local_180,0);

  _objc_storeStrong(&local_178,0);

  _objc_storeStrong(&local_150,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

}






// ---- ___33-[WCMVideoController_viewDidLoad]_block_invoke @0x19a84 ----


void ___33__WCMVideoController_viewDidLoad__block_invoke(undefined8 param_1)



{

  undefined8 local_20;

  undefined8 local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong();

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- ___33-[WCMVideoController_viewDidLoad]_block_invoke_2 @0x19ad0 ----


void ___33__WCMVideoController_viewDidLoad__block_invoke_2(undefined8 param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 local_68;

  undefined8 local_20;

  undefined8 local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong();

  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_68);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setFill(uVar1,local_68);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar2 = 0x4020000000000000;

  uVar4 = 0x4028000000000000;

  uVar3 = 0x4028000000000000;

  uVar1 = _CGRectMake(0x4020000000000000);

  _objc_msgSend_bezierPathWithOvalInRect_

            (uVar1,uVar2,uVar3,uVar4,&_OBJC_CLASS___UIBezierPath,local_68);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_fill(uVar1,local_68);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- viewDidLoad @0x2c43c ----


/* Function Stack Size: 0x10 bytes */



void WCMHeaderSizeController::viewDidLoad(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

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

  undefined8 uVar16;

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

  double local_f8;

  undefined8 local_80;

  ID local_70;

  class_t *local_68;

  SEL local_60;

  ID local_58;

  undefined8 local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_68 = &objc::class_t::WCMHeaderSizeController;

  local_70 = param_1;

  local_60 = param_2;

  local_58 = param_1;

  _objc_msgSendSuper2(&local_70,"viewDidLoad");

  _objc_msgSend_setTitle_(local_58,local_80,&cf_h_Y_);

  _objc_msgSend_systemGroupedBackgroundColor(&_OBJC_CLASS___UIColor,local_80);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_58,local_80);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBackgroundColor_(uVar2,local_80,uVar1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar1 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar1 = _objc_msgSend_initWithTitle_style_target_action_(uVar1,local_80,&cf__b,2,local_58,"done");

  _objc_msgSend_navigationItem(local_58,local_80);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setRightBarButtonItem_(uVar2,local_80,uVar1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar1 = _objc_opt_new(&_OBJC_CLASS___UILabel);

  _objc_msgSend_setValueLabel_(local_58,local_80);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_valueLabel(local_58,local_80);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTextAlignment_(uVar1,local_80,1);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_monospacedDigitSystemFontOfSize_weight_

            (0x4038000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_001100d0,

             &_OBJC_CLASS___UIFont,local_80);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_valueLabel(local_58,local_80);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setFont_(uVar2,local_80,uVar1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_valueLabel(local_58,local_80);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar1,local_80,0);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_view(local_58,local_80);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_valueLabel(local_58,local_80);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addSubview_(uVar1,local_80);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar1 = _objc_opt_new(&_OBJC_CLASS___UISlider);

  _objc_msgSend_setSlider_(local_58,local_80);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_slider(local_58,local_80);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setMinimumValue_(0x3f19999a,uVar1,local_80);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_slider(local_58,local_80);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setMaximumValue_(0x3fb33333,uVar1,local_80);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  local_f8 = (double)_objc_msgSend_scale(local_58,local_80);

  if (local_f8 == 0.0) {

    local_f8 = 1.0;

  }

  _objc_msgSend_slider(local_58,local_80);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setValue_((float)local_f8,uVar1,local_80);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_slider(local_58,local_80);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setAccessibilityLabel_(uVar1,local_80,&cf_eW_TVGr_Y_);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_slider(local_58,local_80);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar1,local_80,0);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_slider(local_58,local_80);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addTarget_action_forControlEvents_(uVar1,local_80,local_58,"changed",0x1000);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_view(local_58,local_80);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_slider(local_58,local_80);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addSubview_(uVar1,local_80);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_valueLabel(local_58,local_80);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_topAnchor(uVar1,local_80);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_58,local_80);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_safeAreaLayoutGuide(uVar3,local_80);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_topAnchor(uVar4,local_80);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_constant_(uVar2,local_80);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  local_50 = uVar6;

  _objc_msgSend_valueLabel(local_58,local_80);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_centerXAnchor(uVar7,local_80);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_58,local_80);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_centerXAnchor(uVar9,local_80);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_(uVar8,local_80);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  local_48 = uVar11;

  _objc_msgSend_slider(local_58,local_80);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_topAnchor(uVar12,local_80);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_valueLabel(local_58,local_80);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_bottomAnchor(uVar14,local_80);

  uVar15 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_constant_(0x4038000000000000,uVar13,local_80);

  uVar16 = _objc_retainAutoreleasedReturnValue();

  local_40 = uVar16;

  _objc_msgSend_slider(local_58,local_80);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_leadingAnchor(uVar17,local_80);

  uVar18 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_58,local_80);

  uVar19 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_leadingAnchor(uVar19,local_80);

  uVar20 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_constant_(0x403c000000000000,uVar18,local_80);

  uVar21 = _objc_retainAutoreleasedReturnValue();

  local_38 = uVar21;

  _objc_msgSend_slider(local_58,local_80);

  uVar22 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_trailingAnchor(uVar22,local_80);

  uVar23 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_58,local_80);

  uVar24 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_trailingAnchor(uVar24,local_80);

  uVar25 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_constant_(0xc03c000000000000,uVar23,local_80);

  uVar26 = _objc_retainAutoreleasedReturnValue();

  local_30 = uVar26;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_80,&local_50,5);

  uVar27 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_activateConstraints_(&_OBJC_CLASS___NSLayoutConstraint,local_80);

  (*(code *)PTR__objc_release_00110458)(uVar27);

  (*(code *)PTR__objc_release_00110458)(uVar26);

  (*(code *)PTR__objc_release_00110458)(uVar25);

  (*(code *)PTR__objc_release_00110458)(uVar24);

  (*(code *)PTR__objc_release_00110458)(uVar23);

  (*(code *)PTR__objc_release_00110458)(uVar22);

  (*(code *)PTR__objc_release_00110458)(uVar21);

  (*(code *)PTR__objc_release_00110458)(uVar20);

  (*(code *)PTR__objc_release_00110458)(uVar19);

  (*(code *)PTR__objc_release_00110458)(uVar18);

  (*(code *)PTR__objc_release_00110458)(uVar17);

  (*(code *)PTR__objc_release_00110458)(uVar16);

  (*(code *)PTR__objc_release_00110458)(uVar15);

  (*(code *)PTR__objc_release_00110458)(uVar14);

  (*(code *)PTR__objc_release_00110458)(uVar13);

  (*(code *)PTR__objc_release_00110458)(uVar12);

  (*(code *)PTR__objc_release_00110458)(uVar11);

  (*(code *)PTR__objc_release_00110458)(uVar10);

  (*(code *)PTR__objc_release_00110458)(uVar9);

  (*(code *)PTR__objc_release_00110458)(uVar8);

  (*(code *)PTR__objc_release_00110458)(uVar7);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_slider(local_58,local_80);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_value(uVar1,local_80);

  _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_80,&cf___0f__);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_valueLabel(local_58,local_80);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setText_(uVar3,local_80,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar1 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar1 = _objc_msgSend_initWithTitle_style_target_action_(uVar1,local_80,&cf_n_,0,local_58,"reset")

  ;

  _objc_msgSend_navigationItem(local_58,local_80);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setLeftBarButtonItem_(uVar2,local_80,uVar1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}






// ---- viewDidLoad @0x2d2b8 ----


/* Function Stack Size: 0x10 bytes */



void WCMCacheController::viewDidLoad(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 local_38;

  ID local_30;

  class_t *local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = &objc::class_t::WCMCacheController;

  local_30 = param_1;

  local_20 = param_2;

  local_18 = param_1;

  _objc_msgSendSuper2(&local_30,"viewDidLoad");

  _objc_msgSend_setTitle_(local_18,local_38,&cf__X__t);

  uVar1 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar1 = _objc_msgSend_initWithBarButtonSystemItem_target_action_(uVar1,local_38,0,local_18,"done")

  ;

  _objc_msgSend_navigationItem(local_18,local_38);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setRightBarButtonItem_(uVar2,local_38,uVar1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_measure(local_18,local_38);

  return;

}






// ---- viewDidLoad @0x30728 ----


/* Function Stack Size: 0x10 bytes */



void WCMFeedController::viewDidLoad(ID param_1,SEL param_2)



{

  ID IVar1;

  undefined8 uVar2;

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

  undefined8 uVar16;

  undefined8 uVar17;

  undefined8 uVar18;

  undefined8 uVar19;

  undefined8 uVar20;

  undefined8 uVar21;

  undefined8 uVar22;

  undefined8 local_b0;

  undefined8 local_80;

  undefined8 local_78;

  undefined8 local_70;

  ID local_68;

  class_t *local_60;

  SEL local_58;

  ID local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_60 = &objc::class_t::WCMFeedController;

  local_68 = param_1;

  local_58 = param_2;

  local_50 = param_1;

  _objc_msgSendSuper2(&local_68,"viewDidLoad");

  _objc_msgSend_setLimit_(local_50,local_b0,0x28);

  _objc_msgSend_setItems_(local_50,local_b0,PTR____NSDictionary0__struct_00110720);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableOrderedSet);

  _objc_msgSend_setRowOrder_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  _objc_msgSend_setNativeContentByID_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  _objc_msgSend_setNativeMediaByID_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSOperationQueue);

  _objc_msgSend_setBridgeQueue_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_bridgeQueue(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setMaxConcurrentOperationCount_(uVar2,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_bridgeQueue(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setQualityOfService_(uVar2,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSCache);

  _objc_msgSend_setImages_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_images(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTotalCostLimit_(uVar2,local_b0,0x1800000);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  _objc_msgSend_setMediaRequestTimes_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  _objc_msgSend_setRenderQualities_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  _objc_msgSend_setItemMediaKeys_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  _objc_msgSend_setMediaTargets_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSOperationQueue);

  _objc_msgSend_setMediaQueue_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_mediaQueue(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setMaxConcurrentOperationCount_(uVar2,local_b0,1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_mediaQueue(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setQualityOfService_(uVar2,local_b0,0x11);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSOperationQueue);

  _objc_msgSend_setPreviewQueue_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_previewQueue(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setMaxConcurrentOperationCount_(uVar2,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_previewQueue(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setQualityOfService_(uVar2,local_b0,0x19);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableSet);

  _objc_msgSend_setPendingExports_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableSet);

  _objc_msgSend_setPendingOriginalExports_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  _objc_msgSend_setCachedRows_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  _objc_msgSend_setMediaProbeTimes_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableSet);

  _objc_msgSend_setFollowing_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSCache);

  _objc_msgSend_setAvatars_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_avatars(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setCountLimit_(uVar2,local_b0,0x96);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableSet);

  _objc_msgSend_setRequestedAvatars_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableSet);

  _objc_msgSend_setVisibleIDs_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  _objc_msgSend_setRenderKeys_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableSet);

  _objc_msgSend_setVideoRequests_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&objc::class_t::WCMAssetHandler);

  _objc_msgSend_setAssetHandler_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  _objc_msgSend_setVideoURIs_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  local_70 = _objc_opt_new(&_OBJC_CLASS___WKWebViewConfiguration);

  _objc_msgSend_nonPersistentDataStore(&_OBJC_CLASS___WKWebsiteDataStore,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setWebsiteDataStore_(local_70,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_setIgnoresViewportScaleLimits_(local_70,local_b0,0);

  uVar2 = local_70;

  _objc_msgSend_assetHandler(local_50,local_b0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setURLSchemeHandler_forURLScheme_(uVar2,local_b0,uVar3,&cf_wcm_cache);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  local_78 = _objc_opt_new(&objc::class_t::WCMWeakHandler);

  _objc_msgSend_setTarget_(local_78,local_b0,local_50);

  _objc_msgSend_userContentController(local_70,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addScriptMessageHandler_name_(uVar2,local_b0,local_78,&cf_moments);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___WKWebView);

  uVar2 = _objc_msgSend_initWithFrame_configuration_

                    (*(undefined8 *)PTR__CGRectZero_001108d8,

                     *(undefined8 *)(PTR__CGRectZero_001108d8 + 8),

                     *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10),

                     *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18),uVar2,local_b0,local_70);

  _objc_msgSend_setWeb_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_systemGroupedBackgroundColor(&_OBJC_CLASS___UIColor,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_50,local_b0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBackgroundColor_(uVar3,local_b0,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_systemGroupedBackgroundColor(&_OBJC_CLASS___UIColor,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_web(local_50,local_b0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBackgroundColor_(uVar3,local_b0,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_web(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setOpaque_(uVar2,local_b0,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_systemGroupedBackgroundColor(&_OBJC_CLASS___UIColor,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_web(local_50,local_b0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setUnderPageBackgroundColor_(uVar3,local_b0,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_web(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_scrollView(uVar2,local_b0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_pinchGestureRecognizer(uVar3,local_b0);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setEnabled_(uVar4,local_b0,0);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_web(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_scrollView(uVar2,local_b0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setMinimumZoomScale_(uVar3,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_web(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_scrollView(uVar2,local_b0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setMaximumZoomScale_(0x3ff0000000000000,uVar3,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_web(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_scrollView(uVar2,local_b0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setContentInsetAdjustmentBehavior_(uVar3,local_b0,2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_web(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_scrollView(uVar2,local_b0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setAlwaysBounceVertical_(uVar3,local_b0,1);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_opt_new(&objc::class_t::WCMQQRefreshControl);

  _objc_msgSend_setRefreshControl_(local_50,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_refreshControl(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addTarget_action_forControlEvents_

            (uVar2,local_b0,local_50,"nativeRefreshTriggered",0x1000);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_refreshControl(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_web(local_50,local_b0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_scrollView(uVar3,local_b0);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setRefreshControl_(uVar4,local_b0,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_web(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_scrollView(uVar2,local_b0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addObserver_forKeyPath_options_context_

            (uVar3,local_b0,local_50,&cf_contentOffset,1,&_RefreshOffsetKey);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_setObservingRefreshOffset_(local_50,local_b0,1);

  _objc_msgSend_web(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_scrollView(uVar2,local_b0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_panGestureRecognizer(uVar3,local_b0);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addTarget_action_(uVar4,local_b0,local_50,"refreshPan:");

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_setNativeListDirty_(local_50,local_b0,1);

  IVar1 = local_50;

  _objc_msgSend_web(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setNavigationDelegate_(uVar2,local_b0,IVar1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_web(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar2,local_b0,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_view(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_web(local_50,local_b0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addSubview_(uVar2,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_view(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_refreshControl(local_50,local_b0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_qqIndicatorView(uVar3,local_b0);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addSubview_(uVar2,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_web(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_topAnchor(uVar2,local_b0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_50,local_b0);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_topAnchor(uVar4,local_b0);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_(uVar3,local_b0);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  local_48 = uVar6;

  _objc_msgSend_web(local_50,local_b0);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_bottomAnchor(uVar7,local_b0);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_50,local_b0);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_bottomAnchor(uVar9,local_b0);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_(uVar8,local_b0);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  local_40 = uVar11;

  _objc_msgSend_web(local_50,local_b0);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_leadingAnchor(uVar12,local_b0);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_50,local_b0);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_leadingAnchor(uVar14,local_b0);

  uVar15 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_(uVar13,local_b0);

  uVar16 = _objc_retainAutoreleasedReturnValue();

  local_38 = uVar16;

  _objc_msgSend_web(local_50,local_b0);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_trailingAnchor(uVar17,local_b0);

  uVar18 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_50,local_b0);

  uVar19 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_trailingAnchor(uVar19,local_b0);

  uVar20 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_constraintEqualToAnchor_(uVar18,local_b0);

  uVar21 = _objc_retainAutoreleasedReturnValue();

  local_30 = uVar21;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_b0,&local_48);

  uVar22 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_activateConstraints_(&_OBJC_CLASS___NSLayoutConstraint,local_b0);

  (*(code *)PTR__objc_release_00110458)(uVar22);

  (*(code *)PTR__objc_release_00110458)(uVar21);

  (*(code *)PTR__objc_release_00110458)(uVar20);

  (*(code *)PTR__objc_release_00110458)(uVar19);

  (*(code *)PTR__objc_release_00110458)(uVar18);

  (*(code *)PTR__objc_release_00110458)(uVar17);

  (*(code *)PTR__objc_release_00110458)(uVar16);

  (*(code *)PTR__objc_release_00110458)(uVar15);

  (*(code *)PTR__objc_release_00110458)(uVar14);

  (*(code *)PTR__objc_release_00110458)(uVar13);

  (*(code *)PTR__objc_release_00110458)(uVar12);

  (*(code *)PTR__objc_release_00110458)(uVar11);

  (*(code *)PTR__objc_release_00110458)(uVar10);

  (*(code *)PTR__objc_release_00110458)(uVar9);

  (*(code *)PTR__objc_release_00110458)(uVar8);

  (*(code *)PTR__objc_release_00110458)(uVar7);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___NSString);

  local_80 = _objc_msgSend_initWithBytes_length_encoding_(uVar2,local_b0,&_WCMHTML,0x992e,4);

  _objc_msgSend_web(local_50,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_loadHTMLString_baseURL_(uVar2,local_b0,local_80);

  _objc_unsafeClaimAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addObserver_selector_name_object_

            (uVar2,local_b0,local_50,"background:",

             *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_00110080,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addObserver_selector_name_object_

            (uVar2,local_b0,local_50,"foreground:",

             *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_00110070,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addObserver_selector_name_object_

            (uVar2,local_b0,local_50,"noMore:",&cf_WCMomentsNoMoreTimeline,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addObserver_selector_name_object_

            (uVar2,local_b0,local_50,"timelineChanged:",&cf_WCMomentsTimelineChanged,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addObserver_selector_name_object_

            (uVar2,local_b0,local_50,"timelineFinished:",&cf_WCMomentsTimelineFinished,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_b0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_addObserver_selector_name_object_

            (uVar2,local_b0,local_50,"mediaFinished:",&cf_WCMomentsMediaFinished,0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeStrong(&local_80,0);

  _objc_storeStrong(&local_78,0);

  _objc_storeStrong(&local_70,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}






// ---- viewDidLoad @0xa15b8 ----


/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x10 bytes */



void WCMTOCropViewController::viewDidLoad(ID param_1,SEL param_2)



{

  byte bVar1;

  ID IVar2;

  undefined4 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  ulong uVar8;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined8 local_208;

  undefined *local_1f8;

  undefined4 local_1f0;

  undefined4 local_1ec;

  code *local_1e8;

  undefined *local_1e0;

  undefined1 auStack_1d8 [15];

  undefined1 local_1c9;

  undefined *local_1c8;

  undefined4 local_1c0;

  undefined4 local_1bc;

  code *local_1b8;

  undefined *local_1b0;

  undefined1 auStack_1a8 [15];

  undefined1 local_199;

  undefined *local_198;

  undefined4 local_190;

  undefined4 local_18c;

  code *local_188;

  undefined *local_180;

  undefined1 auStack_178 [15];

  undefined1 local_169;

  undefined *local_168;

  undefined4 local_160;

  undefined4 local_15c;

  code *local_158;

  undefined *local_150;

  undefined1 auStack_148 [15];

  undefined1 local_139;

  undefined *local_138;

  undefined4 local_130;

  undefined4 local_12c;

  code *local_128;

  undefined *local_120;

  undefined1 auStack_118 [11];

  undefined1 local_10d;

  undefined *local_100;

  undefined4 local_f8;

  undefined4 local_f4;

  code *local_f0;

  undefined *local_e8;

  undefined1 auStack_e0 [8];

  undefined1 auStack_d8 [8];

  undefined8 local_d0;

  undefined8 uStack_c8;

  undefined8 local_c0;

  undefined8 uStack_b8;

  undefined8 local_b0;

  undefined8 uStack_a8;

  undefined8 local_a0;

  undefined8 uStack_98;

  undefined8 local_90;

  undefined8 uStack_88;

  undefined8 local_80;

  undefined8 uStack_78;

  undefined8 local_68;

  undefined8 uStack_60;

  undefined8 local_58;

  undefined8 uStack_50;

  byte local_41;

  ID local_40;

  class_t *local_38;

  SEL local_30;

  ID local_28;

  

  local_38 = &objc::class_t::WCMTOCropViewController;

  local_40 = param_1;

  local_30 = param_2;

  local_28 = param_1;

  _objc_msgSendSuper2(&local_40,"viewDidLoad");

  _objc_msgSend_setTransitioningDelegate_(local_28,local_208,local_28);

  _objc_msgSend_cropView(local_28,local_208);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_backgroundColor(uVar4,local_208);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_view(local_28,local_208);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBackgroundColor_(uVar6,local_208,uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  lVar7 = _objc_msgSend_croppingStyle(local_28,local_208);

  IVar2 = local_28;

  local_41 = lVar7 == 1;

  uVar4 = _objc_msgSend_verticalLayout(local_28,local_208);

  local_68 = _objc_msgSend_frameForCropViewWithVerticalLayout_(IVar2,local_208,uVar4);

  uStack_60 = in_d1;

  local_58 = in_d2;

  uStack_50 = in_d3;

  _objc_msgSend_cropView(local_28,local_208);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uStack_88 = uStack_60;

  local_90 = local_68;

  uStack_78 = uStack_50;

  local_80 = local_58;

  _objc_msgSend_setFrame_(local_68,uVar4,local_208);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  IVar2 = local_28;

  uVar4 = _objc_msgSend_verticalLayout(local_28,local_208);

  local_b0 = _objc_msgSend_frameForToolbarWithVerticalLayout_(IVar2,local_208,uVar4);

  uStack_a8 = uStack_60;

  local_a0 = local_58;

  uStack_98 = uStack_50;

  _objc_msgSend_toolbar(local_28,local_208);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uStack_c8 = uStack_a8;

  local_d0 = local_b0;

  uStack_b8 = uStack_98;

  local_c0 = local_a0;

  _objc_msgSend_setFrame_(local_b0,uStack_a8,local_a0,uStack_98,uVar4,local_208);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar8 = _objc_msgSend_aspectRatioPickerButtonHidden(local_28,local_208);

  bVar1 = 1;

  if ((uVar8 & 1) == 0) {

    bVar1 = local_41;

  }

  _objc_msgSend_toolbar(local_28,local_208);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setClampButtonHidden_(uVar4,local_208,bVar1 & 1);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar3 = _objc_msgSend_rotateClockwiseButtonHidden(local_28,local_208);

  _objc_msgSend_toolbar(local_28,local_208);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setRotateClockwiseButtonHidden_(uVar4,local_208,uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_initWeak(auStack_d8,local_28);

  local_100 = PTR___NSConcreteStackBlock_001104f0;

  local_f8 = 0xc2000000;

  local_f4 = 0;

  local_f0 = ___38__WCMTOCropViewController_viewDidLoad__block_invoke;

  local_e8 = &___block_descriptor_40_e8_32w_e5_v8__0l;

  _objc_copyWeak(auStack_e0,auStack_d8);

  local_10d = 1;

  uVar4 = _objc_msgSend_toolbar(local_28,local_208);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setDoneButtonTapped_(uVar4,local_208,&local_100);

  local_10d = 0;

  (*(code *)PTR__objc_release_00110458)(uVar4);

  local_138 = PTR___NSConcreteStackBlock_001104f0;

  local_130 = 0xc2000000;

  local_12c = 0;

  local_128 = ___38__WCMTOCropViewController_viewDidLoad__block_invoke_9;

  local_120 = &___block_descriptor_40_e8_32w_e5_v8__0l;

  _objc_copyWeak(auStack_118,auStack_d8);

  local_139 = 1;

  uVar4 = _objc_msgSend_toolbar(local_28,local_208);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setCancelButtonTapped_(uVar4,local_208,&local_138);

  local_139 = 0;

  (*(code *)PTR__objc_release_00110458)(uVar4);

  local_168 = PTR___NSConcreteStackBlock_001104f0;

  local_160 = 0xc2000000;

  local_15c = 0;

  local_158 = ___38__WCMTOCropViewController_viewDidLoad__block_invoke_2;

  local_150 = &___block_descriptor_40_e8_32w_e5_v8__0l;

  _objc_copyWeak(auStack_148,auStack_d8);

  local_169 = 1;

  uVar4 = _objc_msgSend_toolbar(local_28,local_208);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setResetButtonTapped_(uVar4,local_208,&local_168);

  local_169 = 0;

  (*(code *)PTR__objc_release_00110458)(uVar4);

  local_198 = PTR___NSConcreteStackBlock_001104f0;

  local_190 = 0xc2000000;

  local_18c = 0;

  local_188 = ___38__WCMTOCropViewController_viewDidLoad__block_invoke_3;

  local_180 = &___block_descriptor_40_e8_32w_e5_v8__0l;

  _objc_copyWeak(auStack_178,auStack_d8);

  local_199 = 1;

  uVar4 = _objc_msgSend_toolbar(local_28,local_208);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setClampButtonTapped_(uVar4,local_208,&local_198);

  local_199 = 0;

  (*(code *)PTR__objc_release_00110458)(uVar4);

  local_1c8 = PTR___NSConcreteStackBlock_001104f0;

  local_1c0 = 0xc2000000;

  local_1bc = 0;

  local_1b8 = ___38__WCMTOCropViewController_viewDidLoad__block_invoke_4;

  local_1b0 = &___block_descriptor_40_e8_32w_e5_v8__0l;

  _objc_copyWeak(auStack_1a8,auStack_d8);

  local_1c9 = 1;

  uVar4 = _objc_msgSend_toolbar(local_28,local_208);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setRotateCounterclockwiseButtonTapped_(uVar4,local_208,&local_1c8);

  local_1c9 = 0;

  (*(code *)PTR__objc_release_00110458)(uVar4);

  local_1f8 = PTR___NSConcreteStackBlock_001104f0;

  local_1f0 = 0xc2000000;

  local_1ec = 0;

  local_1e8 = ___38__WCMTOCropViewController_viewDidLoad__block_invoke_5;

  local_1e0 = &___block_descriptor_40_e8_32w_e5_v8__0l;

  _objc_copyWeak(auStack_1d8,auStack_d8);

  uVar4 = _objc_msgSend_toolbar(local_28,local_208);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setRotateClockwiseButtonTapped_(uVar4,local_208,&local_1f8);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_destroyWeak(auStack_1d8);

  _objc_destroyWeak(auStack_1a8);

  _objc_destroyWeak(auStack_178);

  _objc_destroyWeak(auStack_148);

  _objc_destroyWeak(auStack_118);

  _objc_destroyWeak(auStack_e0);

  _objc_destroyWeak(auStack_d8);

  return;

}






// ---- ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke @0xa1e90 ----


void ___38__WCMTOCropViewController_viewDidLoad__block_invoke(long param_1)



{

  undefined8 uVar1;

  undefined8 local_30;

  

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_doneButtonTapped(uVar1,local_30);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return;

}






// ---- ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke.9 @0xa1ed4 ----


void ___38__WCMTOCropViewController_viewDidLoad__block_invoke_9(long param_1)



{

  undefined8 uVar1;

  undefined8 local_30;

  

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_cancelButtonTapped(uVar1,local_30);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return;

}






// ---- ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke_2 @0xa1f18 ----


void ___38__WCMTOCropViewController_viewDidLoad__block_invoke_2(long param_1)



{

  undefined8 uVar1;

  undefined8 local_30;

  

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_resetCropViewLayout(uVar1,local_30);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return;

}






// ---- ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke_3 @0xa1f5c ----


void ___38__WCMTOCropViewController_viewDidLoad__block_invoke_3(long param_1)



{

  undefined8 uVar1;

  undefined8 local_30;

  

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_showAspectRatioDialog(uVar1,local_30);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return;

}






// ---- ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke_4 @0xa1fa0 ----


void ___38__WCMTOCropViewController_viewDidLoad__block_invoke_4(long param_1)



{

  undefined8 uVar1;

  undefined8 local_30;

  

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_rotateCropViewCounterclockwise(uVar1,local_30);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return;

}






// ---- ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke_5 @0xa1fe4 ----


void ___38__WCMTOCropViewController_viewDidLoad__block_invoke_5(long param_1)



{

  undefined8 uVar1;

  undefined8 local_30;

  

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_rotateCropViewClockwise(uVar1,local_30);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return;

}





