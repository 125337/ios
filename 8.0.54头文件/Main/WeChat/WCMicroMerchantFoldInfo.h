@interface WCMicroMerchantFoldInfo : NSObject <NSCoding, NSCopying>
{
    NSDate * _generatedTime; // +0x8
    NSArray * _unfoldedUsernames; // +0x10
}
- (id)initWithUnfoldUsernames:(id)arg1 generatedTime:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)generatedTime;
- (void)setGeneratedTime:(id)arg1;
- (id)unfoldedUsernames;
- (void)setUnfoldedUsernames:(id)arg1;
- (void).cxx_destruct;
@end

