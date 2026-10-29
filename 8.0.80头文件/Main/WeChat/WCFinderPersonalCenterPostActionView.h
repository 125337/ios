@interface WCFinderPersonalCenterPostActionView : UIView
{
    BOOL _showFinder; // +0x8
    BOOL _hasAppliedSlenderButtonAppearance; // +0x9
    int _commentScene; // +0xc
    id <WCFinderPersonalCenterCameraActionHandle> _cameraHandle; // +0x10
    id <WCFinderPersonalCenterLiveActionHandle> _liveHandle; // +0x18
    unsigned long long _layoutStyle; // +0x20
    unsigned long long _cameraRedDotShowType; // +0x28
    unsigned long long _liveRedDotShowType; // +0x30
    MMUIButton * _cameraBtn; // +0x38
    MMUIButton * _liveBtn; // +0x40
    UIView * _postSeparatorLine; // +0x48
    MMBadgeView * _liveRedDotLabel; // +0x50
    MMBadgeView * _cameraRedDotLabel; // +0x58
    NSDictionary * _reportInfo; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupExpose;
- (void)setCameraHandle:(id)arg1;
- (void)setLiveHandle:(id)arg1;
- (void)setCommentScene:(int)arg1;
- (void)setupCommentScene:(int)arg1 needPercentPostReport:(BOOL)arg2;
- (void)didMoveToWindow;
- (id)cameraButton;
- (void)setLayoutStyle:(unsigned long long)arg1;
- (id)createCameraBtn;
- (id)createLiveBtn;
- (id)createActionButton:(id)arg1 iconName:(id)arg2;
- (id)createPostSeparatorLine;
- (BOOL)isSlenderLayout;
- (BOOL)useVerticalButtonContentLayout;
- (void)updateButtonAppearanceForCurrentStyle;
- (void)layoutElements;
- (void)layoutSubviews;
- (void)_layoutRedDotLabel:(id)arg1 forButton:(id)arg2;
- (void)_layoutRedDot;
- (void)setCameraRedDotShowType:(unsigned long long)arg1;
- (void)setLiveRedDotShowType:(unsigned long long)arg1;
- (void)_updateRedDotLabel:(id *)arg1 forButton:(id)arg2 showType:(unsigned long long)arg3;
- (void)configLiveButton:(BOOL)arg1 enable:(BOOL)arg2;
- (void)setShowFinder:(BOOL)arg1;
- (void)updateReportInfo:(id)arg1;
- (id)cameraHandle;
- (id)liveHandle;
- (int)commentScene;
- (BOOL)showFinder;
- (unsigned long long)layoutStyle;
- (unsigned long long)cameraRedDotShowType;
- (unsigned long long)liveRedDotShowType;
- (id)cameraBtn;
- (void)setCameraBtn:(id)arg1;
- (id)liveBtn;
- (void)setLiveBtn:(id)arg1;
- (id)postSeparatorLine;
- (void)setPostSeparatorLine:(id)arg1;
- (id)liveRedDotLabel;
- (void)setLiveRedDotLabel:(id)arg1;
- (id)cameraRedDotLabel;
- (void)setCameraRedDotLabel:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (BOOL)hasAppliedSlenderButtonAppearance;
- (void)setHasAppliedSlenderButtonAppearance:(BOOL)arg1;
- (void).cxx_destruct;
@end
