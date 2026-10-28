@interface MMFinderLiveReserveViewModel : NSObject <WCActionSheetDelegate>
{
    BOOL _canFinished; // +0x8
    BOOL _isActionButtonWorking; // +0x9
    BOOL _isRequesting; // +0xa
    id <MMFinderLiveReserveViewModelObserver> _observer; // +0x10
    UIViewController * _fromVC; // +0x18
    NSString * _actionButtonTitle; // +0x20
    NSString * _reserveSucceededToastContent; // +0x28
    NSString * _reserveFailedToastContent; // +0x30
    NSString * _cancelReserveSucceededToastContent; // +0x38
    NSString * _cancelReserveFailedToastContent; // +0x40
    NSString * _commentScene; // +0x48
    NSString * _sceneNote; // +0x50
    NSDictionary * _noticeBussinessDic; // +0x58
    FinderGetLiveNoticeResponse * _reserveResponse; // +0x60
    unsigned long long _finishStatus; // +0x68
    NSString * _finderUsername; // +0x70
    NSString * _noticeId; // +0x78
    FinderLiveNoticeInfo * _liveNoticeInfo; // +0x80
    FinderContact * _selfContact; // +0x88
    NSString * _gMsgID; // +0x90
    WCFinderLiveAudienceNoticeReporter * _reserveActionReporter; // +0x98
}
- (id)initWithGetLiveNoticeResponse:(id)arg1 gMsgID:(id)arg2;
- (void)loadLiveReserveData;
- (void)initFinishStatusWhenViewAppear;
- (id)noticeId;
- (id)finderUsername;
- (id)liveNoticeInfo;
- (id)headerImageUrl;
- (id)finderName;
- (id)reserveLiveTime;
- (id)reserveIntroduction;
- (unsigned long long)authIconType;
- (unsigned long long)reserveStatus;
- (void)onTappedLiveActionButton;
- (void)requestViewModelFinishedFromView;
- (void)finishedWork;
- (void)reportReserveAction:(long long)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)observer;
- (void)setObserver:(id)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)actionButtonTitle;
- (id)reserveSucceededToastContent;
- (void)setReserveSucceededToastContent:(id)arg1;
- (id)reserveFailedToastContent;
- (void)setReserveFailedToastContent:(id)arg1;
- (id)cancelReserveSucceededToastContent;
- (void)setCancelReserveSucceededToastContent:(id)arg1;
- (id)cancelReserveFailedToastContent;
- (void)setCancelReserveFailedToastContent:(id)arg1;
- (id)commentScene;
- (void)setCommentScene:(id)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (id)noticeBussinessDic;
- (void)setNoticeBussinessDic:(id)arg1;
- (id)reserveResponse;
- (void)setReserveResponse:(id)arg1;
- (unsigned long long)finishStatus;
- (void)setFinishStatus:(unsigned long long)arg1;
- (void)setFinderUsername:(id)arg1;
- (void)setNoticeId:(id)arg1;
- (void)setLiveNoticeInfo:(id)arg1;
- (id)selfContact;
- (void)setSelfContact:(id)arg1;
- (BOOL)canFinished;
- (void)setCanFinished:(BOOL)arg1;
- (BOOL)isActionButtonWorking;
- (void)setIsActionButtonWorking:(BOOL)arg1;
- (BOOL)isRequesting;
- (void)setIsRequesting:(BOOL)arg1;
- (id)gMsgID;
- (void)setGMsgID:(id)arg1;
- (id)reserveActionReporter;
- (void)setReserveActionReporter:(id)arg1;
- (void).cxx_destruct;
@end
