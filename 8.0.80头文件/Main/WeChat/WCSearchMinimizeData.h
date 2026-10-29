@interface WCSearchMinimizeData : NSObject <NSCoding>
{
    BOOL _isHomePage; // +0x8
    long long _scene; // +0x10
    long long _type; // +0x18
    NSString * _query; // +0x20
    NSString * _extParams; // +0x28
    NSString * _navBarParams; // +0x30
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (BOOL)isHomePage;
- (void)setIsHomePage:(BOOL)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)extParams;
- (void)setExtParams:(id)arg1;
- (id)navBarParams;
- (void)setNavBarParams:(id)arg1;
- (void).cxx_destruct;
@end
