@interface LiteAppTasksContextData : NSObject <NSSecureCoding>
{
    NSString * _appId; // +0x8
    NSString * _page; // +0x10
    NSString * _query; // +0x18
    NSString * _extraData; // +0x20
}
+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (void).cxx_destruct;
@end
