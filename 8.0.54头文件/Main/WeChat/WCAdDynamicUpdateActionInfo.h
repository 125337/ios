@interface WCAdDynamicUpdateActionInfo : NSObject <NSCoding>
{
    int _expireTime; // +0x8
    NSString * _type; // +0x10
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (int)expireTime;
- (void)setExpireTime:(int)arg1;
- (void).cxx_destruct;
@end

