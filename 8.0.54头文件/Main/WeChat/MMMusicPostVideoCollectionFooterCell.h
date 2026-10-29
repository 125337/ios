@interface MMMusicPostVideoCollectionFooterCell : UICollectionReusableView
{
    MMUIActivityIndicatorView * m_loadingView; // +0x8
    UIImageView * m_pageEndImageView; // +0x10
}
+ (id)reuseKeyStr;
+ (CGSize)getFooterViewSize:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)layoutSubviews;
- (void)setLoadingVisible:(BOOL)arg1;
- (void)setVisible:(BOOL)arg1;
- (void).cxx_destruct;
@end

