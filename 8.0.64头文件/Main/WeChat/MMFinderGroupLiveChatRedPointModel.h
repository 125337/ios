@interface MMFinderGroupLiveChatRedPointModel : NSObject
{
    BOOL _hasUnreadMsg; // +0x8
    MMFinderGroupLiveChatBoxId * _boxId; // +0x10
}
+ (id)genFinderBoxIdAndReaddot:(id)arg1;
- (id)boxId;
- (void)setBoxId:(id)arg1;
- (BOOL)hasUnreadMsg;
- (void)setHasUnreadMsg:(BOOL)arg1;
- (void).cxx_destruct;
@end
