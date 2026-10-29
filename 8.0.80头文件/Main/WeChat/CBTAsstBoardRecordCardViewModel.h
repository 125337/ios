@interface CBTAsstBoardRecordCardViewModel : CBTAsstBoardBaseViewModel
{
    NSString * _recordName; // +0x8
    double _duration; // +0x10
    NSString * _meetingId; // +0x18
}
- (id)initWithRecordName:(id)arg1 duration:(double)arg2 delegate:(id)arg3;
- (id)getCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (BOOL)canTransToCommonMsg;
- (BOOL)isSourceFromUser;
- (BOOL)isForwardable;
- (BOOL)shouldShowForwardMenuItem;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (id)durationDisplayString;
- (void)onClickAction;
- (id)recordName;
- (double)duration;
- (id)meetingId;
- (void)setMeetingId:(id)arg1;
- (void).cxx_destruct;
@end
