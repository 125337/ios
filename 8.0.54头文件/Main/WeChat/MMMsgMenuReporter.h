@interface MMMsgMenuReporter : NSObject <MMMenuControllerExt>
{
    BOOL _hasClicked; // +0x8
    BOOL _isSender; // +0x9
    int _scene; // +0xc
    int _contentType; // +0x10
    int _sourceType; // +0x14
    unsigned int _msgCreateTime; // +0x18
    unsigned int _payInfoStatus; // +0x1c
    NSString * _chatName; // +0x20
    unsigned long long _enterMenuTime; // +0x28
    long long _messageType; // +0x30
    long long _subMsgType; // +0x38
    long long _messageSvrId; // +0x40
}
- (id)init;
- (void)active;
- (void)deactive;
- (void)setCurrentMsgWrap:(id)arg1;
- (void)setSelectContentType:(int)arg1;
- (void)setMenuSourceType:(int)arg1;
- (void)onMenuControllerDidShow;
- (void)onMenuControllerDidHide;
- (void)onMenuItemSelected:(id)arg1 index:(long long)arg2;
- (void)reportWithMenuType:(long long)arg1 buttonLoc:(long long)arg2 locationSeq:(long long)arg3;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned long long)enterMenuTime;
- (void)setEnterMenuTime:(unsigned long long)arg1;
- (BOOL)hasClicked;
- (void)setHasClicked:(BOOL)arg1;
- (long long)messageType;
- (void)setMessageType:(long long)arg1;
- (long long)subMsgType;
- (void)setSubMsgType:(long long)arg1;
- (long long)messageSvrId;
- (void)setMessageSvrId:(long long)arg1;
- (int)contentType;
- (void)setContentType:(int)arg1;
- (int)sourceType;
- (void)setSourceType:(int)arg1;
- (BOOL)isSender;
- (void)setIsSender:(BOOL)arg1;
- (unsigned int)msgCreateTime;
- (void)setMsgCreateTime:(unsigned int)arg1;
- (unsigned int)payInfoStatus;
- (void)setPayInfoStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end

