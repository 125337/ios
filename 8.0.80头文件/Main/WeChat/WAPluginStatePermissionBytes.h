@interface WAPluginStatePermissionBytes : NSObject <PBCoding, WCTColumnCoding>
{
    NSArray * _arrStatePermissionBytes; // +0x8
}
+ (void)PBArrayAdd_arrStatePermissionBytes;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)description;
- (id)arrStatePermissionBytes;
- (void)setArrStatePermissionBytes:(id)arg1;
- (void).cxx_destruct;
@end
