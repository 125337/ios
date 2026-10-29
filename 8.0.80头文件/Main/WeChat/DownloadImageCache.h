@interface DownloadImageCache : NSObject <PBCoding>
{
    BOOL _m_bHD; // +0x8
    unsigned int _m_uiLocalID; // +0xc
    unsigned int _m_uiLastReadTime; // +0x10
    NSString * _m_nsMD5; // +0x18
    NSString * _m_nsChatName; // +0x20
}
+ (void)PBArrayAdd_m_nsMD5;
+ (void)PBArrayAdd_m_nsChatName;
+ (void)PBArrayAdd_m_uiLocalID;
+ (void)PBArrayAdd_m_uiLastReadTime;
+ (void)PBArrayAdd_m_bHD;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)m_nsMD5;
- (void)setM_nsMD5:(id)arg1;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (unsigned int)m_uiLocalID;
- (void)setM_uiLocalID:(unsigned int)arg1;
- (unsigned int)m_uiLastReadTime;
- (void)setM_uiLastReadTime:(unsigned int)arg1;
- (BOOL)m_bHD;
- (void)setM_bHD:(BOOL)arg1;
- (void).cxx_destruct;
@end
