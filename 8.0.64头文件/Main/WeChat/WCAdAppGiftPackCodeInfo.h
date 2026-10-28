@interface WCAdAppGiftPackCodeInfo : NSObject <NSCoding>
{
    NSString * _appGiftPackCode; // +0x8
    NSString * _appGiftPackCodeTips; // +0x10
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)appGiftPackCode;
- (void)setAppGiftPackCode:(id)arg1;
- (id)appGiftPackCodeTips;
- (void)setAppGiftPackCodeTips:(id)arg1;
- (void).cxx_destruct;
@end
