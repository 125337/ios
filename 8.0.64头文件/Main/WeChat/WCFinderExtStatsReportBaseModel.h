@interface WCFinderExtStatsReportBaseModel : NSObject
{
    int _feedActionType; // +0x8
    int _commentScene; // +0xc
    WCFinderDataItem * _dataItem; // +0x10
    NSArray * _jumpInfoReportList; // +0x18
}
- (id)generateOtherKVsDictionary;
- (int)feedActionType;
- (void)setFeedActionType:(int)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)jumpInfoReportList;
- (void)setJumpInfoReportList:(id)arg1;
- (void).cxx_destruct;
@end
