@interface WCFinderJumpInfoParams : NSObject
{
    BOOL _ignoreCheckCardWebDelegate; // +0x8
    BOOL _showHalfBgMask; // +0x9
    BOOL _showPostVideoToCommentAreaSwitch; // +0xa
    BOOL _miniAppShowNativeNav; // +0xb
    BOOL _needHiddenTemplateNav; // +0xc
    BOOL _useCustomHeight; // +0xd
    BOOL _useDarkModeLoadingForWeapp; // +0xe
    BOOL _preferNoRelaunch; // +0xf
    BOOL _shouldCheckCanvasDelegate; // +0x10
    BOOL _enableBulletComment; // +0x11
    BOOL _showLoadingView; // +0x12
    BOOL _fakeLiveMorphTransition; // +0x13
    BOOL _livePresentAnimated; // +0x14
    BOOL _canDuetShootPublish; // +0x15
    BOOL _forceLightMode; // +0x16
    int _fromCommentScene; // +0x18
    WCFinderFeedContentVM * _contentVM; // +0x20
    FinderJumpInfo_Style * _style; // +0x28
    id <WCFinderCardWebViewControllerDelegate> _cardWebDelegate; // +0x30
    unsigned long long _pos; // +0x38
    unsigned long long _streamEntranceType; // +0x40
    WCFinderContact * _contact; // +0x48
    NSString * _topicContent; // +0x50
    WCFinderPostSourceInfo * _sourceInfo; // +0x58
    NSString * _profilebypInfo; // +0x60
    unsigned long long _shareScene; // +0x68
    NSString * _clickTraceId; // +0x70
    unsigned long long _miniAppScene; // +0x78
    NSString * _sceneNote; // +0x80
    NSString * _finderId; // +0x88
    WAAppTaskHandlerWrapper * _handlerWraper; // +0x90
    NSDictionary * _miniAppExtraDict; // +0x98
    double _customHeight; // +0xa0
    WCFinderLiteAppExtraParams * _liteAppExtraParams; // +0xa8
    id <WCCanvasHalfScreenViewControllerDelegate> _adCanvasDelegate; // +0xb0
    long long _sectionIndex; // +0xb8
    NSString * _livingJumperAdReportInfo; // +0xc0
    NSString * _uxinfo; // +0xc8
    id <WCAdFinderDialogViewControllerDelegate> _adDialogDelegate; // +0xd0
    id <WCFinderCollectionHalfScreenViewControllerDelegate> _collectionDelegate; // +0xd8
    WCFinderShareEntranceMessageInfo * _entranceMessageInfo; // +0xe0
    unsigned long long _livingIconType; // +0xe8
    id <MMLiveMorphDismissTarget> _liveMorphDismissTarget; // +0xf0
    NSString * _navigationLeftIconName; // +0xf8
    unsigned long long _postEnterScene; // +0x100
    id /* block */ _liteAppStoreBlock; // +0x108
    id <WCFinderFeedHighlightsPanelDelegate> _highlightsPanelDelegate; // +0x110
    NSDictionary * _searchTemplateParams; // +0x118
    unsigned long long _searchEditState; // +0x120
    id /* block */ _targetDeallocBlock; // +0x128
    id /* block */ _ecsEventAction; // +0x130
    id /* block */ _realNameFlowCompletion; // +0x138
    id /* block */ _phoneNumberFlowCompletion; // +0x140
    id /* block */ _eventHandler; // +0x148
    FinderJumpInfo_Style * _defaultStyle; // +0x150
}
- (id)init;
- (id)initWithStyle:(id)arg1;
- (id)style;
- (id)liteAppExtraParams;
- (void)setDefaultStyle:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (int)fromCommentScene;
- (void)setFromCommentScene:(int)arg1;
- (void)setStyle:(id)arg1;
- (id)cardWebDelegate;
- (void)setCardWebDelegate:(id)arg1;
- (BOOL)ignoreCheckCardWebDelegate;
- (void)setIgnoreCheckCardWebDelegate:(BOOL)arg1;
- (unsigned long long)pos;
- (void)setPos:(unsigned long long)arg1;
- (unsigned long long)streamEntranceType;
- (void)setStreamEntranceType:(unsigned long long)arg1;
- (BOOL)showHalfBgMask;
- (void)setShowHalfBgMask:(BOOL)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)topicContent;
- (void)setTopicContent:(id)arg1;
- (id)sourceInfo;
- (void)setSourceInfo:(id)arg1;
- (BOOL)showPostVideoToCommentAreaSwitch;
- (void)setShowPostVideoToCommentAreaSwitch:(BOOL)arg1;
- (id)profilebypInfo;
- (void)setProfilebypInfo:(id)arg1;
- (unsigned long long)shareScene;
- (void)setShareScene:(unsigned long long)arg1;
- (id)clickTraceId;
- (void)setClickTraceId:(id)arg1;
- (unsigned long long)miniAppScene;
- (void)setMiniAppScene:(unsigned long long)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (BOOL)miniAppShowNativeNav;
- (void)setMiniAppShowNativeNav:(BOOL)arg1;
- (id)finderId;
- (void)setFinderId:(id)arg1;
- (id)handlerWraper;
- (void)setHandlerWraper:(id)arg1;
- (id)miniAppExtraDict;
- (void)setMiniAppExtraDict:(id)arg1;
- (BOOL)needHiddenTemplateNav;
- (void)setNeedHiddenTemplateNav:(BOOL)arg1;
- (BOOL)useCustomHeight;
- (void)setUseCustomHeight:(BOOL)arg1;
- (double)customHeight;
- (void)setCustomHeight:(double)arg1;
- (BOOL)useDarkModeLoadingForWeapp;
- (void)setUseDarkModeLoadingForWeapp:(BOOL)arg1;
- (BOOL)preferNoRelaunch;
- (void)setPreferNoRelaunch:(BOOL)arg1;
- (void)setLiteAppExtraParams:(id)arg1;
- (id)adCanvasDelegate;
- (void)setAdCanvasDelegate:(id)arg1;
- (BOOL)shouldCheckCanvasDelegate;
- (void)setShouldCheckCanvasDelegate:(BOOL)arg1;
- (long long)sectionIndex;
- (void)setSectionIndex:(long long)arg1;
- (id)livingJumperAdReportInfo;
- (void)setLivingJumperAdReportInfo:(id)arg1;
- (BOOL)enableBulletComment;
- (void)setEnableBulletComment:(BOOL)arg1;
- (BOOL)showLoadingView;
- (void)setShowLoadingView:(BOOL)arg1;
- (id)uxinfo;
- (void)setUxinfo:(id)arg1;
- (id)adDialogDelegate;
- (void)setAdDialogDelegate:(id)arg1;
- (id)collectionDelegate;
- (void)setCollectionDelegate:(id)arg1;
- (id)entranceMessageInfo;
- (void)setEntranceMessageInfo:(id)arg1;
- (unsigned long long)livingIconType;
- (void)setLivingIconType:(unsigned long long)arg1;
- (BOOL)fakeLiveMorphTransition;
- (void)setFakeLiveMorphTransition:(BOOL)arg1;
- (BOOL)livePresentAnimated;
- (void)setLivePresentAnimated:(BOOL)arg1;
- (id)liveMorphDismissTarget;
- (void)setLiveMorphDismissTarget:(id)arg1;
- (id)navigationLeftIconName;
- (void)setNavigationLeftIconName:(id)arg1;
- (unsigned long long)postEnterScene;
- (void)setPostEnterScene:(unsigned long long)arg1;
- (BOOL)canDuetShootPublish;
- (void)setCanDuetShootPublish:(BOOL)arg1;
- (id /* block */)liteAppStoreBlock;
- (void)setLiteAppStoreBlock:(id /* block */)arg1;
- (BOOL)forceLightMode;
- (void)setForceLightMode:(BOOL)arg1;
- (id)highlightsPanelDelegate;
- (void)setHighlightsPanelDelegate:(id)arg1;
- (id)searchTemplateParams;
- (void)setSearchTemplateParams:(id)arg1;
- (unsigned long long)searchEditState;
- (void)setSearchEditState:(unsigned long long)arg1;
- (id /* block */)targetDeallocBlock;
- (void)setTargetDeallocBlock:(id /* block */)arg1;
- (id /* block */)ecsEventAction;
- (void)setEcsEventAction:(id /* block */)arg1;
- (id /* block */)realNameFlowCompletion;
- (void)setRealNameFlowCompletion:(id /* block */)arg1;
- (id /* block */)phoneNumberFlowCompletion;
- (void)setPhoneNumberFlowCompletion:(id /* block */)arg1;
- (id /* block */)eventHandler;
- (void)setEventHandler:(id /* block */)arg1;
- (id)defaultStyle;
- (void).cxx_destruct;
@end
