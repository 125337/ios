@interface CameraScanGoodsExtensionDetectResult : MMObject
{
    BOOL _bHasLocalRet; // +0x8
    int _numNoBoxesCount; // +0xc
    unsigned int _engineTrackRet; // +0x10
}
+ (unsigned int)trackResultFromEngineScanRet:(int)arg1;
- (BOOL)bHasLocalRet;
- (void)setBHasLocalRet:(BOOL)arg1;
- (int)numNoBoxesCount;
- (void)setNumNoBoxesCount:(int)arg1;
- (unsigned int)engineTrackRet;
- (void)setEngineTrackRet:(unsigned int)arg1;
@end

