@interface WCFinderLiveHomePageScrollActionSheet : MMScrollActionSheet <WCFinderLiveShareSceneProvider>
{
    BOOL _shareFromFastForward; // +0x8
    BOOL _forceDarkMode; // +0x9
    unsigned long long _containerId; // +0x10
    WCFinderFeedContentVM * _contentVM; // +0x18
    NSArray * _itemArrayConfig; // +0x20
    long long _liveShareScene; // +0x28
}
- (id)initWithContentVM:(id)arg1 containerId:(unsigned long long)arg2;
- (id)initWithContentVM:(id)arg1 containerId:(unsigned long long)arg2 forceDarkMode:(BOOL)arg3;
- (id)_getFinderDisableColor;
- (void)setUpCustomRecentForwardScrollViewWithMenuActionDelegate:(id)arg1 screenWid:(double)arg2 scene:(unsigned long long)arg3 msgType:(unsigned int)arg4 innerAppMsgType:(unsigned int)arg5;
- (void)setItemArrayConfig:(id)arg1;
- (BOOL)hasItem:(unsigned long long)arg1;
- (id)genMenuIconArray:(id)arg1 contentVM:(id)arg2;
- (id)getRowItems:(unsigned long long)arg1 contentVM:(id)arg2;
- (BOOL)_itemEnable:(unsigned long long)arg1 contentVM:(id)arg2;
- (void)configScrollActionSheet:(id)arg1 rowIndex:(unsigned long long)arg2;
- (id)transparentViewBackgroundColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)titleLabelColor;
- (id)cancelButtonTitleColor;
- (id)containerViewBlurBackgroundColor;
- (id)seperatorBackgroundColor;
- (unsigned long long)containerId;
- (void)setContainerId:(unsigned long long)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)itemArrayConfig;
- (long long)liveShareScene;
- (void)setLiveShareScene:(long long)arg1;
- (BOOL)shareFromFastForward;
- (void)setShareFromFastForward:(BOOL)arg1;
- (BOOL)forceDarkMode;
- (void)setForceDarkMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
