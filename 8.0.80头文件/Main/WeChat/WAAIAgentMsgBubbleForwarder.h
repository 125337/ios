@interface WAAIAgentMsgBubbleForwarder : NSObject <WAMiniToolAgentBubbleViewDelegate>
{
    WAAppTask * _task; // +0x8
}
- (void)miniToolAgentBubbleDidRequestClose:(id)arg1;
- (void)miniToolAgentBubbleDidRequestHideByDragOut:(id)arg1;
- (void)miniToolAgentBubbleDidTap:(id)arg1;
- (void)miniToolAgentBubble:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)miniToolAgentBubble:(id)arg1 didChangeUnreadCount:(unsigned long long)arg2;
- (id)task;
- (void)setTask:(id)arg1;
- (void).cxx_destruct;
@end
