@interface WCFinderWebRedDotModel : NSObject <PBCoding>
{
    long long _webBusinessType; // +0x8
    NSDictionary * _redDotDic; // +0x10
}
+ (void)PBArrayAdd_webBusinessType;
+ (void)PBArrayAdd_redDotDic;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithWebBusinessType:(long long)arg1;
- (void)cleanWebRedDotPath:(id)arg1;
- (void)addRedDotShowInfo:(id)arg1 ctrlInfo:(id)arg2;
- (id)getRedDotDicByRedDotPathArray:(id)arg1;
- (long long)webBusinessType;
- (void)setWebBusinessType:(long long)arg1;
- (id)redDotDic;
- (void)setRedDotDic:(id)arg1;
- (void).cxx_destruct;
@end

