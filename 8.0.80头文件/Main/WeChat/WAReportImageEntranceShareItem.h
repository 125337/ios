@interface WAReportImageEntranceShareItem : WAReportBaseItem
{
    int _isSuccess; // +0x8
    int _chatType; // +0xc
    int _chatRoomUserCount; // +0x10
    unsigned int _shareTimeStamp; // +0x14
    NSString * _userName; // +0x18
    NSString * _chatName; // +0x20
    NSString * _chatSessionId; // +0x28
    NSString * _currentAppId; // +0x30
    NSString * _currentPath; // +0x38
    NSString * _imageSrc; // +0x40
    NSString * _shareAppId; // +0x48
    NSString * _sharePath; // +0x50
    NSString * _imageKey; // +0x58
}
- (int)reportID;
- (id)reportString;
- (id)userName;
- (void)setUserName:(id)arg1;
- (int)isSuccess;
- (void)setIsSuccess:(int)arg1;
- (int)chatType;
- (void)setChatType:(int)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (int)chatRoomUserCount;
- (void)setChatRoomUserCount:(int)arg1;
- (id)chatSessionId;
- (void)setChatSessionId:(id)arg1;
- (unsigned int)shareTimeStamp;
- (void)setShareTimeStamp:(unsigned int)arg1;
- (id)currentAppId;
- (void)setCurrentAppId:(id)arg1;
- (id)currentPath;
- (void)setCurrentPath:(id)arg1;
- (id)imageSrc;
- (void)setImageSrc:(id)arg1;
- (id)shareAppId;
- (void)setShareAppId:(id)arg1;
- (id)sharePath;
- (void)setSharePath:(id)arg1;
- (id)imageKey;
- (void)setImageKey:(id)arg1;
- (void).cxx_destruct;
@end
