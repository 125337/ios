@interface AppTVItem : NSObject <PBCoding>
{
    NSString * _tvInfo; // +0x8
}
+ (void)PBArrayAdd_tvInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)dealloc;
- (id)toXML;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)tvInfo;
- (void)setTvInfo:(id)arg1;
- (void).cxx_destruct;
@end
