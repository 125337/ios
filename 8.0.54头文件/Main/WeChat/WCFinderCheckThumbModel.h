@interface WCFinderCheckThumbModel : NSObject
{
    BOOL _useAlgorithmCover; // +0x8
    UIImage * _image; // +0x10
    unsigned long long _selectTimeStamp; // +0x18
    unsigned long long _calcBlackFrameDuration; // +0x20
}
- (id)yy_modelDeepCopyWithConfigTag:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (unsigned long long)selectTimeStamp;
- (void)setSelectTimeStamp:(unsigned long long)arg1;
- (unsigned long long)calcBlackFrameDuration;
- (void)setCalcBlackFrameDuration:(unsigned long long)arg1;
- (BOOL)useAlgorithmCover;
- (void)setUseAlgorithmCover:(BOOL)arg1;
- (void).cxx_destruct;
@end

