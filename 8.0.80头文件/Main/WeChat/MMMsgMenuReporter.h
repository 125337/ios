@interface MMMsgMenuReporter : NSObject <MMMenuControllerExt>
{
    BOOL _hasClicked; // +0x8
    BOOL _isSender; // +0x9
    int _scene; // +0xc
    int _contentType; // +0x10
    int _sourceType; // +0x14
    unsigned int _msgCreateTime; // +0x18
    unsigned int _payInfoStatus; // +0x1c
    unsigned int _specialMsgType; // +0x20
    unsigned int _isFileDownload; // +0x24
    unsigned int _fileSource; // +0x28
    NSString * _chatName; // +0x30
    unsigned long long _enterMenuTime; // +0x38
    long long _messageType; // +0x40
    long long _subMsgType; // +0x48
    long long _messageSvrId; // +0x50
    NSString * _giftOrderId; // +0x58
    NSString * _fileExt; // +0x60
    NSString * _buttonList; // +0x68
    NSString * _mpTitle; // +0x70
    NSString * _mpUrl; // +0x78
    NSString * _fromUsername; // +0x80
}
- (id)init;
- (void)active;
- (void)deactive;
- (void)setCurrentMsgWrap:(id)arg1;
- (void)setSelectContentType:(int)arg1;
- (void)setMenuSourceType:(int)arg1;
- (void)setMenuButtonList:(id)arg1;
- (void)onMenuControllerDidShow;
- (void)onMenuControllerDidShowWithExtraInfo:(id)arg1;
- (void)onMenuControllerDidHide;
- (void)onMenuItemSelected:(id)arg1 index:(long long)arg2;
- (void)onMenuItemSelected:(id)arg1 index:(long long)arg2 extraInfo:(id)arg3;
- (void)reportWithMenuType:(long long)arg1 buttonLoc:(long long)arg2 locationSeq:(long long)arg3;
- (void)sdkReport:(id)arg1 viewId:(id)arg2 info:(id)arg3;
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
- (id)giftOrderId;
- (void)setGiftOrderId:(id)arg1;
- (unsigned int)specialMsgType;
- (void)setSpecialMsgType:(unsigned int)arg1;
- (id)fileExt;
- (void)setFileExt:(id)arg1;
- (id)buttonList;
- (void)setButtonList:(id)arg1;
- (id)mpTitle;
- (void)setMpTitle:(id)arg1;
- (id)mpUrl;
- (void)setMpUrl:(id)arg1;
- (unsigned int)isFileDownload;
- (void)setIsFileDownload:(unsigned int)arg1;
- (unsigned int)fileSource;
- (void)setFileSource:(unsigned int)arg1;
- (id)fromUsername;
- (void)setFromUsername:(id)arg1;
- (void).cxx_destruct;
@end
