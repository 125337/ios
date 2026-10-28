@interface AffNewLifeActionManagerImpl : NSObject <AffNewLifeActionManagerBase>
{
    AffNewLifeActionManagerCallback * callback; // +0x8
}
- (void)setCallback:(id)arg1;
- (id)doActionSync:(id)arg1;
- (void)doActionAsync:(int)arg1 req:(id)arg2;
- (void).cxx_destruct;
@end
