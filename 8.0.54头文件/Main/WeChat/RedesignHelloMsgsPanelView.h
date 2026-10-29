@interface RedesignHelloMsgsPanelView : UIView <LongPressMenuViewDelegate>
{
    NSMutableArray * m_arrHellos; // +0x8
    CPushContact * m_lastMsg; // +0x10
    id m_replyTarget; // +0x18
    SEL m_replySel; // +0x20
    NSString * _nsChatName; // +0x28
    NSString * _nsUserName; // +0x30
}
+ (id)getHelloMsgArrayContacts:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 Contact:(id)arg2;
- (void)createHelloMsgPanelView;
- (void)setRelpyTarget:(id)arg1 sel:(SEL)arg2;
- (void)onReply:(id)arg1;
- (void)onLongPressMenuViewCopy:(id)arg1;
- (id)nsChatName;
- (void)setNsChatName:(id)arg1;
- (id)nsUserName;
- (void)setNsUserName:(id)arg1;
- (void).cxx_destruct;
@end

