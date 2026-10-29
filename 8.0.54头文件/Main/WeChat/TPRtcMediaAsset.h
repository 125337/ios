@interface TPRtcMediaAsset : NSObject <ITPMediaAsset>
{
    TPMediaAssetExtraParam * extraParams; // +0x8
    NSDictionary * httpHeader; // +0x10
    NSString * _streamUrl; // +0x18
    NSString * _serverUrl; // +0x20
    unsigned long long _sdpExchangeType; // +0x28
}
- (long long)mediaType;
- (id)url;
- (id)extraParams;
- (void)setExtraParams:(id)arg1;
- (id)httpHeader;
- (void)setHttpHeader:(id)arg1;
- (id)streamUrl;
- (void)setStreamUrl:(id)arg1;
- (id)serverUrl;
- (void)setServerUrl:(id)arg1;
- (unsigned long long)sdpExchangeType;
- (void)setSdpExchangeType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

