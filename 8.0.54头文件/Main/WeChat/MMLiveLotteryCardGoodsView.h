@interface MMLiveLotteryCardGoodsView : MMUIView
{
    id /* block */ _cardGoodsViewBlock; // +0x8
    UIImageView * _goodsImageView; // +0x10
    MMUIView * _goodsTitleView; // +0x18
    MMUILabel * _goodsTitleLabel; // +0x20
    UITapGestureRecognizer * _tapRecognizer; // +0x28
    MMFinderLiveLotteryInfo * _lotteryInfo; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)tapRecognizer;
- (void)cardGoodsViewClick;
- (void)createUI;
- (void)layoutUI;
- (void)updateWithLotteryInfo:(id)arg1;
- (id)goodsImageView;
- (id)goodsTitleView;
- (id)goodsTitleLabel;
- (id /* block */)cardGoodsViewBlock;
- (void)setCardGoodsViewBlock:(id /* block */)arg1;
- (void)setGoodsImageView:(id)arg1;
- (void)setGoodsTitleView:(id)arg1;
- (void)setGoodsTitleLabel:(id)arg1;
- (void)setTapRecognizer:(id)arg1;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg1;
- (void).cxx_destruct;
@end

