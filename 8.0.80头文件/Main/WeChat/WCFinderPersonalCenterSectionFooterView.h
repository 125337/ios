@interface WCFinderPersonalCenterSectionFooterView : UICollectionReusableView
{
    BOOL _usesDuoLandscapeLayout; // +0x8
    RichTextView * _descTextView; // +0x10
    id /* block */ _clickActionBlock; // +0x18
}
+ (double)footerViewHeightWithWidth:(double)arg1 horizontalPadding:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)setupSubviews;
- (void)clickAction;
- (void)layoutSubviews;
- (id)descTextView;
- (void)setDescTextView:(id)arg1;
- (id /* block */)clickActionBlock;
- (void)setClickActionBlock:(id /* block */)arg1;
- (BOOL)usesDuoLandscapeLayout;
- (void)setUsesDuoLandscapeLayout:(BOOL)arg1;
- (void).cxx_destruct;
@end
