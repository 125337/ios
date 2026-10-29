@interface TingSharedListView : UIView
{
    unsigned long long _type; // +0x8
    UIView * _contentView; // +0x10
    TingCategoryCoverView * _coverView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _subtitleLabel; // +0x28
    MMListenCategoryItem * _categoryItem; // +0x30
    double _textMarginTop; // +0x38
}
+ (double)cardWidthForChat;
+ (double)cardWidthForMoment;
- (double)cardWidth;
- (id)contentView;
- (id)coverView;
- (int)fontModule;
- (id)titleFont;
- (id)subtitleFont;
- (id)titleLabel;
- (id)subtitleLabel;
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
- (void)setCoverView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (id)categoryItem;
- (void)setCategoryItem:(id)arg1;
- (double)textMarginTop;
- (void)setTextMarginTop:(double)arg1;
- (void).cxx_destruct;
@end

