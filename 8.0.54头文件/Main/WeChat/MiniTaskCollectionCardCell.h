@interface MiniTaskCollectionCardCell : MiniTaskCollectionBaseCell <IMiniMizeUserdRecordUpdateExt>
{
    UIView * _frontView; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _subtitleLabel; // +0x18
    MMUILabel * _footerTextLabel; // +0x20
    MMUILabel * _titleTailLabel; // +0x28
    MMUIButton * _closeBtn; // +0x30
    MMWebImageView * _headerImageView; // +0x38
    UIImageView * _subtitleLabelIconImageView; // +0x40
    UIImageView * _extraIconImageView; // +0x48
    CAGradientLayer * _gradientLayer; // +0x50
    CAGradientLayer * _longVideoGradientLayer; // +0x58
    UIImage * _defaultSnapshot; // +0x60
    NSMutableArray * _voiceOverElements; // +0x68
}
+ (double)cellHeightForWidth:(double)arg1;
+ (double)titleAreaHeight;
- (void)adjustFrontViewYWithCollectionContentOffsetY:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (CGRect)menuPopoverFrame;
- (void)initContentView;
- (void)initSubviews;
- (void)initSnapshotView;
- (void)initGradientLayer;
- (void)initlongVideoGradientLayer;
- (void)initCloseBtn;
- (void)initTitleArea;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)layoutTitleLabels;
- (void)onCloseBtnClicked;
- (id)voiceOverElements;
- (void)initVoiceOverElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityLabelForCell;
- (id)accessibilityLabelForCloseBtn;
- (id)subtitleLabelIconImageForBizType:(id)arg1;
- (id)extraIconForBizName:(id)arg1;
- (BOOL)isTheOnlyCell;
- (double)widthForTitileTailLabel;
- (id)frontView;
- (void)setFrontView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)footerTextLabel;
- (void)setFooterTextLabel:(id)arg1;
- (id)titleTailLabel;
- (void)setTitleTailLabel:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg1;
- (id)subtitleLabelIconImageView;
- (void)setSubtitleLabelIconImageView:(id)arg1;
- (id)extraIconImageView;
- (void)setExtraIconImageView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)longVideoGradientLayer;
- (void)setLongVideoGradientLayer:(id)arg1;
- (id)defaultSnapshot;
- (void)setDefaultSnapshot:(id)arg1;
- (void)setVoiceOverElements:(id)arg1;
- (void).cxx_destruct;
@end

