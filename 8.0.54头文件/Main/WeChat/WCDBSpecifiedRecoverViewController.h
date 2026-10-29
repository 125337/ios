@interface WCDBSpecifiedRecoverViewController : MMWindowViewController <WCActionSheetDelegate>
{
    MMUILabel * m_tipLabel; // +0x78
    MMUILabel * m_commentLabel; // +0x80
    UIButton * m_button; // +0x88
    UIButton * m_clear; // +0x90
    BOOL m_isRecovering; // +0x98
    NSArray * m_recoverInfo; // +0xa0
    BOOL _isManuallyRestore; // +0xa8
    NSObject<WCDBSpecifiedRecoverViewControllerDelegate> * _delegate; // +0xb0
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)onEnterBackground;
- (void)onDoubleTapThreeTimes;
- (void)onConfirm;
- (void)didRecover:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (void)recover;
- (void)clear;
- (void)askForConfirmClear;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isManuallyRestore;
- (void)setIsManuallyRestore:(BOOL)arg1;
- (void).cxx_destruct;
@end

