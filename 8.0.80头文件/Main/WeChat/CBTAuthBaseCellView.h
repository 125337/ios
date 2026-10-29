@interface CBTAuthBaseCellView : CBTAsstBoardBaseCellView
{
    UIView * _cardContainerView; // +0x8
    MMWebImageView * _logoView; // +0x10
    UILabel * _sourceNameLabel; // +0x18
    UIButton * _rightIconButton; // +0x20
    MMWebImageView * _rightIconView; // +0x28
    UIView * _authContentView; // +0x30
}
- (void)prepareForReuse;
- (void)setupUI;
- (void)layoutSubviews;
- (void)renderCurrentState;
- (void)renderActiveStateWithViewModel:(id)arg1;
- (void)ensureCardContainerView;
- (void)ensureTitleViews;
- (void)ensureContentView;
- (void)layoutTitleWithViewModel:(id)arg1;
- (id)truncatedSourceName:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (id)currentViewModel;
- (BOOL)canInteractWithViewModel:(id)arg1;
- (BOOL)canInteractWithAuthCard;
- (void)updateCardStyle;
- (id)primaryTextColorWithAlpha:(double)arg1;
- (BOOL)isIgnoredFeedbackForViewModel:(id)arg1;
- (CGRect)getBubbleFrame;
- (BOOL)needsBubbleBackground;
- (id)getCellReuseId;
- (void)refreshTheme;
- (id)copyableText;
- (void)scrollToBottomAndStartLoading;
- (id)createContentView;
- (double)layoutContentView:(id)arg1 y:(double)arg2 width:(double)arg3;
- (void)refreshContentViewTheme;
- (id)contentCopyableText;
- (id)cardContainerView;
- (void)setCardContainerView:(id)arg1;
- (id)logoView;
- (void)setLogoView:(id)arg1;
- (id)sourceNameLabel;
- (void)setSourceNameLabel:(id)arg1;
- (id)rightIconButton;
- (void)setRightIconButton:(id)arg1;
- (id)rightIconView;
- (void)setRightIconView:(id)arg1;
- (id)authContentView;
- (void)setAuthContentView:(id)arg1;
- (void).cxx_destruct;
@end
