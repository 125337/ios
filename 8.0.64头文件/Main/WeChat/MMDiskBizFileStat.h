@interface MMDiskBizFileStat : NSObject <PBCoding>
{
    unsigned int _m_fileNum; // +0x8
    unsigned int _m_delFileNum; // +0xc
    unsigned long long _m_fileSize; // +0x10
    unsigned long long _m_delFileSize; // +0x18
    _TtC6WeChat28MMDiskBizStatDayAggregations * _aggregationsByDayInterval; // +0x20
}
+ (void)PBArrayAdd_m_fileNum;
+ (void)PBArrayAdd_m_fileSize;
+ (void)PBArrayAdd_m_delFileNum;
+ (void)PBArrayAdd_m_delFileSize;
+ (void)PBArrayAdd_aggregationsByDayInterval;
+ (void)initialize;
+ (id)getFileStatFormDic:(id)arg1 withType:(long long)arg2;
+ (void)sumFileSize:(unsigned long long)arg1 fileInterval:(long long)arg2 withType:(long long)arg3 dicStat:(id)arg4;
+ (void)sumDelFileNum:(unsigned int)arg1 DelFileSize:(unsigned long long)arg2 withType:(long long)arg3 dicStat:(id)arg4;
+ (void)sumDicFilStat:(id)arg1 toDic:(id)arg2;
- (id)getPBPropertyTable;
- (id)init;
- (id)description;
- (void)sumFileStat:(id)arg1;
- (unsigned int)m_fileNum;
- (void)setM_fileNum:(unsigned int)arg1;
- (unsigned long long)m_fileSize;
- (void)setM_fileSize:(unsigned long long)arg1;
- (unsigned int)m_delFileNum;
- (void)setM_delFileNum:(unsigned int)arg1;
- (unsigned long long)m_delFileSize;
- (void)setM_delFileSize:(unsigned long long)arg1;
- (id)aggregationsByDayInterval;
- (void)setAggregationsByDayInterval:(id)arg1;
- (void).cxx_destruct;
@end
