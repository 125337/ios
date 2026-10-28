@interface WCCoinNewUserTipsDetailView : UIView
{
    WecoinNewUserTips * _tips; // +0x8
    UIScrollView * _scrollView; // +0x10
}
- (id)initWithData:(id)arg1;
- (void)layout;
- (void)layoutSubviews;
- (void)done;
- (double)maxPopupHeight;
- (id)tips;
- (void)setTips:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void).cxx_destruct;
@end
