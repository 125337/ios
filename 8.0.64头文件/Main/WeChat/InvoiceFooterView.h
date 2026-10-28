@interface InvoiceFooterView : UIView
{
    NSString * _title; // +0x8
    UILabel * _titleLabel; // +0x10
}
+ (double)minHeightWithTitle:(id)arg1 width:(double)arg2;
+ (id)attrTitleByTitle:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
