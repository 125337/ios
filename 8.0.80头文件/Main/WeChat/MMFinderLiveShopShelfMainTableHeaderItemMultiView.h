@interface MMFinderLiveShopShelfMainTableHeaderItemMultiView : MMFinderLiveShopShelfMainTableHeaderItemView <MMWebImageViewDelegate>
{
    BOOL _shrinkIconWhenWordingTruncated; // +0x8
    BOOL _isActionSingleColumn; // +0x9
    BOOL _hasActionWording; // +0xa
    id /* block */ _onClicked; // +0x10
    id /* block */ _onActionClicked; // +0x18
    id /* block */ _onContentSizeChanged; // +0x20
    UIButton * _button; // +0x28
    UIView * _line; // +0x30
    UILabel * _subtitleLabel; // +0x38
    UILabel * _suffixLabel; // +0x40
    EcsRichTextLabel * _richTextLabel; // +0x48
    NSArray * _iconImageViews; // +0x50
    UIButton * _contentTapButton; // +0x58
    EcsRichTextLabel * _actionRichTextLabel; // +0x60
    EcsJumpInfo * _actionJumpInfo; // +0x68
    double _iconDisplayScale; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configWithSubtitle:(id)arg1 richLabel:(id)arg2;
- (void)configWithActionWording:(id)arg1 isArrowStyle:(BOOL)arg2;
- (void)configWithActionButton:(id)arg1 isArrowStyle:(BOOL)arg2;
- (void)updateActionStyleWithSingleColumn:(BOOL)arg1;
- (void)refreshActionStyle;
- (void)configWithIconURLStrings:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (CGSize)displaySizeForIconImageView:(id)arg1;
- (CGSize)leftIconsSize;
- (BOOL)isWordingTruncated;
- (void)layoutSubviews;
- (void)layoutContent;
- (double)leftIconsWidth;
- (double)leftIconsToLabels;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)contentHeight;
- (id)addSubtitleLabel;
- (id)addSuffixLabel;
- (void)doOnClicked;
- (void)doOnButtonClicked;
- (void)doOnActionClicked;
- (CGSize)actionButtonSize;
- (double)actionContentSpacing;
- (double)actionButtonWidth;
- (double)actionButtonAvailableWidth;
- (double)buttonHeight;
- (UIEdgeInsets)actionButtonContentInsets;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityPerformMagicTap;
- (id /* block */)onClicked;
- (void)setOnClicked:(id /* block */)arg1;
- (id /* block */)onActionClicked;
- (void)setOnActionClicked:(id /* block */)arg1;
- (id /* block */)onContentSizeChanged;
- (void)setOnContentSizeChanged:(id /* block */)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)line;
- (void)setLine:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)suffixLabel;
- (void)setSuffixLabel:(id)arg1;
- (id)richTextLabel;
- (void)setRichTextLabel:(id)arg1;
- (BOOL)shrinkIconWhenWordingTruncated;
- (void)setShrinkIconWhenWordingTruncated:(BOOL)arg1;
- (id)iconImageViews;
- (void)setIconImageViews:(id)arg1;
- (id)contentTapButton;
- (void)setContentTapButton:(id)arg1;
- (BOOL)isActionSingleColumn;
- (void)setIsActionSingleColumn:(BOOL)arg1;
- (BOOL)hasActionWording;
- (void)setHasActionWording:(BOOL)arg1;
- (id)actionRichTextLabel;
- (void)setActionRichTextLabel:(id)arg1;
- (id)actionJumpInfo;
- (void)setActionJumpInfo:(id)arg1;
- (double)iconDisplayScale;
- (void)setIconDisplayScale:(double)arg1;
- (void).cxx_destruct;
@end
