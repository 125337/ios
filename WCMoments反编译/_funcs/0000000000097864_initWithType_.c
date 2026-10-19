// initWithType: @0x97864

/* Function Stack Size: 0x18 bytes */

ID WCMYYImageEncoder::initWithType_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID local_48;
  class_t *local_40;
  undefined4 local_34;
  unsigned_long_long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  if ((param_3 == 0) || (9 < param_3)) {
    _NSLog(&cf___s__d_Unsupportedimagetype__d);
    local_18 = 0;
  }
  else if (param_3 == 9) {
    _NSLog(&
           cf___s__d_WebPisnotavailable_checkthedocumentationtoseehowtoinstallWebPcomponent_https___github_com_ibireme_WCMYYImage_installation
          );
    local_18 = 0;
  }
  else {
    local_20 = 0;
    local_40 = &objc::class_t::WCMYYImageEncoder;
    local_48 = param_1;
    local_20 = _objc_msgSendSuper2(&local_48,"init");
    _objc_storeStrong(&local_20);
    if (local_20 == 0) {
      local_18 = 0;
    }
    else {
      *(unsigned_long_long *)(local_20 + 0x20) = local_30;
      uVar1 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
      uVar2 = *(undefined8 *)(local_20 + 8);
      *(undefined8 *)(local_20 + 8) = uVar1;
      (*(code *)PTR__objc_release_00110458)(uVar2);
      uVar1 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
      uVar2 = *(undefined8 *)(local_20 + 0x10);
      *(undefined8 *)(local_20 + 0x10) = uVar1;
      (*(code *)PTR__objc_release_00110458)(uVar2);
      if (local_30 - 1 < 2) {
        *(undefined8 *)(local_20 + 0x30) = 0x3feccccccccccccd;
      }
      else if (local_30 - 3 < 6) {
        *(undefined8 *)(local_20 + 0x30) = 0x3ff0000000000000;
        *(undefined1 *)(local_20 + 0x18) = 1;
      }
      else if (local_30 == 9) {
        *(undefined8 *)(local_20 + 0x30) = 0x3fe999999999999a;
      }
      local_18 = (*(code *)PTR__objc_retain_00110460)(local_20);
    }
  }
  local_34 = 1;
  _objc_storeStrong(&local_20,0);
  return local_18;
}

