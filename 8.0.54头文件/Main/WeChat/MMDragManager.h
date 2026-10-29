@interface MMDragManager : NSObject <UIDragInteractionDelegate>
{
    int _documentType; // +0x8
    UIImage * _dragImage; // +0x10
    NSURL * _dragVideoUrl; // +0x18
    id <MMDragDelegate> _dragDelegate; // +0x20
}
- (id)itemsForSession:(id)arg1;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
- (id)dragImage;
- (void)setDragImage:(id)arg1;
- (id)dragVideoUrl;
- (void)setDragVideoUrl:(id)arg1;
- (int)documentType;
- (void)setDocumentType:(int)arg1;
- (id)dragDelegate;
- (void)setDragDelegate:(id)arg1;
- (void).cxx_destruct;
@end

