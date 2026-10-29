@interface WAAgentSessionThinkingCell : WAAgentSessionBaseCell <CBTStreamMDTextViewDelegate>
{
    BOOL _isExpanded; // +0x8
    BOOL _isLoading; // +0x9
    id /* block */ _onToggleExpand; // +0x10
    id /* block */ _onTapLink; // +0x18
    UIView * _titleBarView; // +0x20
    MMUIActivityIndicatorView * _loadingView; // +0x28
    UIView * _loadingSquareView; // +0x30
    UIImageView * _completedIconView; // +0x38
    UILabel * _titleLabel; // +0x40
    UIImageView * _arrowImageView; // +0x48
    UIView * _contentContainerView; // +0x50
    CBTStreamMDTextView * _contentTextView; // +0x58
    double _contentHeight; // +0x60
}
+ (double)cellHeightWithViewModel:(id)arg1 width:(double)arg2;
+ (id)stripMarkdownLinksFromText:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)layoutTitleBar;
- (void)layoutLoadingView;
- (void)layoutTitleLabel;
- (void)layoutArrowImageView;
- (void)layoutContentContainer;
- (void)layoutContentTextViewInContainer;
- (id)attributedTextContent;
- (void)onArrowTapped;
- (void)updateContentContainerFrame;
- (void)onTextViewHeightChange:(id)arg1 height:(double)arg2;
- (void)onTextViewWidthChange:(id)arg1 width:(double)arg2;
- (void)onClickLink:(id)arg1;
- (void)onTextViewLongPress:(id)arg1 point:(CGPoint)arg2;
- (id)getBackgroundColor;
- (void)traitCollectionDidChange:(id)arg1;
- (double)calculateCellHeight;
- (void)configureWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (id /* block */)onToggleExpand;
- (void)setOnToggleExpand:(id /* block */)arg1;
- (id /* block */)onTapLink;
- (void)setOnTapLink:(id /* block */)arg1;
- (id)titleBarView;
- (void)setTitleBarView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)loadingSquareView;
- (void)setLoadingSquareView:(id)arg1;
- (id)completedIconView;
- (void)setCompletedIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (BOOL)isExpanded;
- (void)setIsExpanded:(BOOL)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (double)contentHeight;
- (void)setContentHeight:(double)arg1;
- (void).cxx_destruct;
@end
