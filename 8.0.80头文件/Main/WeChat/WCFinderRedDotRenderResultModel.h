@interface WCFinderRedDotRenderResultModel : NSObject
{
    BOOL _overWidth; // +0x8
    unsigned long long _textLineNumber; // +0x10
    unsigned long long _renderType; // +0x18
    double _exceedWidth; // +0x20
    NSMutableString * _reddotShowContent; // +0x28
    UIView * _redDotRenderView; // +0x30
    unsigned long long _remakeFlag; // +0x38
    NSString * _renderStrategyId; // +0x40
}
- (id)init;
- (id)yy_modelDeepCopyWithConfigTag:(id)arg1;
- (id)mutableCopy;
- (unsigned long long)textLineNumber;
- (void)setTextLineNumber:(unsigned long long)arg1;
- (unsigned long long)renderType;
- (void)setRenderType:(unsigned long long)arg1;
- (BOOL)overWidth;
- (void)setOverWidth:(BOOL)arg1;
- (double)exceedWidth;
- (void)setExceedWidth:(double)arg1;
- (id)reddotShowContent;
- (void)setReddotShowContent:(id)arg1;
- (id)redDotRenderView;
- (void)setRedDotRenderView:(id)arg1;
- (unsigned long long)remakeFlag;
- (void)setRemakeFlag:(unsigned long long)arg1;
- (id)renderStrategyId;
- (void)setRenderStrategyId:(id)arg1;
- (void).cxx_destruct;
@end
