@interface GCTwoResultIntegrate : NSObject
{
    BOOL _isCompleted; // +0x8
    int _targetNum; // +0xc
    id _firstResult; // +0x10
    id _secondResult; // +0x18
    id /* block */ _didSelect; // +0x20
    id /* block */ _intergrateBlock; // +0x28
}
- (id)init;
- (void)onFirstResultGet:(id)arg1;
- (void)onSecondResultGet:(id)arg1;
- (void)decreateNumAndCheckCompete;
- (void)onCompleteBlock:(id /* block */)arg1;
- (BOOL)isCompleted;
- (void)setIsCompleted:(BOOL)arg1;
- (id)firstResult;
- (void)setFirstResult:(id)arg1;
- (id)secondResult;
- (void)setSecondResult:(id)arg1;
- (id /* block */)didSelect;
- (void)setDidSelect:(id /* block */)arg1;
- (int)targetNum;
- (void)setTargetNum:(int)arg1;
- (id /* block */)intergrateBlock;
- (void)setIntergrateBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
