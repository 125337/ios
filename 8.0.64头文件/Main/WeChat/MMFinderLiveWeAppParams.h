@interface MMFinderLiveWeAppParams : NSObject
{
    BOOL _silentOpen; // +0x8
    BOOL _useSheetMode; // +0x9
    BOOL _usePushAnimation; // +0xa
    BOOL _forbidPushAnimation; // +0xb
    BOOL _simulatedNativeUsePresentAnimation; // +0xc
    BOOL _showNavigationBar; // +0xd
    BOOL _showShareBtn; // +0xe
    BOOL _showDraggingBar; // +0xf
    BOOL _forceLightMode; // +0x10
    BOOL _afterOrientationPortrait; // +0x11
    int _liveWeAppOpenScene; // +0x14
    unsigned int _width; // +0x18
    unsigned int _height; // +0x1c
    NSString * _appId; // +0x20
    NSString * _pagePath; // +0x28
    unsigned long long _fromScene; // +0x30
    NSString * _sceneNote; // +0x38
    NSDictionary * _extraParamInfo; // +0x40
    unsigned long long _debugType; // +0x48
    WAAppTaskReferrerInfo * _refererData; // +0x50
    WAAppOpenCustomUIParameter * _customUIParameter; // +0x58
    UINavigationController * _navigationController; // +0x60
    id /* block */ _closeBlock; // +0x68
    id /* block */ _launchBlock; // +0x70
    id /* block */ _shareBlock; // +0x78
    NSString * _headerTipsText; // +0x80
    NSString * _transitCommonUxInfo; // +0x88
    id /* block */ _m_headerTipsDidShowBlock; // +0x90
    id /* block */ _m_headerTipsDidClickCloseBlock; // +0x98
    UIColor * _bkMaskColor; // +0xa0
    id /* block */ _willBePresentedBlock; // +0xa8
    id /* block */ _willBeDismissedBlock; // +0xb0
    id /* block */ _didBeDismissedBlock; // +0xb8
    id /* block */ _frameChangeBlock; // +0xc0
    id /* block */ _reprocessAction; // +0xc8
    id /* block */ _appTaskRunningEventHandle; // +0xd0
}
- (id)description;
- (id)initWithAppId:(id)arg1 pagePath:(id)arg2 fromScene:(unsigned long long)arg3 sceneNote:(id)arg4;
- (void)addReprocessAction:(id /* block */)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (int)liveWeAppOpenScene;
- (void)setLiveWeAppOpenScene:(int)arg1;
- (BOOL)silentOpen;
- (void)setSilentOpen:(BOOL)arg1;
- (BOOL)useSheetMode;
- (void)setUseSheetMode:(BOOL)arg1;
- (BOOL)usePushAnimation;
- (void)setUsePushAnimation:(BOOL)arg1;
- (BOOL)forbidPushAnimation;
- (void)setForbidPushAnimation:(BOOL)arg1;
- (BOOL)simulatedNativeUsePresentAnimation;
- (void)setSimulatedNativeUsePresentAnimation:(BOOL)arg1;
- (BOOL)showNavigationBar;
- (void)setShowNavigationBar:(BOOL)arg1;
- (BOOL)showShareBtn;
- (void)setShowShareBtn:(BOOL)arg1;
- (BOOL)showDraggingBar;
- (void)setShowDraggingBar:(BOOL)arg1;
- (BOOL)forceLightMode;
- (void)setForceLightMode:(BOOL)arg1;
- (id)extraParamInfo;
- (void)setExtraParamInfo:(id)arg1;
- (unsigned long long)debugType;
- (void)setDebugType:(unsigned long long)arg1;
- (unsigned int)width;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)height;
- (void)setHeight:(unsigned int)arg1;
- (id)refererData;
- (void)setRefererData:(id)arg1;
- (id)customUIParameter;
- (void)setCustomUIParameter:(id)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (BOOL)afterOrientationPortrait;
- (void)setAfterOrientationPortrait:(BOOL)arg1;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (id /* block */)launchBlock;
- (void)setLaunchBlock:(id /* block */)arg1;
- (id /* block */)shareBlock;
- (void)setShareBlock:(id /* block */)arg1;
- (id)headerTipsText;
- (void)setHeaderTipsText:(id)arg1;
- (id)transitCommonUxInfo;
- (void)setTransitCommonUxInfo:(id)arg1;
- (id /* block */)m_headerTipsDidShowBlock;
- (void)setM_headerTipsDidShowBlock:(id /* block */)arg1;
- (id /* block */)m_headerTipsDidClickCloseBlock;
- (void)setM_headerTipsDidClickCloseBlock:(id /* block */)arg1;
- (id)bkMaskColor;
- (void)setBkMaskColor:(id)arg1;
- (id /* block */)willBePresentedBlock;
- (void)setWillBePresentedBlock:(id /* block */)arg1;
- (id /* block */)willBeDismissedBlock;
- (void)setWillBeDismissedBlock:(id /* block */)arg1;
- (id /* block */)didBeDismissedBlock;
- (void)setDidBeDismissedBlock:(id /* block */)arg1;
- (id /* block */)frameChangeBlock;
- (void)setFrameChangeBlock:(id /* block */)arg1;
- (id /* block */)reprocessAction;
- (void)setReprocessAction:(id /* block */)arg1;
- (id /* block */)appTaskRunningEventHandle;
- (void)setAppTaskRunningEventHandle:(id /* block */)arg1;
- (void).cxx_destruct;
@end
