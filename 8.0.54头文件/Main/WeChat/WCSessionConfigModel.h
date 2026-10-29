@interface WCSessionConfigModel : MMObject <PBCoding>
{
    NSString * _sid; // +0x8
    NSMutableArray * _pageNames; // +0x10
    NSString * _prePage; // +0x18
    NSMutableArray * _sessionParams; // +0x20
}
+ (void)PBArrayAdd_sid;
+ (void)PBArrayAdd_pageNames;
+ (void)PBArrayAdd_prePage;
+ (void)PBArrayAdd_sessionParams;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)initWithSid:(id)arg1 withPageNames:(id)arg2 withPrePage:(id)arg3;
- (id)toString;
- (id)sid;
- (void)setSid:(id)arg1;
- (id)pageNames;
- (void)setPageNames:(id)arg1;
- (id)prePage;
- (void)setPrePage:(id)arg1;
- (id)sessionParams;
- (void)setSessionParams:(id)arg1;
- (void).cxx_destruct;
@end

