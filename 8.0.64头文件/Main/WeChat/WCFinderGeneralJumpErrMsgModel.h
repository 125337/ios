@interface WCFinderGeneralJumpErrMsgModel : NSObject
{
    int _showTimesType; // +0x8
    long long _showType; // +0x10
    long long _linkType; // +0x18
    WCFinderGeneralJumpToastConfig * _toastConfig; // +0x20
    WCFinderGeneralJumpH5Model * _linkH5; // +0x28
    WCFinderLiteAppParams * _linkLiteApp; // +0x30
    NSString * _extInfo; // +0x38
    NSString * _strMd5; // +0x40
    long long _showCount; // +0x48
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)fromJSONStr:(id)arg1;
- (long long)showType;
- (void)setShowType:(long long)arg1;
- (long long)linkType;
- (void)setLinkType:(long long)arg1;
- (id)toastConfig;
- (void)setToastConfig:(id)arg1;
- (id)linkH5;
- (void)setLinkH5:(id)arg1;
- (id)linkLiteApp;
- (void)setLinkLiteApp:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (int)showTimesType;
- (void)setShowTimesType:(int)arg1;
- (id)strMd5;
- (void)setStrMd5:(id)arg1;
- (long long)showCount;
- (void)setShowCount:(long long)arg1;
- (void).cxx_destruct;
@end
