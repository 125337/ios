@interface NSOperationQueue (SCAsyncBlockOperation)
+ (id)newSerialMainQueue;
- (id)addOperationWithAsyncBlock:(id /* block */)arg1;
- (void)sc_addOperationWithAsyncBlock:(id /* block */)arg1;
@end
