@interface WCFinderUploadPostProjectCgiParams : NSObject
{
    NSString * _postUserName; // +0x8
    NSString * _clientId; // +0x10
    NSData * _timelineInfo; // +0x18
    NSData * _assetInfoChain; // +0x20
}
- (id)postUserName;
- (void)setPostUserName:(id)arg1;
- (id)clientId;
- (void)setClientId:(id)arg1;
- (id)timelineInfo;
- (void)setTimelineInfo:(id)arg1;
- (id)assetInfoChain;
- (void)setAssetInfoChain:(id)arg1;
- (void).cxx_destruct;
@end
