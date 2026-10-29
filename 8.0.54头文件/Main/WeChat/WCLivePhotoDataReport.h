@interface WCLivePhotoDataReport : NSObject
{
    BOOL _isSuccess; // +0x8
    unsigned long long _actionType; // +0x10
    WCMediaItem * _mediaItem; // +0x18
    NSString * _assetID; // +0x20
    long long _liveVideoDurationMs; // +0x28
    long long _actionDurationMs; // +0x30
    NSError * _error; // +0x38
    NSDictionary * _actionInfoDic; // +0x40
}
+ (id)safeJSONStringWithObject:(id)arg1;
+ (id)safeStringWithString:(id)arg1;
- (id)generateLiveReportString;
- (void)doReportLivePhotoData;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (id)assetID;
- (void)setAssetID:(id)arg1;
- (long long)liveVideoDurationMs;
- (void)setLiveVideoDurationMs:(long long)arg1;
- (long long)actionDurationMs;
- (void)setActionDurationMs:(long long)arg1;
- (BOOL)isSuccess;
- (void)setIsSuccess:(BOOL)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (id)actionInfoDic;
- (void)setActionInfoDic:(id)arg1;
- (void).cxx_destruct;
@end

