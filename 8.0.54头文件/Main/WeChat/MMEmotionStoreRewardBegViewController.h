@interface MMEmotionStoreRewardBegViewController : MMUIViewController <MMWebImageViewDelegate, ILinkEventExt>
{
    EmoticonStoreItem * m_storeItem; // +0x68
    EmotionRewardResponseInfo * m_rewardInfo; // +0x70
    MMUIScrollView * m_scrollView; // +0x78
    MMWebImageView * m_begRewardImage; // +0x80
    UIImageView * m_loadingGif; // +0x88
    MMUIView * m_priceButtonGridView; // +0x90
    MMUILabel * m_choosePriceTitleLabel; // +0x98
    RichTextView * m_customAmountBtn; // +0xa0
    StoreEmotionRewardLogicObject * m_rewardLogic; // +0xa8
    MMWebImageView * _designerIconView; // +0xb0
    MMUILabel * _designerNameLabel; // +0xb8
}
- (id)initWithStoreItem:(id)arg1 RewardInfo:(id)arg2 extInfo:(id)arg3;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initScrollView;
- (void)updateScrollView;
- (void)initBegRewardImage;
- (double)updateBegRewardImageFromMarginTop:(double)arg1;
- (void)initDesignerInfoView;
- (double)updateDeisgnerInfoViewFromMarginTop:(double)arg1;
- (void)initPriceButtonGridView;
- (double)updatePriceButtonGridViewFromMarginTop:(double)arg1;
- (id)textForPriceButton:(id)arg1;
- (void)initCustomAmountView;
- (double)updateCustomAmountViewFromMarginTop:(double)arg1;
- (void)onChoosePriceButton:(id)arg1;
- (void)onClickCustomAmountButton;
- (void)onClose;
- (void)onLoadImageOK:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)designerIconView;
- (void)setDesignerIconView:(id)arg1;
- (id)designerNameLabel;
- (void)setDesignerNameLabel:(id)arg1;
- (void).cxx_destruct;
@end

