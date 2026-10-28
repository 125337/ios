@interface WCGetMainThreadUtil : NSObject
+ (MatrixStackInfo *)getMainThreadStack;
+ (MatrixStackInfo *)getMainThreadStackAndLockTraceIfWaiting:(void *)arg1;
+ (MatrixStackInfo *)getThreadStack:(void *)arg1 andNextLockOwnerThread:(void *)arg2;
+ (BOOL)isWaitingForUnfairLock:(unsigned long long)arg1;
+ (BOOL)isWaitingForPthreadMutex:(unsigned long long)arg1;
+ (BOOL)isWaitingForDispatchLock:(unsigned long long)arg1;
+ (shared_ptr<MatrixThreadObject>)getUnfairLockOwner:(__darwin_mcontext64 *)arg1;
+ (shared_ptr<MatrixThreadObject>)getPthreadMutexOwner:(__darwin_mcontext64 *)arg1;
+ (shared_ptr<MatrixThreadObject>)getDispatchLockOwner:(__darwin_mcontext64 *)arg1;
@end
