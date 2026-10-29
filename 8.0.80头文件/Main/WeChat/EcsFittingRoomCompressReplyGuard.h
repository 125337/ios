@interface EcsFittingRoomCompressReplyGuard : NSObject
{
    BOOL _replied; // +0x8
    id /* block */ _completion; // +0x10
}
- (id)initWithCompletion:(id /* block */)arg1;
- (BOOL)replyWithResult:(id)arg1 error:(id)arg2;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (BOOL)replied;
- (void)setReplied:(BOOL)arg1;
- (void).cxx_destruct;
@end
