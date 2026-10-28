@interface MPScreenshotContextMap : NSObject <PBCoding>
{
    NSMutableDictionary * _infoMap; // +0x8
}
+ (void)PBArrayAdd_infoMap;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)infoMap;
- (void)setInfoMap:(id)arg1;
- (void).cxx_destruct;
@end
