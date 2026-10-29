@interface MMDiskWeChatFileClassStat : NSObject <PBCoding>
{
    unsigned int _m_fileNum; // +0x8
    unsigned long long _m_fileSize; // +0x10
}
+ (void)PBArrayAdd_m_fileNum;
+ (void)PBArrayAdd_m_fileSize;
+ (void)initialize;
+ (void)sumFileNum:(unsigned int)arg1 fileSize:(unsigned long long)arg2 withType:(int)arg3 dicStat:(id)arg4;
+ (void)sumDicFileClassStat:(id)arg1 toDic:(id)arg2;
- (id)getPBPropertyTable;
- (id)description;
- (void)sumFileClassStat:(id)arg1;
- (unsigned int)m_fileNum;
- (void)setM_fileNum:(unsigned int)arg1;
- (unsigned long long)m_fileSize;
- (void)setM_fileSize:(unsigned long long)arg1;
@end

