@interface WCFinderJumperProfileParams : NSObject <YYModel>
{
    BOOL _isSetFlag; // +0x8
    int _tabType; // +0xc
    NSString * _username; // +0x10
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (BOOL)isSetFlag;
- (void)setIsSetFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end

