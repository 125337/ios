@interface KindaAlertDialog : NSObject <MMTipsViewControllerDelegate, WCPayWebImageViewDelegate, MMKAlertDialog>
{
    UIButton * _leftBtn; // +0x8
    UIButton * _rightBtn; // +0x10
    NSMutableArray * _m_buttonEventArray; // +0x18
    NSMutableArray * _m_buttonEvents; // +0x20
    long long _contentTextAlign; // +0x28
    MMTipsViewController * _m_tipsVC; // +0x30
}
- (id)init;
- (void)showTipsImpl:(id)arg1 content:(id)arg2 button:(id)arg3 event:(id)arg4;
- (void)showTipsImpl:(id)arg1 content:(id)arg2 leftbutton:(id)arg3 rightbutton:(id)arg4 leftEvent:(id)arg5 rightEvent:(id)arg6;
- (void)showTipsImpl:(id)arg1 content:(id)arg2 leftbutton:(id)arg3 middlebutton:(id)arg4 rightbutton:(id)arg5 leftEvent:(id)arg6 middleEvent:(id)arg7 rightEvent:(id)arg8;
- (void)showTipsImpl:(id)arg1 image:(id)arg2 content:(id)arg3 button:(id)arg4 event:(id)arg5;
- (void)showTipsImpl:(id)arg1 kImage:(id)arg2 content:(id)arg3 button:(id)arg4 event:(id)arg5;
- (void)showTipsImpl:(id)arg1 image:(id)arg2 content:(id)arg3 leftbutton:(id)arg4 rightbutton:(id)arg5 leftEvent:(id)arg6 rightEvent:(id)arg7;
- (void)showTipsImpl:(id)arg1 kImage:(id)arg2 content:(id)arg3 leftbutton:(id)arg4 rightbutton:(id)arg5 leftEvent:(id)arg6 rightEvent:(id)arg7;
- (void)showImpl:(id)arg1 content:(id)arg2 button:(id)arg3 event:(id)arg4;
- (void)showImpl:(id)arg1 content:(id)arg2 leftbutton:(id)arg3 rightbutton:(id)arg4 leftEvent:(id)arg5 rightEvent:(id)arg6;
- (void)showImpl:(id)arg1 content:(id)arg2 leftbutton:(id)arg3 middlebutton:(id)arg4 rightbutton:(id)arg5 leftEvent:(id)arg6 middleEvent:(id)arg7 rightEvent:(id)arg8;
- (void)showTouchIdAuthViewImpl:(id)arg1 successEvent:(id)arg2 failEvent:(id)arg3 cancelEvent:(id)arg4 forgetPwdEvent:(id)arg5;
- (void)showInputAlertImpl:(id)arg1 content:(id)arg2 tips:(id)arg3 maxLength:(int)arg4 ok:(id)arg5 cancel:(id)arg6;
- (void)showImpl:(id)arg1 contentView:(id)arg2 leftbutton:(id)arg3 rightbutton:(id)arg4 leftEvent:(id)arg5 rightEvent:(id)arg6;
- (void)setContentAlign:(long long)arg1;
- (void)dismiss;
- (void)insideShowTipsImpl:(id)arg1 content:(id)arg2 buttonWordings:(id)arg3 buttonEvents:(id)arg4;
- (void)insideShowTipsImpl:(id)arg1 image:(id)arg2 content:(id)arg3 buttonWordings:(id)arg4 buttonEvents:(id)arg5;
- (void)insideShowImpl:(id)arg1 content:(id)arg2 buttonWordings:(id)arg3 buttonEvents:(id)arg4;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (id)m_buttonEventArray;
- (void)setM_buttonEventArray:(id)arg1;
- (id)m_buttonEvents;
- (void)setM_buttonEvents:(id)arg1;
- (long long)contentTextAlign;
- (void)setContentTextAlign:(long long)arg1;
- (id)m_tipsVC;
- (void)setM_tipsVC:(id)arg1;
- (void).cxx_destruct;
@end

