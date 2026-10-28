@interface WCPreGiftCardData : MMObject
{
    BOOL _ignore; // +0x8
    unsigned int _bizUin; // +0xc
    NSString * _fromUserName; // +0x10
    NSString * _fromUserHeadImgUrl; // +0x18
    long long _status; // +0x20
    NSString * _content; // +0x28
    NSString * _buttonWording; // +0x30
    NSString * _backgroundColor; // +0x38
    NSString * _packageUrl; // +0x40
    NSString * _buttonColor; // +0x48
    NSString * _outOfCardWording; // +0x50
    NSString * _seeOtherWording; // +0x58
    NSString * _orderId; // +0x60
}
- (id)fromUserName;
- (void)setFromUserName:(id)arg1;
- (id)fromUserHeadImgUrl;
- (void)setFromUserHeadImgUrl:(id)arg1;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)buttonWording;
- (void)setButtonWording:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)ignore;
- (void)setIgnore:(BOOL)arg1;
- (id)packageUrl;
- (void)setPackageUrl:(id)arg1;
- (id)buttonColor;
- (void)setButtonColor:(id)arg1;
- (id)outOfCardWording;
- (void)setOutOfCardWording:(id)arg1;
- (id)seeOtherWording;
- (void)setSeeOtherWording:(id)arg1;
- (unsigned int)bizUin;
- (void)setBizUin:(unsigned int)arg1;
- (id)orderId;
- (void)setOrderId:(id)arg1;
- (void).cxx_destruct;
@end
