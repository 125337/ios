@interface WCFinderPersonalCenterSectionFooterView : UICollectionReusableView
{
    RichTextView * _descTextView; // +0x8
    id /* block */ _clickActionBlock; // +0x10
}
+ (double)footerViewHeightWithWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)setupSubviews;
- (void)clickAction;
- (void)layoutSubviews;
- (id)descTextView;
- (void)setDescTextView:(id)arg1;
- (id /* block */)clickActionBlock;
- (void)setClickActionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

