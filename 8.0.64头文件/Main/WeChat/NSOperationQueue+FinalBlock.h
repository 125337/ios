@interface NSOperationQueue (FinalBlock)
+ (id)newSerialMainQueue;
- (id)addOperationWithAsyncBlock:(id /* block */)arg1;
- (void)sc_addOperationWithAsyncBlock:(id /* block */)arg1;
- (id)addOperationWithMainBlock:(id /* block */)arg1 finalBlock:(id /* block */)arg2;
@end
