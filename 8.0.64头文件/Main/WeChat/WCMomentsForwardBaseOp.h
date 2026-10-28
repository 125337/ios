@interface WCMomentsForwardBaseOp : MMObject <ForwardMessageLogicDelegate>
{
    BOOL _isToCustomContact; // +0x8
    ForwardMessageLogicController * _forwardMsgLogic; // +0x10
    WCDataItem * _dataItem; // +0x18
    WCMediaItem * _mediaItem; // +0x20
    CMessageWrap * _messageWrap; // +0x28
    long long _browseScene; // +0x30
    NSString * _forwardMessageLogicReportUserInfo; // +0x38
    id <WCMomentsForwardBaseOpDelegate> _delegate; // +0x40
}
- (id)initWithDataItem:(id)arg1 mediaItem:(id)arg2;
- (void)dealloc;
- (BOOL)startForwardToCustomContact:(id)arg1;
- (id)genMesssageWrap;
- (id)forwardMsgLogic;
- (id)getToContacts;
- (void)setForwardMessageLogicReportUserInfo:(id)arg1;
- (id)description;
- (id)mediaItemDescription;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (id)dataItem;
- (id)mediaItem;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (BOOL)isToCustomContact;
- (void)setIsToCustomContact:(BOOL)arg1;
- (long long)browseScene;
- (void)setBrowseScene:(long long)arg1;
- (id)forwardMessageLogicReportUserInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
