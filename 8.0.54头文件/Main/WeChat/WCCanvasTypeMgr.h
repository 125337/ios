@interface WCCanvasTypeMgr : NSObject
{
    NSSet * _validTypeSet; // +0x8
}
- (id)init;
- (void)initValidTypeSet;
- (BOOL)isCanvasTypesAllValid:(id)arg1;
- (BOOL)isComponentTypeValid:(id)arg1;
- (BOOL)checkComponentListValid:(id)arg1;
- (BOOL)isScrollGroupComponentAllTypesValid:(id)arg1;
- (BOOL)hasCanvasTypeValid:(id)arg1;
- (id)validTypeSet;
- (void)setValidTypeSet:(id)arg1;
- (void).cxx_destruct;
@end

