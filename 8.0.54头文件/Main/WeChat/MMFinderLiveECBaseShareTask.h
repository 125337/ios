@interface MMFinderLiveECBaseShareTask : NSObject
{
    BOOL _showQRCodeEntrance; // +0x8
    BOOL _showCopyLinkEntrance; // +0x9
    BOOL _isGiveGiftEnable; // +0xa
    BOOL _hideGiveGiftEntrance; // +0xb
    BOOL _showComplaintEntrance; // +0xc
    long long _taskType; // +0x10
    NSString * _anchorFinderUsername; // +0x18
    NSString * _lastGMsgID; // +0x20
    long long _showShareType; // +0x28
    NSString * _qrCodeEntranceText; // +0x30
    NSString * _linkContent; // +0x38
    FinderJumpInfo_LiteApp * _complaintApp; // +0x40
    NSString * _appId; // +0x48
    CContact * _contact; // +0x50
    id /* block */ _compleBlock; // +0x58
}
- (void)updateComplaintAppWithLiteAppId:(id)arg1 liteQuery:(id)arg2;
- (long long)taskType;
- (void)setTaskType:(long long)arg1;
- (id)anchorFinderUsername;
- (void)setAnchorFinderUsername:(id)arg1;
- (id)lastGMsgID;
- (void)setLastGMsgID:(id)arg1;
- (long long)showShareType;
- (void)setShowShareType:(long long)arg1;
- (BOOL)showQRCodeEntrance;
- (void)setShowQRCodeEntrance:(BOOL)arg1;
- (id)qrCodeEntranceText;
- (void)setQrCodeEntranceText:(id)arg1;
- (BOOL)showCopyLinkEntrance;
- (void)setShowCopyLinkEntrance:(BOOL)arg1;
- (BOOL)isGiveGiftEnable;
- (void)setIsGiveGiftEnable:(BOOL)arg1;
- (BOOL)hideGiveGiftEntrance;
- (void)setHideGiveGiftEntrance:(BOOL)arg1;
- (id)linkContent;
- (void)setLinkContent:(id)arg1;
- (BOOL)showComplaintEntrance;
- (void)setShowComplaintEntrance:(BOOL)arg1;
- (id)complaintApp;
- (void)setComplaintApp:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id /* block */)compleBlock;
- (void)setCompleBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

