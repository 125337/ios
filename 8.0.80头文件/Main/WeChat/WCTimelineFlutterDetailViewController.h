@interface WCTimelineFlutterDetailViewController : MMFlutterViewController <SNSPluginDelegate>
{
    BOOL _forbidComment; // +0x70
    BOOL _canShowInvisibleTipsView; // +0x71
    MMFlutterInstance * _instance; // +0x78
    WCDataItem * _dataItem; // +0x80
    long long _tipType; // +0x88
    WCCommentItem * _failedComment; // +0x90
}
- (id)initWithDataItem:(id)arg1;
- (id)initWithDataItem:(id)arg1 forbidComment:(BOOL)arg2;
- (id)initWithDataItem:(id)arg1 forbidComment:(BOOL)arg2 tipType:(long long)arg3 failedComment:(id)arg4 canShowInvisibleTipsView:(BOOL)arg5;
- (id)initWithDataItem:(id)arg1 forbidComment:(BOOL)arg2 tipType:(long long)arg3 failedComment:(id)arg4 canShowInvisibleTipsView:(BOOL)arg5 targetComment:(id)arg6;
- (id)initWithDataItem:(id)arg1 forbidComment:(BOOL)arg2 tipType:(long long)arg3 failedComment:(id)arg4 canShowInvisibleTipsView:(BOOL)arg5 targetComment:(id)arg6 reportContext:(id)arg7;
- (id)getPluginTopViewController;
- (id)instance;
- (void)setInstance:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)forbidComment;
- (void)setForbidComment:(BOOL)arg1;
- (long long)tipType;
- (void)setTipType:(long long)arg1;
- (id)failedComment;
- (void)setFailedComment:(id)arg1;
- (BOOL)canShowInvisibleTipsView;
- (void)setCanShowInvisibleTipsView:(BOOL)arg1;
- (void).cxx_destruct;
@end
