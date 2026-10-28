@interface MMDropManager : NSObject <ForwardMessageLogicDelegate, UIDropInteractionDelegate>
{
    ForwardMessageLogicController * m_forwardLogicController; // +0x8
    CContact * _m_contact; // +0x10
    id <MMDropDelegate> _dropDelegate; // +0x18
}
- (void)handleDropItems:(id)arg1;
- (BOOL)isValidContactForDrop:(id)arg1;
- (id)getSavePathWithFileSuffix:(id)arg1;
- (void)showConfirmView:(id)arg1;
- (BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)getCurrentViewController;
- (id)imageMsgWith:(id)arg1;
- (id)videoMsgWith:(id)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)dropDelegate;
- (void)setDropDelegate:(id)arg1;
- (void).cxx_destruct;
@end
