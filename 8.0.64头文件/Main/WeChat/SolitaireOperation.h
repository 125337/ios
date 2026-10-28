@interface SolitaireOperation : NSOperation
{
    NSString * _nsContent; // +0x8
    id /* block */ _finishBlock; // +0x10
}
- (id)initWithContent:(id)arg1 FinishBlock:(id /* block */)arg2;
- (void)main;
- (BOOL)isHasOccupyKeyword:(id)arg1;
- (id)nsContent;
- (void)setNsContent:(id)arg1;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
