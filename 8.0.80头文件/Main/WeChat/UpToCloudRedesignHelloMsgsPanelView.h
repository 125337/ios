@interface UpToCloudRedesignHelloMsgsPanelView : RedesignHelloMsgsPanelView
{
    NSString * _nsChatName; // +0x28
    NSString * _nsUserName; // +0x30
    NSMutableArray * _arrBusinessCCardImageView; // +0x38
    MMUIButton * _replyBtn; // +0x40
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
