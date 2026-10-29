@interface MMSayHelloButton : UIButton <FriendAsistSessionExt>
{
    CPushContact * m_oLastVerifyContact; // +0x8
    NSString * m_nsUsrName; // +0x10
    unsigned int m_uiUnReadCount; // +0x18
    double m_fHeight; // +0x20
}
- (id)initWithUsrName:(id)arg1 Height:(double)arg2;
- (void)UpdateView;
- (unsigned int)GetUnReadCount;
- (void)onFriendAssistUnreadCountChanged;
- (void).cxx_destruct;
@end

