@interface WCFinderPaidCollectionCell : UITableViewCell
{
    BOOL _isLastCell; // +0x8
    MMWebImageView * _coverImgView; // +0x10
    RichTextView * _titleView; // +0x18
    UILabel * _descLabel; // +0x20
    WCFinderAuthorContactView * _contactView; // +0x28
    UIView * _seperatorLine; // +0x30
    FinderPaidCollectionInfo * _paidCollection; // +0x38
    CGSize _layoutSize; // +0x40
}
+ (double)titleMaxWidthWithWidth:(double)arg1;
+ (double)cellHeightWithPaidCollection:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (void)setupUI;
- (void)updateWithPaidCollection:(id)arg1 isLastCell:(BOOL)arg2;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)coverImgView;
- (void)setCoverImgView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)contactView;
- (void)setContactView:(id)arg1;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg1;
- (CGSize)layoutSize;
- (void)setLayoutSize:(CGSize)arg1;
- (id)paidCollection;
- (void)setPaidCollection:(id)arg1;
- (BOOL)isLastCell;
- (void)setIsLastCell:(BOOL)arg1;
- (void).cxx_destruct;
@end
