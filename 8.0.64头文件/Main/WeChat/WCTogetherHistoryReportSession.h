@interface WCTogetherHistoryReportSession : NSObject
{
    BOOL _didShowBadge; // +0x8
    BOOL _didClickFriendsInfo; // +0x9
    unsigned int _sourceScene; // +0xc
    NSMutableDictionary * _operationDictionary; // +0x10
    NSString * _username; // +0x18
    double _historyBrowsingAccumulatedTime; // +0x20
    double _previewBrowsingAccumulatedTime; // +0x28
    double _detailBrowsingAccumulatedTime; // +0x30
    double _historyBrowsingBeginTime; // +0x38
    double _previewBrowsingBeginTime; // +0x40
    double _detailBrowsingBeginTime; // +0x48
}
- (id)initWithUsername:(id)arg1;
- (id)operationDictionary;
- (id)getOrCreateOperationWithDataItem:(id)arg1;
- (id)displayedDataItems;
- (id)displayedDataItemIDs;
- (void)historyWillAppear;
- (void)historyWillDisappear;
- (void)historyWillDisplayDataItem:(id)arg1;
- (void)historyDidEndDisplayingDataItem:(id)arg1;
- (void)previewWillAppearWithDataItem:(id)arg1;
- (void)previewWillDisappearWithDataItem:(id)arg1;
- (void)previewWillDisplayDataItem:(id)arg1;
- (void)detailWillAppearWithDataItem:(id)arg1;
- (void)detailWillDisappearWithDataItem:(id)arg1;
- (void)detailWillDisplayDataItem:(id)arg1;
- (void)didLikeDataItem:(id)arg1;
- (void)didCommentDataItem:(id)arg1;
- (void)didChangeTogetherWithDataItem:(id)arg1;
- (void)endSessionAndReport;
- (id)generateLogString;
- (id)generateVisibleRangeString;
- (id)generateActionStringFromOperation:(id)arg1;
- (id)fixedLogValue:(id)arg1;
- (id)username;
- (unsigned int)sourceScene;
- (void)setSourceScene:(unsigned int)arg1;
- (BOOL)didShowBadge;
- (void)setDidShowBadge:(BOOL)arg1;
- (double)historyBrowsingAccumulatedTime;
- (void)setHistoryBrowsingAccumulatedTime:(double)arg1;
- (double)previewBrowsingAccumulatedTime;
- (void)setPreviewBrowsingAccumulatedTime:(double)arg1;
- (double)detailBrowsingAccumulatedTime;
- (void)setDetailBrowsingAccumulatedTime:(double)arg1;
- (BOOL)didClickFriendsInfo;
- (void)setDidClickFriendsInfo:(BOOL)arg1;
- (double)historyBrowsingBeginTime;
- (void)setHistoryBrowsingBeginTime:(double)arg1;
- (double)previewBrowsingBeginTime;
- (void)setPreviewBrowsingBeginTime:(double)arg1;
- (double)detailBrowsingBeginTime;
- (void)setDetailBrowsingBeginTime:(double)arg1;
- (void).cxx_destruct;
@end
