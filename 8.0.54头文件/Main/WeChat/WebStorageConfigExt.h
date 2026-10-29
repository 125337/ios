@interface WebStorageConfigExt : MMObject <PBCoding, WCTColumnCoding>
{
    NSString * _filePath; // +0x8
}
+ (void)PBArrayAdd_filePath;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void).cxx_destruct;
@end

