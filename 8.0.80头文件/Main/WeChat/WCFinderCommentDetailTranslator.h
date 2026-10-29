@interface WCFinderCommentDetailTranslator : NSObject
{
    BOOL _isFetchingTranslateComment; // +0x8
    id <WCFinderCommentDetailTranslatorDelegate> _delegate; // +0x10
    WCFinderComment * _selectedComment; // +0x18
    NSMutableSet * _visiableComments; // +0x20
    NSMutableArray * _autoTranslateQueue; // +0x28
}
- (BOOL)contentCanBeTranslated:(id)arg1;
- (void)translateContent:(id)arg1 complection:(id /* block */)arg2;
- (void)translateComment:(id)arg1;
- (void)enableAutoTranslateAtSelectedComment:(id)arg1 visibleRows:(id)arg2;
- (void)disabledAutoTranslate;
- (void)prepareDataFor:(id)arg1;
- (void)willDisplayIndexPath:(id)arg1 verticalVelocity:(double)arg2;
- (void)didEndDisplayingIndexPath:(id)arg1;
- (void)prefetchIfNeedWithTargetIndexPath:(id)arg1 visibleRows:(id)arg2;
- (void)prefetchComments:(id)arg1;
- (id)_indexPathsForStartSection:(unsigned long long)arg1 endSection:(unsigned long long)arg2;
- (void)_translateComments:(id)arg1;
- (void)_enqueueWithIndexPaths:(id)arg1;
- (void)_enqueueWithComments:(id)arg1;
- (void)_consumeQueue;
- (BOOL)isInAutoTranslateMode;
- (id)visiableComments;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isFetchingTranslateComment;
- (void)setIsFetchingTranslateComment:(BOOL)arg1;
- (id)selectedComment;
- (void)setSelectedComment:(id)arg1;
- (void)setVisiableComments:(id)arg1;
- (id)autoTranslateQueue;
- (void)setAutoTranslateQueue:(id)arg1;
- (void).cxx_destruct;
@end
