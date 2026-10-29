@interface ChatRoomDetail : NSObject <PBCoding, NSCoding>
{
    BOOL _m_bChatRoomDescReaded; // +0x8
    BOOL _m_bChatRoomDescBannerNotShow; // +0x9
    unsigned int _m_uiChatRoomInfoVersion; // +0xc
    unsigned int _m_uiChatRoomInfoSvrVersion; // +0x10
    unsigned int _m_uiChatRoomStatus; // +0x14
    unsigned int _m_uiLocalInfoVersion; // +0x18
    unsigned int _m_uiChatRoomSpamStatus; // +0x1c
    NSString * _m_nsChatRoomDesc; // +0x20
    NSString * _m_nsChatRoomDescModer; // +0x28
    unsigned long long _m_uiChatRoomDescTime; // +0x30
    NSString * _m_nsAssociateOpenIMRoomName; // +0x38
    NSString * _richChatRoomDesc; // +0x40
}
+ (void)PBArrayAdd_m_uiChatRoomInfoVersion;
+ (void)PBArrayAdd_m_uiChatRoomInfoSvrVersion;
+ (void)PBArrayAdd_m_nsChatRoomDesc;
+ (void)PBArrayAdd_m_nsChatRoomDescModer;
+ (void)PBArrayAdd_m_uiChatRoomDescTime;
+ (void)PBArrayAdd_m_bChatRoomDescReaded;
+ (void)PBArrayAdd_m_uiChatRoomStatus;
+ (void)PBArrayAdd_m_uiLocalInfoVersion;
+ (void)PBArrayAdd_m_nsAssociateOpenIMRoomName;
+ (void)PBArrayAdd_m_bChatRoomDescBannerNotShow;
+ (void)PBArrayAdd_m_uiChatRoomSpamStatus;
+ (void)PBArrayAdd_richChatRoomDesc;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEmptyDesc;
- (unsigned int)m_uiChatRoomInfoVersion;
- (void)setM_uiChatRoomInfoVersion:(unsigned int)arg1;
- (unsigned int)m_uiChatRoomInfoSvrVersion;
- (void)setM_uiChatRoomInfoSvrVersion:(unsigned int)arg1;
- (id)m_nsChatRoomDesc;
- (void)setM_nsChatRoomDesc:(id)arg1;
- (id)m_nsChatRoomDescModer;
- (void)setM_nsChatRoomDescModer:(id)arg1;
- (unsigned long long)m_uiChatRoomDescTime;
- (void)setM_uiChatRoomDescTime:(unsigned long long)arg1;
- (BOOL)m_bChatRoomDescReaded;
- (void)setM_bChatRoomDescReaded:(BOOL)arg1;
- (BOOL)m_bChatRoomDescBannerNotShow;
- (void)setM_bChatRoomDescBannerNotShow:(BOOL)arg1;
- (unsigned int)m_uiChatRoomStatus;
- (void)setM_uiChatRoomStatus:(unsigned int)arg1;
- (unsigned int)m_uiLocalInfoVersion;
- (void)setM_uiLocalInfoVersion:(unsigned int)arg1;
- (id)m_nsAssociateOpenIMRoomName;
- (void)setM_nsAssociateOpenIMRoomName:(id)arg1;
- (unsigned int)m_uiChatRoomSpamStatus;
- (void)setM_uiChatRoomSpamStatus:(unsigned int)arg1;
- (id)richChatRoomDesc;
- (void)setRichChatRoomDesc:(id)arg1;
- (void).cxx_destruct;
@end

