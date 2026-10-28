@interface WCAdDynamicFeedTagsView : UIView <WCFlexLayoutViewProtocol>
{
    WCTagsView * _easyBuyIcon; // +0x8
    double _tagHeight; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 tagHeight:(double)arg2;
- (id)easyBuyIcon;
- (id)fetchEasyBuyIcon;
- (CGSize)onFlexLayoutMeasureSize:(CGSize)arg1;
- (void)setEasyBuyIcon:(id)arg1;
- (double)tagHeight;
- (void)setTagHeight:(double)arg1;
- (void).cxx_destruct;
@end
