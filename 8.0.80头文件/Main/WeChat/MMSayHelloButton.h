@interface MMSayHelloButton : UIButton <FriendAsistSessionExt>
{
    CPushContact * m_oLastVerifyContact; // +0x8
    NSString * m_nsUsrName; // +0x10
    unsigned int m_uiUnReadCount; // +0x18
    double m_fHeight; // +0x20
    double m_containerWidth; // +0x28
}
- (id)initWithUsrName:(id)arg1 Height:(double)arg2 containerWidth:(double)arg3;
- (void)UpdateView;
- (void)updateLayoutWithContainerWidth:(double)arg1;
- (unsigned int)GetUnReadCount;
- (void)onFriendAssistUnreadCountChanged;
- (void).cxx_destruct;
@end
