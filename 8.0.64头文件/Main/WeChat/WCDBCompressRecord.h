@interface WCDBCompressRecord : NSObject <PBCoding>
{
    NSMutableDictionary * _records; // +0x8
}
+ (void)PBArrayAdd_records;
+ (void)initialize;
- (id)init;
- (id)getPBPropertyTable;
- (id)records;
- (void)setRecords:(id)arg1;
- (void).cxx_destruct;
@end
