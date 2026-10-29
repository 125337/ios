@interface WAPermissionWeAppBindInfo : NSObject <PBCoding, WCTColumnCoding>
{
    NSMutableArray * _arrJumpToAppInfo; // +0x8
}
+ (void)PBArrayAdd_arrJumpToAppInfo;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)description;
- (id)archivedWCTValue;
- (id)arrJumpToAppInfo;
- (void)setArrJumpToAppInfo:(id)arg1;
- (void).cxx_destruct;
@end

