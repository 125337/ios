@interface MsgImgSearchPhashMemItem : NSObject
{
    BOOL _isCalcuateOK; // +0x8
    NSString * _phashStr; // +0x10
    NSString * _phashVersion; // +0x18
}
- (BOOL)isCalcuateOK;
- (void)setIsCalcuateOK:(BOOL)arg1;
- (id)phashStr;
- (void)setPhashStr:(id)arg1;
- (id)phashVersion;
- (void)setPhashVersion:(id)arg1;
- (void).cxx_destruct;
@end
