@interface MsgImgFullScreenParam : NSObject
{
    BOOL _soundable; // +0x8
    BOOL _bNeedEdit; // +0x9
    BOOL _isShowSingleMsg; // +0xa
    BOOL _bIsEditMode; // +0xb
    int _openType; // +0xc
    CMessageWrap * _currentMsg; // +0x10
    UIView * _snapshotView; // +0x18
    unsigned long long _eScene; // +0x20
    unsigned long long _transitioningStyle; // +0x28
    id <MsgImgFullScreenViewControllerDelegate> _delegate; // +0x30
    id <MsgImgFullScreenTransitionDelegate> _transitionDelegate; // +0x38
    MsgImgDataLogic * _msgImgDataLogic; // +0x40
    unsigned long long _subScene; // +0x48
    unsigned long long _m_eType; // +0x50
    id /* block */ _customBottomLeftString; // +0x58
    id /* block */ _customBottomLeftActioin; // +0x60
    MiniTaskTransitionContext * _minimizeTranstionContext; // +0x68
    NSMutableDictionary * _sourceReportInfo; // +0x70
    NSDictionary * _historyMenuReportInfo; // +0x78
    CGRect _originFrame; // +0x80
}
- (id)init;
- (id)sourceReportInfo;
- (id)currentMsg;
- (void)setCurrentMsg:(id)arg1;
- (CGRect)originFrame;
- (void)setOriginFrame:(CGRect)arg1;
- (BOOL)soundable;
- (void)setSoundable:(BOOL)arg1;
- (id)snapshotView;
- (void)setSnapshotView:(id)arg1;
- (BOOL)bNeedEdit;
- (void)setBNeedEdit:(BOOL)arg1;
- (BOOL)isShowSingleMsg;
- (void)setIsShowSingleMsg:(BOOL)arg1;
- (unsigned long long)eScene;
- (void)setEScene:(unsigned long long)arg1;
- (unsigned long long)transitioningStyle;
- (void)setTransitioningStyle:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg1;
- (id)msgImgDataLogic;
- (void)setMsgImgDataLogic:(id)arg1;
- (unsigned long long)subScene;
- (void)setSubScene:(unsigned long long)arg1;
- (unsigned long long)m_eType;
- (void)setM_eType:(unsigned long long)arg1;
- (BOOL)bIsEditMode;
- (void)setBIsEditMode:(BOOL)arg1;
- (id /* block */)customBottomLeftString;
- (void)setCustomBottomLeftString:(id /* block */)arg1;
- (id /* block */)customBottomLeftActioin;
- (void)setCustomBottomLeftActioin:(id /* block */)arg1;
- (id)minimizeTranstionContext;
- (void)setMinimizeTranstionContext:(id)arg1;
- (int)openType;
- (void)setOpenType:(int)arg1;
- (void)setSourceReportInfo:(id)arg1;
- (id)historyMenuReportInfo;
- (void)setHistoryMenuReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
