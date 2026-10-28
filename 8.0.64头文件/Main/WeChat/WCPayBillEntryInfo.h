@interface WCPayBillEntryInfo : NSObject <NSCoding>
{
    NSString * _entry_word; // +0x8
    NSString * _entry_url; // +0x10
}
+ (id)GenFromDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)genFromDic:(id)arg1;
- (id)entry_word;
- (void)setEntry_word:(id)arg1;
- (id)entry_url;
- (void)setEntry_url:(id)arg1;
- (void).cxx_destruct;
@end
