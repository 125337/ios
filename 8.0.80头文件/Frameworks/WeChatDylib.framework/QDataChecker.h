@interface QDataChecker : NSObject
{
    BOOL _isWorldBingSource; // +0x8
}
- (void)startHandDrawMapVersionDetection;
- (void)startWorldMapVersionDetection;
- (id)appendWorldMapParameterStringFor:(id)arg1;
- (void)handleWorldInfo:(id)arg1;
- (BOOL)isWorldBingSource;
- (void)setIsWorldBingSource:(BOOL)arg1;
@end
