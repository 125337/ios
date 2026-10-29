@interface VoipSnsDataSource : NSObject <WCFacadeExt>
{
    BOOL _noMoreData; // +0x8
    unsigned int _timeLimit; // +0xc
    NSString * _username; // +0x10
    id /* block */ _resolver; // +0x18
}
- (void)registerExtension;
- (void)unregisterExtension;
- (void)fetchData;
- (void)fetchMoreData;
- (void)handleData:(id)arg1;
- (id)getLatestSnsInfo:(id)arg1 timeLimit:(unsigned long long)arg2;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)dealloc;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)timeLimit;
- (void)setTimeLimit:(unsigned int)arg1;
- (BOOL)noMoreData;
- (void)setNoMoreData:(BOOL)arg1;
- (id /* block */)resolver;
- (void)setResolver:(id /* block */)arg1;
- (void).cxx_destruct;
@end

