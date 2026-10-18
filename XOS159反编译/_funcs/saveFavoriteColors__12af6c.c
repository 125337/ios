// saveFavoriteColors @0x12af6c


/* Function Stack Size: 0x10 bytes */



void XZYColorPickerViewController::saveFavoriteColors(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar2 = FUN_002937a0(*(undefined8 *)(param_1 + (long)_favoriteColors));

  FUN_002a0060(uVar1,auVar2._8_8_,auVar2._0_8_,&cf_xzyColorPickerFavorites);

  _objc_release(auVar2._0_8_);

  _objc_release(uVar1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar1);

  return;

}




