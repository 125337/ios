@interface ScanQRCodeLogicParams : NSObject
{
    BOOL _bNeedCameraScan; // +0x8
    BOOL _bShowMyQRCodeBtn; // +0x9
    BOOL _bEnableCombine; // +0xa
    BOOL _bEnableOperatorReporter; // +0xb
    BOOL _wxaIsFromWeAppInnerWebView; // +0xc
    int _codeType; // +0x10
    unsigned int _fromScene; // +0x14
    unsigned long long _mode; // +0x18
    unsigned long long _enterScene; // +0x20
    CameraScannerViewWrapper * _wrapper; // +0x28
    unsigned long long _longPressScanScene; // +0x30
    long long _getA8KeyScene; // +0x38
    NSString * _msgChatName; // +0x40
    NSString * _msgUserName; // +0x48
    NSString * _msgId; // +0x50
    NSNumber * _contentType; // +0x58
    NSNumber * _msgInnerType; // +0x60
    NSString * _wxaPathWithQuery; // +0x68
    NSString * _wxaSessionId; // +0x70
    GetUrlInfoReqSession * _getUrlInfoSessionParam; // +0x78
    OpenIMContactSearchContext * _openIMContext; // +0x80
}
- (id)initWithCodeType:(int)arg1 fromScene:(unsigned int)arg2;
- (id)initWithCodeType:(int)arg1 fromScene:(unsigned int)arg2 enterScene:(unsigned long long)arg3 bNeedCameraScan:(BOOL)arg4 bShowMyQRCodeBtn:(BOOL)arg5 wrapper:(id)arg6;
- (int)codeType;
- (void)setCodeType:(int)arg1;
- (unsigned int)fromScene;
- (void)setFromScene:(unsigned int)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (BOOL)bNeedCameraScan;
- (void)setBNeedCameraScan:(BOOL)arg1;
- (BOOL)bShowMyQRCodeBtn;
- (void)setBShowMyQRCodeBtn:(BOOL)arg1;
- (id)wrapper;
- (void)setWrapper:(id)arg1;
- (unsigned long long)longPressScanScene;
- (void)setLongPressScanScene:(unsigned long long)arg1;
- (BOOL)bEnableCombine;
- (void)setBEnableCombine:(BOOL)arg1;
- (BOOL)bEnableOperatorReporter;
- (void)setBEnableOperatorReporter:(BOOL)arg1;
- (long long)getA8KeyScene;
- (void)setGetA8KeyScene:(long long)arg1;
- (id)msgChatName;
- (void)setMsgChatName:(id)arg1;
- (id)msgUserName;
- (void)setMsgUserName:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)contentType;
- (void)setContentType:(id)arg1;
- (id)msgInnerType;
- (void)setMsgInnerType:(id)arg1;
- (id)wxaPathWithQuery;
- (void)setWxaPathWithQuery:(id)arg1;
- (id)wxaSessionId;
- (void)setWxaSessionId:(id)arg1;
- (BOOL)wxaIsFromWeAppInnerWebView;
- (void)setWxaIsFromWeAppInnerWebView:(BOOL)arg1;
- (id)getUrlInfoSessionParam;
- (void)setGetUrlInfoSessionParam:(id)arg1;
- (id)openIMContext;
- (void)setOpenIMContext:(id)arg1;
- (void).cxx_destruct;
@end
