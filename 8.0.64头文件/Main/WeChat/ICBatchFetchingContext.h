@interface ICBatchFetchingContext : NSObject
{
    BOOL _isFetching; // +0x8
}
- (BOOL)shouldFetchBatch:(id)arg1 leadingScreens:(double)arg2 contentOffset:(CGPoint)arg3 velocity:(CGPoint)arg4;
- (BOOL)shouldFetchBatch:(CGRect)arg1 contentSize:(CGSize)arg2 targetOffset:(CGPoint)arg3 contentInset:(UIEdgeInsets)arg4 adjustContentInset:(UIEdgeInsets)arg5 leadingScreens:(double)arg6 visible:(BOOL)arg7 velocity:(CGPoint)arg8;
- (void)beginBatchFetching;
- (void)completeBatchFetching:(BOOL)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
@end
