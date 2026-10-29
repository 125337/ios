@interface WCAdStateSettingBarView : MMUIView <IWCAdStateSettingBarExt>
{
    WCDataItem * _dataItem; // +0x8
    WCAdStateSettingBarInfo * _barInfo; // +0x10
    unsigned long long _contentItemScene; // +0x18
    MMUILabel * _likeNumberTitle; // +0x20
    MMUIButton * _jumpLinkButton; // +0x28
    MMUILabel * _descLabel; // +0x30
    WCAdURLImageView * _jumpLinkIcon; // +0x38
    unsigned long long _barStyle; // +0x40
    id <WCAdStateSettingBarViewDelegate> _delegate; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3 delegate:(id)arg4;
- (void)setupUI;
- (void)initSubviews;
- (void)showViewWithStyle:(unsigned long long)arg1;
- (void)cleanSubViews;
- (id)likeNumberTitle;
- (id)jumpLinkButton;
- (id)descLabel;
- (void)layoutSubviews;
- (void)updateDataItem:(id)arg1;
- (unsigned long long)fetchBarStyle;
- (void)updateStateSettingBarStyleWithAnimation;
- (void)onJumpLinkButtonClick:(id)arg1;
- (void)onJumpLinkButtonTouchDown:(id)arg1;
- (void)onJumpLinkButtonTouchUp:(id)arg1;
- (void)resetJumpLinkButtonState;
- (void)dealloc;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)barLogic;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)barInfo;
- (void)setBarInfo:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (void)setLikeNumberTitle:(id)arg1;
- (void)setJumpLinkButton:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (id)jumpLinkIcon;
- (void)setJumpLinkIcon:(id)arg1;
- (unsigned long long)barStyle;
- (void)setBarStyle:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

