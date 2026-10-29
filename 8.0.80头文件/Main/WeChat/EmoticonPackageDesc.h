@interface EmoticonPackageDesc : MMObject <PBCoding>
{
    unsigned int _m_lastRequestTime; // +0x8
    unsigned int _m_clickFlag; // +0xc
    NSMutableArray * _m_descList; // +0x10
    NSString * _m_packageId; // +0x18
    EmotionLinkInfo * _linkInfo; // +0x20
}
+ (void)PBArrayAdd_m_descList;
+ (void)PBArrayAdd_m_packageId;
+ (void)PBArrayAdd_m_clickFlag;
+ (void)PBArrayAdd_m_lastRequestTime;
+ (void)PBArrayAdd_linkInfo;
+ (void)initialize;
+ (id)getMd5Pid:(id)arg1;
+ (id)getSaveRootDir;
+ (id)getSavePath:(id)arg1;
+ (id)loadFromCache:(id)arg1;
+ (BOOL)canDownLoadForDownloadFlag:(unsigned int)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (BOOL)hasDesc;
- (void)saveToCache;
- (id)m_descList;
- (void)setM_descList:(id)arg1;
- (id)m_packageId;
- (void)setM_packageId:(id)arg1;
- (unsigned int)m_lastRequestTime;
- (void)setM_lastRequestTime:(unsigned int)arg1;
- (unsigned int)m_clickFlag;
- (void)setM_clickFlag:(unsigned int)arg1;
- (id)linkInfo;
- (void)setLinkInfo:(id)arg1;
- (void).cxx_destruct;
@end
