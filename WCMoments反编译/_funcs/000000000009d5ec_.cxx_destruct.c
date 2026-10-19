// .cxx_destruct @0x9d5ec

/* Function Stack Size: 0x10 bytes */

void _YYAnimatedImageViewFetchOperation::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_curImage,0);
  _objc_destroyWeak(param_1 + (long)_view);
  return;
}

