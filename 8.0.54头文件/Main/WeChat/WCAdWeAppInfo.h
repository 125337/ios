@interface WCAdWeAppInfo : NSObject <NSCoding, NSCopying>
{
    BOOL _relievedBuyFlag; // +0x8
    BOOL _flagshipFlag; // +0x9
    unsigned int version; // +0xc
    int miniProgramType; // +0x10
    NSString * appUserName; // +0x18
    NSString * relativePagePath; // +0x20
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isValidForJump;
- (id)appUserName;
- (void)setAppUserName:(id)arg1;
- (id)relativePagePath;
- (void)setRelativePagePath:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (int)miniProgramType;
- (void)setMiniProgramType:(int)arg1;
- (BOOL)relievedBuyFlag;
- (void)setRelievedBuyFlag:(BOOL)arg1;
- (BOOL)flagshipFlag;
- (void)setFlagshipFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end

