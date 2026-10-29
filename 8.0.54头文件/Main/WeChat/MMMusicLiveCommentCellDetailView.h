@interface MMMusicLiveCommentCellDetailView : UIView
{
    double _maxWidth; // +0x8
    NSString * _name; // +0x10
    UILabel * _prefixLabel; // +0x18
    UILabel * _nameLabel; // +0x20
    UILabel * _suffixLabel; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setName:(id)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)name;
- (id)prefixLabel;
- (void)setPrefixLabel:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)suffixLabel;
- (void)setSuffixLabel:(id)arg1;
- (void).cxx_destruct;
@end

