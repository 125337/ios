@interface WCTimelineReportLogicController : NSObject <INewMsgNotifyExt, WCTimelineLogicControllerImplProtocol>
{
    double _lastScreenShotContentOffset; // +0x8
    NSString * _inputSessionId; // +0x10
    id <WCTimelineLogicControllerDelegate> _delegate; // +0x18
    WeishiReportItem * _weSeeSession; // +0x20
    WCCommentReport * _commentReport; // +0x28
    WCMicroMerchantReporter * _wsFoldReporter; // +0x30
}
- (id)initWithDelegate:(id)arg1;
- (void)startLogBrowseInfo:(BOOL)arg1;
- (void)logDataItemBrowseCount:(id)arg1;
- (void)recordUserPermission:(id)arg1 blackList:(BOOL)arg2 outsider:(BOOL)arg3;
- (void)logBrowseInfoOnTimelineReturn;
- (void)logOnShowSelfContact;
- (void)logClickNickNameToProfile:(id)arg1 refDataItem:(id)arg2;
- (void)logOnCommentAction:(id)arg1 inputDataItem:(id)arg2 refComment:(id)arg3;
- (void)logOnDidCommitText:(id)arg1 inputDataItem:(id)arg2 refComment:(id)arg3;
- (void)logOnCancelCommitText:(id)arg1 inputDataItem:(id)arg2 refComment:(id)arg3;
- (void)logOnEmoticonCommentAction:(id)arg1 inputDataItem:(id)arg2 refComment:(id)arg3;
- (void)logOnCancelEmoticonCommentAction:(id)arg1 inputDataItem:(id)arg2 refComment:(id)arg3;
- (void)logOnNoMore:(BOOL)arg1;
- (void)onPlayNewMsgNotify;
- (void)beginWeSeeSession:(unsigned int)arg1;
- (void)endWeSeeSessionIfExist:(unsigned int)arg1;
- (id)copyWeeSeeSession;
- (void)beginWeSeeEntranceClickSession:(id)arg1;
- (void)reportWeSeeEntranceClickSession:(unsigned int)arg1;
- (void)endWeSeeSessionOnAlertOpenWeishiEndCancel:(BOOL)arg1 Success:(BOOL)arg2;
- (void)endWeSeeSessionOnAlertOpenWeishiAppStoreEndCancel:(BOOL)arg1 Success:(BOOL)arg2;
- (void)Reset;
- (void)Register;
- (void)asyncLogUnreadMsgCount;
- (void)reportWCOpenIMTimeLineUnInterestActionWithUserName:(id)arg1;
- (void)reportWCOpenIMTimeLineExposeActionWithUserName:(id)arg1;
- (void)reportWCOpenIMTimeLineSetPermissionActionWithUserName:(id)arg1 oldBlackList:(BOOL)arg2;
- (void)reportTopicTagInputMenuItemAction:(long long)arg1 inputDataItem:(id)arg2 refComment:(id)arg3;
- (void)generateInputSessionID;
- (void)recordMicroMerchantFoldItemGenerate:(id)arg1 index:(unsigned int)arg2;
- (void)updateMicroMerchantExposureClickedForFeed:(id)arg1 wsGroup:(id)arg2;
- (void)endRecordBrowseMicroMerchantSession;
- (void)recordExposureFeedIDInBrowseMicroMerchantFold:(id)arg1;
- (void)startWsFoldExposureSession;
- (void)recordOnClickUnfoldTimelineButton;
- (void)recordOnComfirmUnfoldTimeline;
- (double)lastScreenShotContentOffset;
- (void)setLastScreenShotContentOffset:(double)arg1;
- (id)inputSessionId;
- (void)setInputSessionId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)weSeeSession;
- (void)setWeSeeSession:(id)arg1;
- (id)commentReport;
- (void)setCommentReport:(id)arg1;
- (id)wsFoldReporter;
- (void)setWsFoldReporter:(id)arg1;
- (void).cxx_destruct;
@end

