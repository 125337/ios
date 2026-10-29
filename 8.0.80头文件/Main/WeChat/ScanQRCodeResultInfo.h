@interface ScanQRCodeResultInfo : MMObject <PBCoding>
{
    BOOL _scanFromAlbum; // +0x8
    BOOL _scanFromCombineTab; // +0x9
    BOOL _hasProceed; // +0xa
    unsigned int _timeStamp; // +0xc
    unsigned int _fromScene; // +0x10
    int _codeVersion; // +0x14
    int _networkType; // +0x18
    NSString * _resultString; // +0x20
    NSString * _type; // +0x28
}
+ (void)PBArrayAdd_resultString;
+ (void)PBArrayAdd_timeStamp;
+ (void)PBArrayAdd_fromScene;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_codeVersion;
+ (void)PBArrayAdd_scanFromAlbum;
+ (void)PBArrayAdd_networkType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)resultString;
- (void)setResultString:(id)arg1;
- (unsigned int)timeStamp;
- (void)setTimeStamp:(unsigned int)arg1;
- (unsigned int)fromScene;
- (void)setFromScene:(unsigned int)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (int)codeVersion;
- (void)setCodeVersion:(int)arg1;
- (BOOL)scanFromAlbum;
- (void)setScanFromAlbum:(BOOL)arg1;
- (int)networkType;
- (void)setNetworkType:(int)arg1;
- (BOOL)scanFromCombineTab;
- (void)setScanFromCombineTab:(BOOL)arg1;
- (BOOL)hasProceed;
- (void)setHasProceed:(BOOL)arg1;
- (void).cxx_destruct;
@end
