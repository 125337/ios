@interface WCCardInvoiceCellView : MMUIView
{
    NSString * _backImageURL; // +0x8
    NSString * _topText; // +0x10
    NSString * _bottomText; // +0x18
    NSString * _moneyText; // +0x20
    NSString * _timeText; // +0x28
    WCCardData * _cardData; // +0x30
    UIImageView * _backDefaulImageView; // +0x38
    UIImage * _defaulDefaulImage; // +0x40
    UILabel * _topLabel; // +0x48
    UILabel * _bottomLabel; // +0x50
    UILabel * _moneyLabel; // +0x58
    UILabel * _timeLabel; // +0x60
    UIView * _lineView; // +0x68
}
+ (double)itemViewHieght;
+ (double)CardItemViewTopHeight;
- (id)initWithCardData:(id)arg1;
- (void)layoutSubviews;
- (void)confiUI;
- (id)getBrandColor;
- (id)scaleToTop:(id)arg1 scale:(double)arg2;
- (id)scaleToBottom:(id)arg1 scale:(double)arg2;
- (id)backDefaulImageView;
- (id)defaulDefaulImage;
- (id)topLabel;
- (id)bottomLabel;
- (id)moneyLabel;
- (id)timeLabel;
- (id)lineView;
- (void)setTopText:(id)arg1;
- (void)setBottomText:(id)arg1;
- (void)setMoneyText:(id)arg1;
- (void)setTimeText:(id)arg1;
- (id)backImageURL;
- (void)setBackImageURL:(id)arg1;
- (id)topText;
- (id)bottomText;
- (id)moneyText;
- (id)timeText;
- (id)cardData;
- (void)setCardData:(id)arg1;
- (void)setBackDefaulImageView:(id)arg1;
- (void)setDefaulDefaulImage:(id)arg1;
- (void)setTopLabel:(id)arg1;
- (void)setBottomLabel:(id)arg1;
- (void)setMoneyLabel:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end
