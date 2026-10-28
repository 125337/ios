@interface WCFinderPersonalCenterPostActionView : UIView
{
    BOOL _showFinder; // +0x8
    BOOL _forceButtonVerticalLayout; // +0x9
    int _commentScene; // +0xc
    id <WCFinderPersonalCenterCameraActionHandle> _cameraHandle; // +0x10
    id <WCFinderPersonalCenterLiveActionHandle> _liveHandle; // +0x18
    unsigned long long _cameraRedDotShowType; // +0x20
    unsigned long long _liveRedDotShowType; // +0x28
    MMUIButton * _cameraBtn; // +0x30
    MMUIButton * _liveBtn; // +0x38
    UIView * _postSeparatorLine; // +0x40
    MMBadgeView * _liveRedDotLabel; // +0x48
    MMBadgeView * _cameraRedDotLabel; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupExpose;
- (void)setCameraHandle:(id)arg1;
- (void)setLiveHandle:(id)arg1;
- (void)setCommentScene:(int)arg1;
- (void)didMoveToWindow;
- (id)cameraButton;
- (id)createCameraBtn;
- (id)createLiveBtn;
- (id)createActionButton:(id)arg1 iconName:(id)arg2;
- (id)createPostSeparatorLine;
- (void)layoutElements;
- (void)layoutSubviews;
- (void)_layoutRedDot;
- (void)setCameraRedDotShowType:(unsigned long long)arg1;
- (void)setLiveRedDotShowType:(unsigned long long)arg1;
- (void)_updateRedDotLabel:(id *)arg1 forButton:(id)arg2 showType:(unsigned long long)arg3;
- (void)configLiveButton:(BOOL)arg1 enable:(BOOL)arg2;
- (void)setShowFinder:(BOOL)arg1;
- (id)cameraHandle;
- (id)liveHandle;
- (int)commentScene;
- (BOOL)showFinder;
- (BOOL)forceButtonVerticalLayout;
- (void)setForceButtonVerticalLayout:(BOOL)arg1;
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
- (void).cxx_destruct;
@end
