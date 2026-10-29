@interface WCFinderMsgBubbleShowStateInfo : NSObject
{
    BOOL _showPrivateMsgBubble; // +0x8
    unsigned long long _unReadMsgCount; // +0x10
    NSArray * _commentFailInfoArray; // +0x18
}
- (unsigned long long)unReadMsgCount;
- (void)setUnReadMsgCount:(unsigned long long)arg1;
- (BOOL)showPrivateMsgBubble;
- (void)setShowPrivateMsgBubble:(BOOL)arg1;
- (id)commentFailInfoArray;
- (void)setCommentFailInfoArray:(id)arg1;
- (void).cxx_destruct;
@end
