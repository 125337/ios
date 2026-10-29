@interface WxpayCapabilityTarget : NSObject <NSCopying>
{
    NSString * _kind; // +0x8
    NSString * _name; // +0x10
    NSString * _method; // +0x18
    NSString * _subject; // +0x20
}
+ (id)targetWithKind:(id)arg1 name:(id)arg2;
+ (id)targetWithKind:(id)arg1 name:(id)arg2 method:(id)arg3;
- (id)initInternal;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)kind;
- (id)name;
- (id)method;
- (id)subject;
- (void).cxx_destruct;
@end
