@interface AmoebaNewUBACacheModel : NSObject <NSSecureCoding>
{
    BOOL _isKeyView; // +0x8
    unsigned long long _cacheTime; // +0x10
    NSString * _reportStr; // +0x18
}
+ (BOOL)supportsSecureCoding;
- (id)initWithTime:(unsigned long long)arg1 withStr:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)toString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (id)reportStr;
- (void)setReportStr:(id)arg1;
- (BOOL)isKeyView;
- (void)setIsKeyView:(BOOL)arg1;
- (void).cxx_destruct;
@end
