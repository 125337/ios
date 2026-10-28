@interface WCFinderDynamicIconConfigStoreObject : NSObject <PBCoding>
{
    NSString * _version; // +0x8
    NSData * _content; // +0x10
    long long _compressType; // +0x18
}
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_compressType;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (long long)compressType;
- (void)setCompressType:(long long)arg1;
- (void).cxx_destruct;
@end
