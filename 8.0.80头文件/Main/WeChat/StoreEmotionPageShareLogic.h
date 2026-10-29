@interface StoreEmotionPageShareLogic : MMObject <WCActionSheetDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate>
{
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x8
    NSString * m_titleForShareToTimeline; // +0x10
    NSString * m_titleForShareToFriend; // +0x18
    NSString * m_desc; // +0x20
    NSString * m_iconUrl; // +0x28
    NSString * m_linkUrl; // +0x30
    unsigned long long m_thirdPartyLinkID; // +0x38
    unsigned long long m_thirdPartyLinkStatus; // +0x40
    NSString * m_thirdPartyLinkReportInfo; // +0x48
    long long m_shareToTimelineType; // +0x50
    long long m_shareToFriendType; // +0x58
    NSString * m_pid; // +0x60
    unsigned int m_packType; // +0x68
    unsigned int m_designerUin; // +0x6c
    NSString * m_designerName; // +0x70
    EmotionBannerSet * m_bannerSet; // +0x78
    CContact * m_shareContact; // +0x80
    id <StoreEmotionPageShareLogicDelegate> _delegate; // +0x88
    WCDataItem * _timeLineDataItem; // +0x90
}
+ (id)genProductIdFromTimelineUserData:(id)arg1;
- (id)init;
- (id)initWithStoreItem:(id)arg1;
- (id)initWithPersonalDesigner:(id)arg1 Desc:(id)arg2 OldRedirectUrl:(id)arg3;
- (id)initWithBannerSet:(id)arg1;
- (void)showActionSheetWithSender:(id)arg1;
- (void)shareToTimeline;
- (id)genUploadTask;
- (id)genTimelineUserData;
- (void)shareToFriend;
- (id)genShareFriendMessage;
- (void)showLoadingWithMsg:(id)arg1;
- (void)ReportShareAction:(unsigned long long)arg1 Pid:(id)arg2 thirdPartyLinkID:(unsigned long long)arg3 thirdPartyLinkStatus:(unsigned long long)arg4 thirdPartyLinkReportInfo:(id)arg5;
- (void)ReportShareAction:(unsigned long long)arg1 DesignerUin:(unsigned int)arg2;
- (void)ReportShareAction:(unsigned long long)arg1 BannerSet:(id)arg2 Type:(unsigned long long)arg3;
- (void)ReportShareAction:(unsigned long long)arg1 Type:(unsigned long long)arg2 Pid:(id)arg3 SetCellID:(unsigned long long)arg4 SetName:(id)arg5 thirdPartyLinkID:(unsigned long long)arg6 thirdPartyLinkStatus:(unsigned long long)arg7 thirdPartyLinkReportInfo:(id)arg8;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)timeLineDataItem;
- (void)setTimeLineDataItem:(id)arg1;
- (void).cxx_destruct;
@end
