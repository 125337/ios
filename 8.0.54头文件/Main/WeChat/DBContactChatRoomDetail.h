@interface DBContactChatRoomDetail : NSObject <PBCoding>
{
    BOOL _chatRoomDescBannerNotShow; // +0x8
    unsigned int _chatRoomInfoVersion; // +0xc
    unsigned int _chatRoomInfoSvrVersion; // +0x10
    unsigned int _chatRoomStatus; // +0x14
    unsigned int _chatRoomLocalInfoVersion; // +0x18
    unsigned int _chatRoomSpamStatus; // +0x1c
    NSString * _chatRoomDesc; // +0x20
    NSString * _chatRoomDescModer; // +0x28
    unsigned long long _chatRoomDescTime; // +0x30
    NSString * _chatRoomAssociateOpenIMRoomName; // +0x38
    NSString * _richChatRoomDesc; // +0x40
}
+ (void)PBArrayAdd_chatRoomInfoVersion;
+ (void)PBArrayAdd_chatRoomInfoSvrVersion;
+ (void)PBArrayAdd_chatRoomDesc;
+ (void)PBArrayAdd_chatRoomDescModer;
+ (void)PBArrayAdd_chatRoomDescTime;
+ (void)PBArrayAdd_chatRoomStatus;
+ (void)PBArrayAdd_chatRoomLocalInfoVersion;
+ (void)PBArrayAdd_chatRoomAssociateOpenIMRoomName;
+ (void)PBArrayAdd_chatRoomDescBannerNotShow;
+ (void)PBArrayAdd_chatRoomSpamStatus;
+ (void)PBArrayAdd_richChatRoomDesc;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)chatRoomInfoVersion;
- (void)setChatRoomInfoVersion:(unsigned int)arg1;
- (unsigned int)chatRoomInfoSvrVersion;
- (void)setChatRoomInfoSvrVersion:(unsigned int)arg1;
- (id)chatRoomDesc;
- (void)setChatRoomDesc:(id)arg1;
- (id)chatRoomDescModer;
- (void)setChatRoomDescModer:(id)arg1;
- (unsigned long long)chatRoomDescTime;
- (void)setChatRoomDescTime:(unsigned long long)arg1;
- (unsigned int)chatRoomStatus;
- (void)setChatRoomStatus:(unsigned int)arg1;
- (unsigned int)chatRoomLocalInfoVersion;
- (void)setChatRoomLocalInfoVersion:(unsigned int)arg1;
- (id)chatRoomAssociateOpenIMRoomName;
- (void)setChatRoomAssociateOpenIMRoomName:(id)arg1;
- (BOOL)chatRoomDescBannerNotShow;
- (void)setChatRoomDescBannerNotShow:(BOOL)arg1;
- (unsigned int)chatRoomSpamStatus;
- (void)setChatRoomSpamStatus:(unsigned int)arg1;
- (id)richChatRoomDesc;
- (void)setRichChatRoomDesc:(id)arg1;
- (void).cxx_destruct;
@end

