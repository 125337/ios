@interface MMTemplateMsgAccountCache : MMObject <PBCoding, NSCopying>
{
    BOOL _isGlobalNotify; // +0x8
    NSMutableArray * _weappList; // +0x10
    NSMutableArray * _bizsvrList; // +0x18
}
+ (void)PBArrayAdd_isGlobalNotify;
+ (void)PBArrayAdd_weappList;
+ (void)PBArrayAdd_bizsvrList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isGlobalNotify;
- (void)setIsGlobalNotify:(BOOL)arg1;
- (id)weappList;
- (void)setWeappList:(id)arg1;
- (id)bizsvrList;
- (void)setBizsvrList:(id)arg1;
- (void).cxx_destruct;
@end
