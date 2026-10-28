@interface WAReportForwardMessageItem : WAReportBaseItem
{
    unsigned int _destinationType; // +0x8
    NSString * _currentTitle; // +0x10
    NSString * _sharePath; // +0x18
    NSString * _shareTitle; // +0x20
    NSString * _shareId; // +0x28
    long long _userCount; // +0x30
    NSString * _userName; // +0x38
    NSString * _webViewUrl; // +0x40
    NSString * _imageURL; // +0x48
    NSString * _messageExtraData; // +0x50
    long long _shareActionType; // +0x58
    long long _shareSourceType; // +0x60
}
- (id)reportString;
- (id)currentTitle;
- (void)setCurrentTitle:(id)arg1;
- (id)sharePath;
- (void)setSharePath:(id)arg1;
- (id)shareTitle;
- (void)setShareTitle:(id)arg1;
- (id)shareId;
- (void)setShareId:(id)arg1;
- (long long)userCount;
- (void)setUserCount:(long long)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)webViewUrl;
- (void)setWebViewUrl:(id)arg1;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (unsigned int)destinationType;
- (void)setDestinationType:(unsigned int)arg1;
- (id)messageExtraData;
- (void)setMessageExtraData:(id)arg1;
- (long long)shareActionType;
- (void)setShareActionType:(long long)arg1;
- (long long)shareSourceType;
- (void)setShareSourceType:(long long)arg1;
- (void).cxx_destruct;
@end
