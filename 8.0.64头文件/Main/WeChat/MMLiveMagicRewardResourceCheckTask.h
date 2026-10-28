@interface MMLiveMagicRewardResourceCheckTask : NSObject
{
    BOOL _isChecking; // +0x8
    GiftNewCustomizationMagicRewardResource * _magicRewardResource; // +0x10
    unsigned long long _currResourceState; // +0x18
    NSMutableArray * _callbackObjList; // +0x20
    id /* block */ _resourceStateChangeCallback; // +0x28
}
- (id)initWithMagicRewardResource:(id)arg1;
- (void)addCheckCallback:(id /* block */)arg1 maxWaitTime:(double)arg2;
- (void)invokeCallbacksWithRet:(unsigned long long)arg1;
- (void)updateMagicRewardResourceIfNeeded:(id)arg1;
- (void)reset;
- (void)clearAllCallbacks;
- (void)updateResourceState:(unsigned long long)arg1;
- (BOOL)isFitResourceUrl:(id)arg1 md5:(id)arg2;
- (BOOL)startCheck;
- (BOOL)endCheckWithResult:(unsigned long long)arg1;
- (id)callbackObjList;
- (id)description;
- (id)magicRewardResource;
- (void)setMagicRewardResource:(id)arg1;
- (unsigned long long)currResourceState;
- (void)setCurrResourceState:(unsigned long long)arg1;
- (void)setCallbackObjList:(id)arg1;
- (BOOL)isChecking;
- (void)setIsChecking:(BOOL)arg1;
- (id /* block */)resourceStateChangeCallback;
- (void)setResourceStateChangeCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
