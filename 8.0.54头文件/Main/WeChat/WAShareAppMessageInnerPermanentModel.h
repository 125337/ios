@interface WAShareAppMessageInnerPermanentModel : NSObject
{
    BOOL _shouldUseUpdatableShare; // +0x8
    BOOL _isToDoMessage; // +0x9
    BOOL _isPrivateMessage; // +0xa
    BOOL _bInSharing; // +0xb
    NSString * _updatableShareTemplateId; // +0x10
    NSString * _toDoActivityId; // +0x18
    NSArray * _participant; // +0x20
}
- (BOOL)shouldUseUpdatableShare;
- (void)setShouldUseUpdatableShare:(BOOL)arg1;
- (id)updatableShareTemplateId;
- (void)setUpdatableShareTemplateId:(id)arg1;
- (BOOL)isToDoMessage;
- (void)setIsToDoMessage:(BOOL)arg1;
- (id)toDoActivityId;
- (void)setToDoActivityId:(id)arg1;
- (BOOL)isPrivateMessage;
- (void)setIsPrivateMessage:(BOOL)arg1;
- (BOOL)bInSharing;
- (void)setBInSharing:(BOOL)arg1;
- (id)participant;
- (void)setParticipant:(id)arg1;
- (void).cxx_destruct;
@end

