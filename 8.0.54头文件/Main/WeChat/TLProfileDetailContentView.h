@interface TLProfileDetailContentView : UIView <ILinkEventExt>
{
    BOOL _isAtDragDownState; // +0x8
    BOOL _forceShowIconDesc; // +0x9
    id <TLProfileDetailContentViewDelegate> _delegate; // +0x10
    TLProfileModel * _tlProfile; // +0x18
    CContact * _contact; // +0x20
    long long _currentScene; // +0x28
    UIButton * _bgButton; // +0x30
    RichTextView * _descTextView; // +0x38
}
- (id)initWithScene:(long long)arg1 frame:(CGRect)arg2;
- (id)initWithScene:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceShowIconDesc:(BOOL)arg1;
- (void)setIsAtDragDownState:(BOOL)arg1;
- (id)getTLProfileModel;
- (void)updateWithTLProfileModel:(id)arg1;
- (void)updateDescLabelSizeWithWidth:(double)arg1;
- (void)updateSourceViewSizeWithWidth:(double)arg1;
- (CGSize)sizeToFitWidth:(double)arg1;
- (void)initUI;
- (void)setupLayout;
- (void)layoutSubviews;
- (void)onClickAtBackgroundView:(id)arg1;
- (double)contentTopPadding;
- (double)contentHorizonPadding;
- (double)contentBottomPadding;
- (BOOL)shouldHideContentAtDragDown;
- (BOOL)enableBackgroundButton;
- (id)delegate;
- (BOOL)isAtDragDownState;
- (BOOL)forceShowIconDesc;
- (id)tlProfile;
- (void)setTlProfile:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (long long)currentScene;
- (void)setCurrentScene:(long long)arg1;
- (id)bgButton;
- (void)setBgButton:(id)arg1;
- (id)descTextView;
- (void)setDescTextView:(id)arg1;
- (void).cxx_destruct;
@end

