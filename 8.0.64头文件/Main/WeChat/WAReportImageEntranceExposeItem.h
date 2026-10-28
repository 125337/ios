@interface WAReportImageEntranceExposeItem : WAReportBaseItem
{
    unsigned int _exposeUserUin; // +0x8
    int _chatType; // +0xc
    int _chatRoomUserCount; // +0x10
    unsigned int _exposeTimeStamp; // +0x14
    int _exposeScene; // +0x18
    NSString * _userName; // +0x20
    NSString * _chatName; // +0x28
    NSString * _chatSessionId; // +0x30
    NSString * _imageSrc; // +0x38
    NSString * _exposeAppId; // +0x40
    NSString * _exposePath; // +0x48
    NSString * _imageKey; // +0x50
}
- (int)reportID;
- (id)reportString;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)exposeUserUin;
- (void)setExposeUserUin:(unsigned int)arg1;
- (int)chatType;
- (void)setChatType:(int)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (int)chatRoomUserCount;
- (void)setChatRoomUserCount:(int)arg1;
- (id)chatSessionId;
- (void)setChatSessionId:(id)arg1;
- (unsigned int)exposeTimeStamp;
- (void)setExposeTimeStamp:(unsigned int)arg1;
- (int)exposeScene;
- (void)setExposeScene:(int)arg1;
- (id)imageSrc;
- (void)setImageSrc:(id)arg1;
- (id)exposeAppId;
- (void)setExposeAppId:(id)arg1;
- (id)exposePath;
- (void)setExposePath:(id)arg1;
- (id)imageKey;
- (void)setImageKey:(id)arg1;
- (void).cxx_destruct;
@end
