@interface JSOpenFinderProductParam : NSObject
{
    NSDictionary * _dictLastAppInfo; // +0x8
    id _referrerData; // +0x10
    id _privateReferrerData; // +0x18
    NSDictionary * _uiParam; // +0x20
    long long _scene; // +0x28
    NSString * _productPathCookies; // +0x30
    NSString * _shareProductAppId; // +0x38
    NSString * _shareProductId; // +0x40
    NSString * _finderUsername; // +0x48
    NSString * _ecSource; // +0x50
    NSDictionary * _productExtraData; // +0x58
    NSString * _entranceGMsgID; // +0x60
}
- (id)dictLastAppInfo;
- (void)setDictLastAppInfo:(id)arg1;
- (id)referrerData;
- (void)setReferrerData:(id)arg1;
- (id)privateReferrerData;
- (void)setPrivateReferrerData:(id)arg1;
- (id)uiParam;
- (void)setUiParam:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)productPathCookies;
- (void)setProductPathCookies:(id)arg1;
- (id)shareProductAppId;
- (void)setShareProductAppId:(id)arg1;
- (id)shareProductId;
- (void)setShareProductId:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)ecSource;
- (void)setEcSource:(id)arg1;
- (id)productExtraData;
- (void)setProductExtraData:(id)arg1;
- (id)entranceGMsgID;
- (void)setEntranceGMsgID:(id)arg1;
- (void).cxx_destruct;
@end
