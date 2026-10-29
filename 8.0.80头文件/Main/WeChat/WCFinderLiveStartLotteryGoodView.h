@interface WCFinderLiveStartLotteryGoodView : MMUIView <UITextFieldDelegate>
{
    BOOL _isOnlyShopProduct; // +0x8
    BOOL _needFilterWhiteSpace; // +0x9
    int _lotteryType; // +0xc
    unsigned int _maxInputWordCount; // +0x10
    MMUITextField * _textField; // +0x18
    id <WCFinderLiveStartLotteryGoodViewDelegate> _delegate; // +0x20
    WCFinderLiveStartLotteryProductInfo * _productInfo; // +0x28
    MMUILabel * _titleLabel; // +0x30
    UIView * _separaLine; // +0x38
    UIImageView * _goodsImageView; // +0x40
    MMUILabel * _goodsTitleLabel; // +0x48
    MMUILabel * _goodsDetailLabel; // +0x50
    MMUIButton * _actionButton; // +0x58
    MMUIView * _changeView; // +0x60
    WCFinderLiveStartLotteryGoodAddView * _addView; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateLiveStartLotteryGoodView:(id)arg1;
- (void)layoutSubviews;
- (void)actionButtonClick;
- (void)onTextFieldChanged:(id)arg1;
- (id)getLotteryDescriptionInputItemViewText;
- (void)cleanDescriptionInputItemViewText;
- (void)chooseWithType:(int)arg1 isOnlyShopProduct:(BOOL)arg2;
- (void)updateAddView;
- (void)createUI;
- (void)layoutUI;
- (void)addViewClick:(id)arg1;
- (id)addView;
- (id)changeView;
- (id)titleLabel;
- (id)separaLine;
- (id)goodsImageView;
- (id)goodsTitleLabel;
- (id)goodsDetailLabel;
- (id)actionButton;
- (id)textField;
- (BOOL)isOnlyShopProduct;
- (void)setIsOnlyShopProduct:(BOOL)arg1;
- (int)lotteryType;
- (void)setLotteryType:(int)arg1;
- (void)setTextField:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSeparaLine:(id)arg1;
- (void)setGoodsImageView:(id)arg1;
- (void)setGoodsTitleLabel:(id)arg1;
- (void)setGoodsDetailLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (unsigned int)maxInputWordCount;
- (void)setMaxInputWordCount:(unsigned int)arg1;
- (BOOL)needFilterWhiteSpace;
- (void)setNeedFilterWhiteSpace:(BOOL)arg1;
- (void)setChangeView:(id)arg1;
- (void)setAddView:(id)arg1;
- (void).cxx_destruct;
@end
