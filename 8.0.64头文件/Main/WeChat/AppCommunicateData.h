@interface AppCommunicateData : NSObject
{
    unsigned long long _command; // +0x8
    NSMutableDictionary * _dictionaryData; // +0x10
    NSData * _fileData; // +0x18
    NSArray * _fileDatas; // +0x20
    BOOL _returnFromApp; // +0x28
    BOOL _isAutoResend; // +0x29
    int _result; // +0x2c
    int _scene; // +0x30
    NSString * _conversationAccount; // +0x38
    NSString * _openID; // +0x40
    NSString * _sdkVer; // +0x48
    NSString * _lang; // +0x50
    NSString * _country; // +0x58
    NSString * _toUserOpenID; // +0x60
    NSString * _universalLink; // +0x68
    NSDictionary * _weixinKeyboardInfo; // +0x70
    unsigned long long _dictionaryDataLen; // +0x78
    unsigned long long _originTextLen; // +0x80
    NSString * _reportAppID; // +0x88
    NSString * _reportCurrentUrl; // +0x90
    NSString * _reportApiName; // +0x98
}
- (id)init;
- (id)initWithPropertList:(id)arg1;
- (id)propertList;
- (unsigned long long)command;
- (id)openID;
- (id)sdkVer;
- (id)lang;
- (id)country;
- (id)description;
- (void)initCommonField:(unsigned long long)arg1;
- (BOOL)MakeCommand:(unsigned long long)arg1;
- (id)authRequest;
- (BOOL)MakeAuthRequest:(id)arg1;
- (BOOL)MakeAuthResp:(id)arg1;
- (BOOL)isTextMessage;
- (id)textMessage;
- (BOOL)MakeTextMessage:(id)arg1;
- (BOOL)MakeTextMessageInState:(id)arg1;
- (id)weAppExtDic;
- (id)messageExtDic;
- (long long)getMaxFileDataLength;
- (long long)getMaxVideoDataLength;
- (BOOL)shouldShareWXMusicObjectAsH5;
- (id)mediaMessage;
- (BOOL)makeStateSceneObject:(id)arg1;
- (BOOL)MakeSceneDataObject:(id)arg1 withText:(id)arg2;
- (BOOL)MakeLinkObject:(id)arg1;
- (BOOL)MakeMediaMessage:(id)arg1;
- (id)sceneMessage;
- (id)mediaInternalMessage;
- (id)mediaInternalMessage:(id *)arg1;
- (BOOL)isSuportWeishiVideo;
- (BOOL)MakeMediaInternalMessage:(id)arg1;
- (BOOL)ReqToData:(id)arg1;
- (BOOL)ReqToData:(id)arg1 withMediaInternalMessage:(id)arg2;
- (BOOL)RespToData:(id)arg1;
- (unsigned long long)appDataLength;
- (id)transferToString;
- (id)fileData;
- (void)setFileData:(id)arg1;
- (id)fileDatas;
- (void)setFileDatas:(id)arg1;
- (id)conversationAccount;
- (void)setConversationAccount:(id)arg1;
- (BOOL)returnFromApp;
- (void)setReturnFromApp:(BOOL)arg1;
- (int)result;
- (void)setResult:(int)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (void)setOpenID:(id)arg1;
- (void)setSdkVer:(id)arg1;
- (void)setLang:(id)arg1;
- (void)setCountry:(id)arg1;
- (id)toUserOpenID;
- (void)setToUserOpenID:(id)arg1;
- (id)universalLink;
- (void)setUniversalLink:(id)arg1;
- (BOOL)isAutoResend;
- (void)setIsAutoResend:(BOOL)arg1;
- (id)weixinKeyboardInfo;
- (void)setWeixinKeyboardInfo:(id)arg1;
- (unsigned long long)dictionaryDataLen;
- (void)setDictionaryDataLen:(unsigned long long)arg1;
- (unsigned long long)originTextLen;
- (void)setOriginTextLen:(unsigned long long)arg1;
- (id)reportAppID;
- (void)setReportAppID:(id)arg1;
- (id)reportCurrentUrl;
- (void)setReportCurrentUrl:(id)arg1;
- (id)reportApiName;
- (void)setReportApiName:(id)arg1;
- (void).cxx_destruct;
@end
