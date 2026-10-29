@interface TingLaunchOptions : NSObject
{
    BOOL _disableAutoTabSwitch; // +0x8
    BOOL _realFocusOnLateListen; // +0x9
    BOOL _playManually; // +0xa
    BOOL _isFromFinderProfileAuthor; // +0xb
    BOOL _refreshMusicSquarePreload; // +0xc
    BOOL _skipRefreshIfCreate; // +0xd
    BOOL _markOnlyRefresh; // +0xe
    BOOL _hasSquare; // +0xf
    BOOL _forceObliterateOther; // +0x10
    BOOL _alwaysOpenNewPage; // +0x11
    BOOL _shouldPlaySubCategory; // +0x12
    BOOL _isSwipeMode; // +0x13
    int _scene; // +0x14
    int _displayMode; // +0x18
    int _bizAudioEnterScene; // +0x1c
    unsigned long long _bizAudiodPlayerUIMode; // +0x20
    unsigned long long _bizType; // +0x28
    TingLaunchOptionsNextPage * _nextPage; // +0x30
    UIViewController * _fromViewController; // +0x38
    ActiveSessionContext * _sessionContext; // +0x40
    TingLaunchOptionsOpenPlayerTab * _openPlayerTab; // +0x48
    NSString * _categoryCommentId; // +0x50
    unsigned long long _resetOptions; // +0x58
    NSString * _focusListId; // +0x60
    TingListSourceContext * _focusListContext; // +0x68
    TingItem * _tingItem; // +0x70
    unsigned long long _launchType; // +0x78
    TingEntranceReddotInfo * _entranceReddotInfo; // +0x80
    NSString * _tingAppIdentifier; // +0x88
    NSData * _finderSleepModeJumpInfo; // +0x90
    NSDictionary * _flutterRouterExtraParams; // +0x98
}
+ (int)tingProfileScene:(int)arg1;
+ (id)launchOptionsWithScene:(int)arg1;
+ (id)unsafeLaunchOptionsWithLaunchOptions:(id)arg1 scene:(int)arg2;
- (id)flutterRouterParams;
- (id)flutterInitRouterName;
- (id)flutterRouterName;
- (id)initWithScene:(int)arg1;
- (void)setEnterPlayer:(BOOL)arg1;
- (BOOL)enterPlayer;
- (id)sessionContext;
- (int)scene;
- (void)setScene:(int)arg1;
- (int)displayMode;
- (void)setDisplayMode:(int)arg1;
- (unsigned long long)bizAudiodPlayerUIMode;
- (void)setBizAudiodPlayerUIMode:(unsigned long long)arg1;
- (unsigned long long)bizType;
- (void)setBizType:(unsigned long long)arg1;
- (int)bizAudioEnterScene;
- (void)setBizAudioEnterScene:(int)arg1;
- (id)nextPage;
- (void)setNextPage:(id)arg1;
- (id)fromViewController;
- (void)setFromViewController:(id)arg1;
- (void)setSessionContext:(id)arg1;
- (id)openPlayerTab;
- (void)setOpenPlayerTab:(id)arg1;
- (id)categoryCommentId;
- (void)setCategoryCommentId:(id)arg1;
- (unsigned long long)resetOptions;
- (void)setResetOptions:(unsigned long long)arg1;
- (BOOL)disableAutoTabSwitch;
- (void)setDisableAutoTabSwitch:(BOOL)arg1;
- (BOOL)realFocusOnLateListen;
- (void)setRealFocusOnLateListen:(BOOL)arg1;
- (id)focusListId;
- (void)setFocusListId:(id)arg1;
- (id)focusListContext;
- (void)setFocusListContext:(id)arg1;
- (id)tingItem;
- (void)setTingItem:(id)arg1;
- (unsigned long long)launchType;
- (void)setLaunchType:(unsigned long long)arg1;
- (BOOL)playManually;
- (void)setPlayManually:(BOOL)arg1;
- (BOOL)isFromFinderProfileAuthor;
- (void)setIsFromFinderProfileAuthor:(BOOL)arg1;
- (BOOL)refreshMusicSquarePreload;
- (void)setRefreshMusicSquarePreload:(BOOL)arg1;
- (id)entranceReddotInfo;
- (void)setEntranceReddotInfo:(id)arg1;
- (BOOL)skipRefreshIfCreate;
- (void)setSkipRefreshIfCreate:(BOOL)arg1;
- (BOOL)markOnlyRefresh;
- (void)setMarkOnlyRefresh:(BOOL)arg1;
- (BOOL)hasSquare;
- (void)setHasSquare:(BOOL)arg1;
- (BOOL)forceObliterateOther;
- (void)setForceObliterateOther:(BOOL)arg1;
- (id)tingAppIdentifier;
- (void)setTingAppIdentifier:(id)arg1;
- (id)finderSleepModeJumpInfo;
- (void)setFinderSleepModeJumpInfo:(id)arg1;
- (id)flutterRouterExtraParams;
- (void)setFlutterRouterExtraParams:(id)arg1;
- (BOOL)alwaysOpenNewPage;
- (void)setAlwaysOpenNewPage:(BOOL)arg1;
- (BOOL)shouldPlaySubCategory;
- (void)setShouldPlaySubCategory:(BOOL)arg1;
- (BOOL)isSwipeMode;
- (void)setIsSwipeMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
