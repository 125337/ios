@interface ScanSearchItem : NSObject <NSCoding>
{
    NSString * _query; // +0x8
    NSString * _extInfo; // +0x10
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
