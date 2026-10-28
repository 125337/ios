@interface EmoticonSendRecordList : MMObject <PBCoding>
{
    NSMutableArray * _md5List; // +0x8
}
+ (void)PBArrayAdd_md5List;
+ (void)initialize;
+ (id)GetEmoticonRecentSendList;
+ (BOOL)IsEmoticonSendRecordListExist;
+ (void)RemoveEmoticonSendRecordList;
+ (id)getEmoticonRecordRootDir;
+ (id)getEmoticonSendRecordListPath;
- (id)getPBPropertyTable;
- (id)init;
- (void)addMd5:(id)arg1;
- (void)delMd5:(id)arg1;
- (void)delAllMd5;
- (BOOL)isMd5InList:(id)arg1;
- (id)allRecentSendMd5sInOrder;
- (void)saveToFile;
- (id)md5List;
- (void)setMd5List:(id)arg1;
- (void).cxx_destruct;
@end
