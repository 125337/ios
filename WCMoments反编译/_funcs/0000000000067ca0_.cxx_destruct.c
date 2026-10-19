// .cxx_destruct @0x67ca0

/* Function Stack Size: 0x10 bytes */

void WCMYBImageBrowser::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_destroyWeak(param_1 + (long)_hiddenProjectiveView);
  _objc_storeStrong(param_1 + (long)_containerView);
  _objc_storeStrong(param_1 + (long)_rotationHandler,0);
  _objc_storeStrong(param_1 + (long)_dataMediator,0);
  _objc_storeStrong(param_1 + (long)_collectionView,0);
  _objc_storeStrong(param_1 + (long)_webImageMediator,0);
  _objc_destroyWeak(param_1 + (long)_defaultAnimatedTransition);
  _objc_storeStrong(param_1 + (long)_animatedTransition,0);
  _objc_storeStrong(param_1 + (long)_auxiliaryViewHandler,0);
  _objc_destroyWeak(param_1 + (long)_defaultToolViewHandler);
  _objc_storeStrong(param_1 + (long)_toolViewHandlers,0);
  _objc_destroyWeak(param_1 + (long)_delegate);
  _objc_destroyWeak(param_1 + (long)_dataSource);
  _objc_storeStrong(param_1 + (long)_dataSourceArray,0);
  return;
}

