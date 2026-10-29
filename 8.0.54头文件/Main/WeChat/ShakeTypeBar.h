@interface ShakeTypeBar : MMUIView
{
    MMUIButton * m_shakePeopleBtn; // +0x8
    MMUIButton * m_shakeMusicBtn; // +0x10
    unsigned int m_curSelectTag; // +0x18
    id <ShakeTypeBarDelegate> m_delegate; // +0x20
    BOOL isShowPeople; // +0x28
    BOOL isShowShakeMusic; // +0x29
    unsigned int uiBtnCount; // +0x2c
    BOOL _isUserClickedBtn; // +0x30
}
- (id)init;
- (void)setShakeType:(long long)arg1;
- (void)updateData;
- (void)updateSelfState;
- (void)initView;
- (id)createBtnWithTitle:(id)arg1 Icon:(id)arg2 HighlightIcon:(id)arg3 Frame:(CGRect)arg4 Action:(SEL)arg5 Tag:(int)arg6;
- (void)allTouchEvent:(id)arg1;
- (void)onBtnClicked:(id)arg1;
- (void)processBtnClicked:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)isUserClickedBtn;
- (void)setIsUserClickedBtn:(BOOL)arg1;
- (void).cxx_destruct;
@end

