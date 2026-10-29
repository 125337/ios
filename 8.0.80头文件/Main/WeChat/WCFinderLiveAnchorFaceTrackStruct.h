@interface WCFinderLiveAnchorFaceTrackStruct : NSObject
{
    NSString * _finderUserName; // +0x8
    unsigned long long _actionTS; // +0x10
    unsigned long long _liveId; // +0x18
    NSString * _finderFeedId; // +0x20
    unsigned long long _actionType; // +0x28
    NSString * _actionResult; // +0x30
}
- (id)toReport;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (unsigned long long)actionTS;
- (void)setActionTS:(unsigned long long)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)finderFeedId;
- (void)setFinderFeedId:(id)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (id)actionResult;
- (void)setActionResult:(id)arg1;
- (void).cxx_destruct;
@end
