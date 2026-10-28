@interface KindaLiteMgr : NSObject
{
    NSPointerArray * _kindaLiteUseCaseCache; // +0x8
}
- (id)kindaLiteUseCaseCache;
- (id)lastUseCase;
- (void)compactKindaLiteUseCaseCache;
- (id)startKindaLiteUseCase:(id)arg1 data:(id)arg2 callback:(id)arg3;
- (id)findDuplicatePayUseCase:(id)arg1 data:(id)arg2;
- (BOOL)allowsDuplicatePayAfterPaySuccess:(id)arg1 data:(id)arg2;
- (BOOL)isPaying;
- (void)setKindaLiteUseCaseCache:(id)arg1;
- (void).cxx_destruct;
@end
