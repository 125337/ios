@interface WANativeKeyboardAccessoryView : UIView <WAJSContextPlugin_NativeViewsRootViewProtocol>
{
    WAJSContextPlugin_NativeViewsComponent * _component; // +0x8
    UIToolbar * _toolbar; // +0x10
}
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (void)changetoHeight:(double)arg1;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (id)getChildView:(unsigned int)arg1;
- (BOOL)removeChildView:(unsigned int)arg1;
- (id)component;
- (void)setToolBar:(id)arg1;
- (void)removeToolBarFromView;
- (void)addToolbarToView:(id)arg1;
- (void).cxx_destruct;
@end
