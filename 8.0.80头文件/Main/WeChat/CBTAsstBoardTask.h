@interface CBTAsstBoardTask : NSObject
{
    BOOL _preserveVisiblePositionOnBatchInsert; // +0x8
    unsigned int _opCode; // +0xc
    CBTAsstBoardBaseViewModel * _viewModel; // +0x10
    NSArray * _batchViewModels; // +0x18
    NSArray * _replacementViewModels; // +0x20
    long long _insertIndex; // +0x28
    id /* block */ _completeHandle; // +0x30
    CBTAsstBoardBaseViewModel * _anchorViewModel; // +0x38
    id /* block */ _shouldExecuteBatchInsertion; // +0x40
    id /* block */ _batchInsertionCompletion; // +0x48
}
- (id)initWithViewModel:(id)arg1 opCode:(unsigned int)arg2 compeleteHandle:(id /* block */)arg3;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)batchViewModels;
- (void)setBatchViewModels:(id)arg1;
- (id)replacementViewModels;
- (void)setReplacementViewModels:(id)arg1;
- (unsigned int)opCode;
- (void)setOpCode:(unsigned int)arg1;
- (long long)insertIndex;
- (void)setInsertIndex:(long long)arg1;
- (id /* block */)completeHandle;
- (void)setCompleteHandle:(id /* block */)arg1;
- (id)anchorViewModel;
- (void)setAnchorViewModel:(id)arg1;
- (id /* block */)shouldExecuteBatchInsertion;
- (void)setShouldExecuteBatchInsertion:(id /* block */)arg1;
- (id /* block */)batchInsertionCompletion;
- (void)setBatchInsertionCompletion:(id /* block */)arg1;
- (BOOL)preserveVisiblePositionOnBatchInsert;
- (void)setPreserveVisiblePositionOnBatchInsert:(BOOL)arg1;
- (void).cxx_destruct;
@end
