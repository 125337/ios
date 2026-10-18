// viewDidLoad @0x11c37c


/* Function Stack Size: 0x10 bytes */



void XZYHomeNPPickerVC::viewDidLoad(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  double dVar4;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  ID local_60;

  class_t *pcStack_58;

  

  pcStack_58 = &objc::class_t::XZYHomeNPPickerVC;

  local_60 = param_1;

  _objc_msgSendSuper2(&local_60,"viewDidLoad");

  FUN_002a4f40(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf__N0_);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1f60(param_1,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar5._0_8_,auVar5._8_8_,uVar1);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar1);

  auVar5 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar1 = FUN_00296f40(auVar5._0_8_,auVar5._8_8_,&cf_sQ,0,param_1,"xzy_dismiss");

  FUN_00299140(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029f3c0(auVar5._0_8_,auVar5._8_8_,uVar1);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar1);

  FUN_002a6880(param_1);

  uVar1 = _objc_alloc_init(&_OBJC_CLASS___UICollectionViewFlowLayout);

  FUN_0029fca0(0x4020000000000000);

  FUN_0029fcc0(0x4028000000000000,uVar1);

  dVar4 = 12.0;

  FUN_002a10e0(0x4028000000000000,0x4028000000000000,0x4028000000000000,0x4028000000000000,uVar1);

  FUN_002a6220(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  dVar4 = (dVar4 + -44.0) / 3.0;

  _objc_release(uVar2);

  FUN_0029f160(dVar4,dVar4 + 24.0,uVar1);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UICollectionView);

  FUN_002a6220(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  auVar5 = FUN_00296ba0(uVar2,extraout_x1,uVar1);

  FUN_0029d4e0(param_1,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar3);

  FUN_00292f00(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ce00(auVar5._0_8_,auVar5._8_8_,0x12);

  _objc_release(auVar5._0_8_);

  FUN_00292dc0(&_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00292f00(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar5._0_8_,auVar5._8_8_,uVar2);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar2);

  FUN_00292f00(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029dca0(auVar5._0_8_,auVar5._8_8_,param_1);

  _objc_release(auVar5._0_8_);

  FUN_00292f00(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029db40(auVar5._0_8_,auVar5._8_8_,param_1);

  _objc_release(auVar5._0_8_);

  FUN_00292f00(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar5 = _objc_opt_class(&_OBJC_CLASS___UICollectionViewCell);

  FUN_0029b040(uVar2,auVar5._8_8_,auVar5._0_8_,&cf_np);

  _objc_release(uVar2);

  FUN_00292f00(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar5 = _objc_opt_class(&_OBJC_CLASS___UICollectionReusableView);

  FUN_0029b060(uVar2,auVar5._8_8_,auVar5._0_8_,

               *(undefined8 *)PTR__UICollectionElementKindSectionFooter_003883e8,&cf_settingsFooter)

  ;

  _objc_release(uVar2);

  FUN_002a6220(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00292f00(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(uVar2,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar2);

  FUN_002a67a0(param_1);

  _objc_release(uVar1);

  return;

}




