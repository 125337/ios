@interface QMCReportConfig : NSObject
{
    NSString * _uin; // +0x8
    NSString * _pageFrom; // +0x10
    NSString * _fontSize; // +0x18
    long long _environment; // +0x20
    NSString * _reportURL; // +0x28
    NSString * _cardType; // +0x30
    NSString * _cardMode; // +0x38
    NSString * _mapcardId; // +0x40
    NSString * _requestId; // +0x48
    NSString * _language; // +0x50
    NSString * _appID; // +0x58
}
- (id)uin;
- (void)setUin:(id)arg1;
- (id)pageFrom;
- (void)setPageFrom:(id)arg1;
- (id)fontSize;
- (void)setFontSize:(id)arg1;
- (long long)environment;
- (void)setEnvironment:(long long)arg1;
- (id)reportURL;
- (void)setReportURL:(id)arg1;
- (id)cardType;
- (void)setCardType:(id)arg1;
- (id)cardMode;
- (void)setCardMode:(id)arg1;
- (id)mapcardId;
- (void)setMapcardId:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (void).cxx_destruct;
@end
