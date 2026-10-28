@interface WCAdOpenWeGameHalfScreenInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _gameIcon; // +0x8
    NSString * _gameTitle; // +0x10
    NSString * _giftName; // +0x18
    NSString * _tipWording; // +0x20
    NSString * _giftCode; // +0x28
    NSString * _buttonTitle; // +0x30
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)gameIcon;
- (void)setGameIcon:(id)arg1;
- (id)gameTitle;
- (void)setGameTitle:(id)arg1;
- (id)giftName;
- (void)setGiftName:(id)arg1;
- (id)tipWording;
- (void)setTipWording:(id)arg1;
- (id)giftCode;
- (void)setGiftCode:(id)arg1;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg1;
- (void).cxx_destruct;
@end
