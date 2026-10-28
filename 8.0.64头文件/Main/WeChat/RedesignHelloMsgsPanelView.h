@interface RedesignHelloMsgsPanelView : UIView <LongPressMenuViewDelegate>
{
    NSMutableArray * m_arrHellos; // +0x8
    CPushContact * m_lastMsg; // +0x10
    id m_replyTarget; // +0x18
    SEL m_replySel; // +0x20
    id <RedesignHelloMsgsPanelViewDelegate> _delegate; // +0x28
    NSString * _nsChatName; // +0x30
    NSString * _nsUserName; // +0x38
    NSMutableArray * _arrBusinessCCardImageView; // +0x40
    MMUIButton * _replyBtn; // +0x48
}
+ (id)getHelloMsgArrayContacts:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 Contact:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 Contact:(id)arg2 delegate:(id)arg3;
- (void)createHelloMsgPanelView;
- (void)setRelpyTarget:(id)arg1 sel:(SEL)arg2;
- (void)onReply:(id)arg1;
- (void)onShowVerifyImageBtnClick:(id)arg1;
- (void)reloadRedesignHelloMsgsPanelView;
- (id)getArrHellos;
- (BOOL)hasReplyBtn;
- (void)onLongPressMenuViewCopy:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)nsChatName;
- (void)setNsChatName:(id)arg1;
- (id)nsUserName;
- (void)setNsUserName:(id)arg1;
- (id)arrBusinessCCardImageView;
- (void)setArrBusinessCCardImageView:(id)arg1;
- (id)replyBtn;
- (void)setReplyBtn:(id)arg1;
- (void).cxx_destruct;
@end
