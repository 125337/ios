@interface WCPayThirdC2CMessageViewModel : WCPayBaseMessageViewModel
{
    UIImage * _m_miniIconImage; // +0x70
    WCPayNetImageResource * _m_backgroundResource; // +0x78
    WCPayNetImageResource * _m_iconResource; // +0x80
    WCPayNetImageResource * _m_miniIconResource; // +0x88
    BubbleInfo * _thirdC2CBubbleInfo; // +0x90
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)cellViewClassName;
- (id)seperatorColor;
- (id)sceneTextColor;
- (unsigned long long)bubbleType;
- (id)bgBubbleInfo;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (void)setMiniIconImage:(id)arg1;
- (id)sourceIcon;
- (id)titleText;
- (id)titleFont;
- (id)descText;
- (double)iconSize;
- (id)iconName;
- (id)iconUrl;
- (id)backgroundUrl;
- (id)backgroundUrlInDarkmode;
- (id)backgroundName;
- (id)miniIconUrl;
- (id)parseColorFromString:(id)arg1;
- (id)titleColor;
- (id)descColor;
- (id)additionalAccessibilityDescription;
- (id)m_miniIconImage;
- (void)setM_miniIconImage:(id)arg1;
- (id)m_backgroundResource;
- (void)setM_backgroundResource:(id)arg1;
- (id)m_iconResource;
- (void)setM_iconResource:(id)arg1;
- (id)m_miniIconResource;
- (void)setM_miniIconResource:(id)arg1;
- (id)thirdC2CBubbleInfo;
- (void)setThirdC2CBubbleInfo:(id)arg1;
- (void).cxx_destruct;
@end

