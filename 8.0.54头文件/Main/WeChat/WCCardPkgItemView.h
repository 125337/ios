@interface WCCardPkgItemView : MMUIView
{
    BOOL _bSelected; // +0x8
    BOOL _needSelect; // +0x9
    long long _indexForBatchAdd; // +0x10
    UIButton * _selectBtn; // +0x18
    WCCardData * _cardData; // +0x20
    BOOL _bIsLongPressHandled; // +0x28
    UIView * _cardBgView; // +0x30
    UIView * _coverView; // +0x38
    id <WCCardPkgItemViewDelegate> _delegate; // +0x40
}
+ (double)CardItemViewHeight;
+ (double)CardItemViewTopHeight;
- (id)initWithCardData:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)getCardBgView:(unsigned int)arg1 bgColor:(id)arg2;
- (id)getLogoView:(id)arg1;
- (void)onSelectChanged;
- (void)setSelectBtnState;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)needSelect;
- (void)setNeedSelect:(BOOL)arg1;
- (BOOL)bSelected;
- (void)setBSelected:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)indexForBatchAdd;
- (void)setIndexForBatchAdd:(long long)arg1;
- (void).cxx_destruct;
@end

