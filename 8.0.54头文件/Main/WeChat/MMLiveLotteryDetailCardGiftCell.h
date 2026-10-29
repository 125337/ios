@interface MMLiveLotteryDetailCardGiftCell : UICollectionViewCell
{
    BOOL _isSameGift; // +0x8
    LotteryGiftInfo * _giftInfo; // +0x10
    unsigned long long _type; // +0x18
    long long _giftCount; // +0x20
    MMWebImageView * _webImageView; // +0x28
    MMUILabel * _titleLabel; // +0x30
}
+ (id)identifier;
+ (double)getTitleWidthWithTitle:(long long)arg1 type:(unsigned long long)arg2 textColor:(id)arg3 isSameGift:(BOOL)arg4 giftCount:(long long)arg5 height:(double)arg6;
+ (id)getCurrentAttributedStringWithTitle:(id)arg1 type:(unsigned long long)arg2 textColor:(id)arg3 isSameGift:(BOOL)arg4 giftCount:(long long)arg5;
+ (id)getTitleLabelFontWithSize:(double)arg1;
+ (id)getTitleStringWithString:(id)arg1 font:(id)arg2 numFont:(id)arg3 textColor:(id)arg4;
- (void)updateWithLotteryGift:(id)arg1 type:(unsigned long long)arg2 giftCount:(long long)arg3 isSameGift:(BOOL)arg4;
- (id)initWithFrame:(CGRect)arg1;
- (void)createUI;
- (void)layoutUI;
- (void)layoutWebImageView;
- (void)layoutTitleLabel;
- (id)giftInfo;
- (void)setGiftInfo:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (long long)giftCount;
- (void)setGiftCount:(long long)arg1;
- (id)webImageView;
- (void)setWebImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (BOOL)isSameGift;
- (void)setIsSameGift:(BOOL)arg1;
- (void).cxx_destruct;
@end

