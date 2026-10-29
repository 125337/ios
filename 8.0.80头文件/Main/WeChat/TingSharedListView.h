@interface TingSharedListView : UIView
{
    unsigned long long _type; // +0x8
    UIView * _contentView; // +0x10
    TingStandardSharedListView * _standardCoverView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _subtitleLabel; // +0x28
    UIView * _subtitleContainer; // +0x30
    UIImageView * _subtitleLogoView; // +0x38
    MMListenCategoryItem * _categoryItem; // +0x40
    double _textMarginTop; // +0x48
    UIEdgeInsets _titlePadding; // +0x50
}
+ (double)cardWidthForChatWithContainerWidth:(double)arg1;
+ (double)cardWidthForMomentWithContainerWidth:(double)arg1 maxContentWidth:(double)arg2;
- (id)contentView;
- (id)standardCoverView;
- (int)fontModule;
- (id)titleFont;
- (id)subtitleFont;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)subtitleContainer;
- (id)subtitleLogoView;
- (id)initWithFrame:(CGRect)arg1;
- (void)configureLayout;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)updateDisplayWith:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (void)setContentView:(id)arg1;
- (void)setStandardCoverView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleContainer:(id)arg1;
- (void)setSubtitleLogoView:(id)arg1;
- (UIEdgeInsets)titlePadding;
- (void)setTitlePadding:(UIEdgeInsets)arg1;
- (id)categoryItem;
- (void)setCategoryItem:(id)arg1;
- (double)textMarginTop;
- (void)setTextMarginTop:(double)arg1;
- (void).cxx_destruct;
@end
