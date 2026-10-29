@interface WCPayConfirmTransferResponse : NSObject
{
    long long m_llFee; // +0x8
    NSString * m_nsFeeType; // +0x10
    NSString * m_nsPayer; // +0x18
    NSString * m_nsReceiver; // +0x20
    WCPayRealnameGuideInfo * realnameGuideInfo; // +0x28
    WCPayJumpRemindInfo * _jumpRemindInfo; // +0x30
    InterceptWin * _intercept_win; // +0x38
    InterceptWin * _intercept_win_after; // +0x40
    NSString * _left_button_continue; // +0x48
    NSString * _half_page_info; // +0x50
    OpenMinimchGuide * _open_minimch_guide; // +0x58
}
- (long long)m_llFee;
- (void)setM_llFee:(long long)arg1;
- (id)m_nsFeeType;
- (void)setM_nsFeeType:(id)arg1;
- (id)m_nsPayer;
- (void)setM_nsPayer:(id)arg1;
- (id)m_nsReceiver;
- (void)setM_nsReceiver:(id)arg1;
- (id)realnameGuideInfo;
- (void)setRealnameGuideInfo:(id)arg1;
- (id)jumpRemindInfo;
- (void)setJumpRemindInfo:(id)arg1;
- (id)intercept_win;
- (void)setIntercept_win:(id)arg1;
- (id)intercept_win_after;
- (void)setIntercept_win_after:(id)arg1;
- (id)left_button_continue;
- (void)setLeft_button_continue:(id)arg1;
- (id)half_page_info;
- (void)setHalf_page_info:(id)arg1;
- (id)open_minimch_guide;
- (void)setOpen_minimch_guide:(id)arg1;
- (void).cxx_destruct;
@end

