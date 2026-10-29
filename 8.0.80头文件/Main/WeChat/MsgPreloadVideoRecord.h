@interface MsgPreloadVideoRecord : NSObject <PBCoding>
{
    BOOL _m_bNonAutoClean; // +0x8
    unsigned int _m_uiLocalID; // +0xc
    unsigned int _m_uiAccessTime; // +0x10
    unsigned int _m_uiHasPreloadSize; // +0x14
    NSString * _m_nsChatName; // +0x18
}
+ (void)PBArrayAdd_m_nsChatName;
+ (void)PBArrayAdd_m_uiLocalID;
+ (void)PBArrayAdd_m_uiAccessTime;
+ (void)PBArrayAdd_m_uiHasPreloadSize;
+ (void)PBArrayAdd_m_bNonAutoClean;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)pathForPreloadVideo;
- (BOOL)isChatRoom;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (unsigned int)m_uiLocalID;
- (void)setM_uiLocalID:(unsigned int)arg1;
- (unsigned int)m_uiAccessTime;
- (void)setM_uiAccessTime:(unsigned int)arg1;
- (unsigned int)m_uiHasPreloadSize;
- (void)setM_uiHasPreloadSize:(unsigned int)arg1;
- (BOOL)m_bNonAutoClean;
- (void)setM_bNonAutoClean:(BOOL)arg1;
- (void).cxx_destruct;
@end
