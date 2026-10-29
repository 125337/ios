@interface EmptyDesignerPagePidRecord : MMObject <PBCoding>
{
    NSMutableSet * _recordSet; // +0x8
}
+ (void)PBArrayAdd_recordSet;
+ (void)initialize;
+ (id)getSaveRootDir;
+ (id)getSavePath;
- (id)getPBPropertyTable;
- (id)init;
- (id)recordSet;
- (void)setRecordSet:(id)arg1;
- (void).cxx_destruct;
@end

