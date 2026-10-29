@interface MMEmoticonSearchPageContext : MMEmoticonLiteAppPageContextBase
{
    id /* block */ _liteAppConfigBlock; // +0x8
    NSString * _toSendText; // +0x10
    unsigned long long _scene; // +0x18
    NSString * _chatId; // +0x20
    NSString * _md5; // +0x28
    NSString * _encryptUrl; // +0x30
    NSString * _aesKey; // +0x38
    NSString * _draggableSheetHeight; // +0x40
    NSString * _sessionId; // +0x48
}
- (id)pageCreator;
- (BOOL)isValid;
- (BOOL)allowsInEmoticonLimited;
- (double)portraitHeightPercent;
- (double)landscapeHeightPercent;
- (id /* block */)liteAppConfigBlock;
- (void)setLiteAppConfigBlock:(id /* block */)arg1;
- (id)toSendText;
- (void)setToSendText:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)chatId;
- (void)setChatId:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)encryptUrl;
- (void)setEncryptUrl:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)draggableSheetHeight;
- (void)setDraggableSheetHeight:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
