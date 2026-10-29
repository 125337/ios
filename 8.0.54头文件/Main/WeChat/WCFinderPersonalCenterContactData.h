@interface WCFinderPersonalCenterContactData : NSObject
{
    BOOL _showLiveEntranceRedDot; // +0x8
    BOOL _incomeReddot; // +0x9
    BOOL _showLougout; // +0xa
    BOOL _newPrepareStyle; // +0xb
    WCFinderContact * _contact; // +0x10
    PrepareFinder * _prepare; // +0x18
    WCFinderRedDotTipsShowInfo * _settingRedDot; // +0x20
    unsigned long long _cameraRedDotType; // +0x28
    long long _liveBtnState; // +0x30
    WCFinderRedDotTipsShowInfo * _finderMsgBtnRedDotInfo; // +0x38
    WCFinderRedDotTipsShowInfo * _finderMsgBtnRightRedDotInfo; // +0x40
    WCFinderRedDotTipsShowInfo * _memberMsgBtnRedDotInfo; // +0x48
    long long _previewItemCount; // +0x50
    WCFinderContactPreviewData * _previewData; // +0x58
    NSString * _finderPrivateMsgTailText; // +0x60
    WCFinderRedDotTipsShowInfo * _finderPrivateMsgRedDotInfo; // +0x68
    NSString * _creatorMsgTailText; // +0x70
    WCFinderRedDotTipsShowInfo * _creatorMsgRedDotInfo; // +0x78
    id /* block */ _creatorBindReport; // +0x80
    UIView * _reportRootView; // +0x88
}
- (id)contact;
- (void)setContact:(id)arg1;
- (id)prepare;
- (void)setPrepare:(id)arg1;
- (id)settingRedDot;
- (void)setSettingRedDot:(id)arg1;
- (unsigned long long)cameraRedDotType;
- (void)setCameraRedDotType:(unsigned long long)arg1;
- (long long)liveBtnState;
- (void)setLiveBtnState:(long long)arg1;
- (BOOL)showLiveEntranceRedDot;
- (void)setShowLiveEntranceRedDot:(BOOL)arg1;
- (BOOL)incomeReddot;
- (void)setIncomeReddot:(BOOL)arg1;
- (BOOL)showLougout;
- (void)setShowLougout:(BOOL)arg1;
- (id)finderMsgBtnRedDotInfo;
- (void)setFinderMsgBtnRedDotInfo:(id)arg1;
- (id)finderMsgBtnRightRedDotInfo;
- (void)setFinderMsgBtnRightRedDotInfo:(id)arg1;
- (id)memberMsgBtnRedDotInfo;
- (void)setMemberMsgBtnRedDotInfo:(id)arg1;
- (long long)previewItemCount;
- (void)setPreviewItemCount:(long long)arg1;
- (id)previewData;
- (void)setPreviewData:(id)arg1;
- (id)finderPrivateMsgTailText;
- (void)setFinderPrivateMsgTailText:(id)arg1;
- (id)finderPrivateMsgRedDotInfo;
- (void)setFinderPrivateMsgRedDotInfo:(id)arg1;
- (id)creatorMsgTailText;
- (void)setCreatorMsgTailText:(id)arg1;
- (id)creatorMsgRedDotInfo;
- (void)setCreatorMsgRedDotInfo:(id)arg1;
- (id /* block */)creatorBindReport;
- (void)setCreatorBindReport:(id /* block */)arg1;
- (BOOL)newPrepareStyle;
- (void)setNewPrepareStyle:(BOOL)arg1;
- (id)reportRootView;
- (void)setReportRootView:(id)arg1;
- (void).cxx_destruct;
@end

