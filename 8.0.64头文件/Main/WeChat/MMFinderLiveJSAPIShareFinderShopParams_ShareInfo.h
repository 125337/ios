@interface MMFinderLiveJSAPIShareFinderShopParams_ShareInfo : NSObject
{
    BOOL _showQRCodeEntrance; // +0x8
    BOOL _showCopyLinkEntrance; // +0x9
    BOOL _useShopWindowCardV2; // +0xa
    BOOL _showComplaintEntrance; // +0xb
    NSString * _finderUsername; // +0x10
    NSString * _entranceGMsgID; // +0x18
    unsigned long long _showShareType; // +0x20
    NSString * _qrCodeEntranceText; // +0x28
    NSString * _linkContent; // +0x30
    NSString * _liteQuery; // +0x38
    NSString * _liteAppId; // +0x40
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)entranceGMsgID;
- (void)setEntranceGMsgID:(id)arg1;
- (unsigned long long)showShareType;
- (void)setShowShareType:(unsigned long long)arg1;
- (BOOL)showQRCodeEntrance;
- (void)setShowQRCodeEntrance:(BOOL)arg1;
- (id)qrCodeEntranceText;
- (void)setQrCodeEntranceText:(id)arg1;
- (BOOL)showCopyLinkEntrance;
- (void)setShowCopyLinkEntrance:(BOOL)arg1;
- (BOOL)useShopWindowCardV2;
- (void)setUseShopWindowCardV2:(BOOL)arg1;
- (id)linkContent;
- (void)setLinkContent:(id)arg1;
- (BOOL)showComplaintEntrance;
- (void)setShowComplaintEntrance:(BOOL)arg1;
- (id)liteQuery;
- (void)setLiteQuery:(id)arg1;
- (id)liteAppId;
- (void)setLiteAppId:(id)arg1;
- (void).cxx_destruct;
@end
