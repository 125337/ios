@interface WCProgressViewHideAction : WCProgressViewBaseAction
{
    BOOL _needShowInfo; // +0x20
    long long _currentInfoType; // +0x28
    unsigned long long _currentDelayTimeMS; // +0x30
    id /* block */ _currentCompletion; // +0x38
}
- (id /* block */)progress;
- (id /* block */)block;
- (id /* block */)text;
- (id /* block */)infoType;
- (id /* block */)delayTimeMS;
- (id /* block */)completion;
- (BOOL)needShowInfo;
- (void)setNeedShowInfo:(BOOL)arg1;
- (long long)currentInfoType;
- (void)setCurrentInfoType:(long long)arg1;
- (unsigned long long)currentDelayTimeMS;
- (void)setCurrentDelayTimeMS:(unsigned long long)arg1;
- (id /* block */)currentCompletion;
- (void)setCurrentCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
