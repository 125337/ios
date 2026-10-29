@interface WCCanvasRandomPickCardBottomIntroduceView : MMUIView
{
    WCCanvasRandomLayoutEncorePickInfo * _encoreInfo; // +0x8
    unsigned long long _cardsRemainCount; // +0x10
    WCAdURLImageView * _iconView; // +0x18
    UILabel * _prefixLabel; // +0x20
    UILabel * _countLabel; // +0x28
    UILabel * _suffixLabel; // +0x30
}
+ (CGSize)calcIntroduceViewSizeWithEncoreInfo:(id)arg1;
+ (CGSize)calcLabelSizeWithFont:(id)arg1 text:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 encoreInfo:(id)arg2;
- (void)setCardsRemainCount:(unsigned long long)arg1;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)iconView;
- (id)prefixLabel;
- (id)countLabel;
- (id)suffixLabel;
- (id)encoreInfo;
- (void)setEncoreInfo:(id)arg1;
- (unsigned long long)cardsRemainCount;
- (void)setIconView:(id)arg1;
- (void)setPrefixLabel:(id)arg1;
- (void)setCountLabel:(id)arg1;
- (void)setSuffixLabel:(id)arg1;
- (void).cxx_destruct;
@end
