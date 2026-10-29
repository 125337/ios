@interface TextStateProfileCardContentView : TextStateBaseCardContentView
{
    BOOL _showSameFriendDescription; // +0x8
    BOOL _needsCreateOrUpdateLayout; // +0x9
    unsigned int _footerComponents; // +0xc
    NSString * _backgroundAccessibilityLabel; // +0x10
    double _bottomPadding; // +0x18
    UIView * _backgroundView; // +0x20
    UIView * _topSeparator; // +0x28
    TextStateSectionView * _footerView; // +0x30
    UIView * _iconSourceSeparator; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)initBackgroundView;
- (void)initTopSeparator;
- (void)initFooterView;
- (double)heightForWidth:(double)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setBottomPadding:(double)arg1;
- (void)setShowSameFriendDescription:(BOOL)arg1;
- (void)setShowResendWhenPublishFailed:(BOOL)arg1;
- (void)setBackgroundAccessibilityLabel:(id)arg1;
- (id)iconSourceSeparator;
- (BOOL)shouldHideDefaultSourceView;
- (void)onContentUpdate;
- (void)shouldUpdateLayout;
- (void)setNeedsCreateOrUpdateLayout;
- (void)createOrUpdateLayoutIfNeeded;
- (void)updateFooterViewAndLayout;
- (void)updateIconButton;
- (void)createOrUpdateLayout;
- (void)updateSeparator;
- (void)createOrUpdateLayoutWithoutApply;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (unsigned int)footerComponents;
- (void)setFooterComponents:(unsigned int)arg1;
- (BOOL)showSameFriendDescription;
- (id)backgroundAccessibilityLabel;
- (double)bottomPadding;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)topSeparator;
- (void)setTopSeparator:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void)setIconSourceSeparator:(id)arg1;
- (BOOL)needsCreateOrUpdateLayout;
- (void)setNeedsCreateOrUpdateLayout:(BOOL)arg1;
- (void).cxx_destruct;
@end
