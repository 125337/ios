@interface WCPayFetchQAInfo : NSObject <NSCoding>
{
    NSArray * _label; // +0x8
}
+ (id)GenFromDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)genFromDic:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end
