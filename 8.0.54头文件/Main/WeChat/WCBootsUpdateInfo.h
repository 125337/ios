@interface WCBootsUpdateInfo : MMObject <PBCoding>
{
    unsigned int _fileSize; // +0x8
    NSString * _baseID; // +0x10
    NSString * _pid; // +0x18
    NSString * _pDataMd5; // +0x20
    NSMutableArray * _eccmd5SignatureList; // +0x28
}
+ (void)PBArrayAdd_baseID;
+ (void)PBArrayAdd_pid;
+ (void)PBArrayAdd_pDataMd5;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_eccmd5SignatureList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)baseID;
- (void)setBaseID:(id)arg1;
- (id)pid;
- (void)setPid:(id)arg1;
- (id)pDataMd5;
- (void)setPDataMd5:(id)arg1;
- (unsigned int)fileSize;
- (void)setFileSize:(unsigned int)arg1;
- (id)eccmd5SignatureList;
- (void)setEccmd5SignatureList:(id)arg1;
- (void).cxx_destruct;
@end

