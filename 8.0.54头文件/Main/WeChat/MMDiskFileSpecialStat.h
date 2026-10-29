@interface MMDiskFileSpecialStat : NSObject <PBCoding>
{
    unsigned int _m_fileNum; // +0x8
    unsigned long long _m_fileSize; // +0x10
}
+ (void)PBArrayAdd_m_fileNum;
+ (void)PBArrayAdd_m_fileSize;
+ (void)initialize;
+ (void)sumSpecialFileStat:(long long)arg1 specialType:(int)arg2 withFileSize:(unsigned long long)arg3 toDic:(id)arg4;
+ (void)sumDicSpecialFilStat:(id)arg1 toDic:(id)arg2;
- (id)getPBPropertyTable;
- (id)description;
- (void)sumSpecialFileStat:(id)arg1;
- (unsigned int)m_fileNum;
- (void)setM_fileNum:(unsigned int)arg1;
- (unsigned long long)m_fileSize;
- (void)setM_fileSize:(unsigned long long)arg1;
@end

