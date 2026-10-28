@interface PreloadVideoRecord : NSObject <PBCoding>
{
    unsigned int _m_uiAccessTime; // +0x8
    NSString * _m_nsTempPath; // +0x10
    NSString * _m_nsChatName; // +0x18
}
+ (void)PBArrayAdd_m_nsTempPath;
+ (void)PBArrayAdd_m_uiAccessTime;
+ (void)PBArrayAdd_m_nsChatName;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)pathForTempVideo;
- (id)m_nsTempPath;
- (void)setM_nsTempPath:(id)arg1;
- (unsigned int)m_uiAccessTime;
- (void)setM_uiAccessTime:(unsigned int)arg1;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (void).cxx_destruct;
@end
