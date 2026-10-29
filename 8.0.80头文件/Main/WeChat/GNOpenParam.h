@interface GNOpenParam : NSObject
{
    BOOL _isHistory; // +0x8
    int _scene; // +0xc
    CContact * _chatRoomContact; // +0x10
    UIViewController * _parentViewController; // +0x18
    GroupNoticeItem * _item; // +0x20
}
- (id)chatRoomContact;
- (void)setChatRoomContact:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)parentViewController;
- (void)setParentViewController:(id)arg1;
- (BOOL)isHistory;
- (void)setIsHistory:(BOOL)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end
