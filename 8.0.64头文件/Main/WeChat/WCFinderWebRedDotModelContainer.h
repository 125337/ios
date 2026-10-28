@interface WCFinderWebRedDotModelContainer : NSObject <PBCoding>
{
    NSMutableDictionary * _webRedDotDic; // +0x8
}
+ (void)PBArrayAdd_webRedDotDic;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)getWebRedDotModelWithType:(long long)arg1;
- (void)setWebRedDotModel:(id)arg1 forType:(long long)arg2;
- (id)webRedDotDic;
- (void)setWebRedDotDic:(id)arg1;
- (void).cxx_destruct;
@end
