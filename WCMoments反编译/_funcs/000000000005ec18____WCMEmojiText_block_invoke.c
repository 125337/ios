// ___WCMEmojiText_block_invoke @0x5ec18

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void ___WCMEmojiText_block_invoke(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  _objc_msgSend_regularExpressionWithPattern_options_error_
            (&_OBJC_CLASS___NSRegularExpression,param_2,&cf__________r_n__1_38___,0,0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _WCMEmojiText_regex;
  _WCMEmojiText_regex = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSCache);
  uVar1 = _WCMEmojiText_images;
  _WCMEmojiText_images = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setCountLimit_(_WCMEmojiText_images,local_28,0x100);
  return;
}

