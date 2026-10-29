@interface WCFinderRedDotRenderNodeModel : NSObject
{
    BOOL _renderRet; // +0x8
    BOOL _isTruncated; // +0x9
    double _exceedWidth; // +0x10
    double _leftLine; // +0x18
    unsigned long long _textLineNumber; // +0x20
    UIView * _redDotRenderView; // +0x28
    unsigned long long _remakeFlag; // +0x30
    NSMutableString * _reddotShowContent; // +0x38
}
- (id)init;
- (id)yy_modelDeepCopyWithConfigTag:(id)arg1;
- (id)mutableCopy;
- (BOOL)renderRet;
- (void)setRenderRet:(BOOL)arg1;
- (double)exceedWidth;
- (void)setExceedWidth:(double)arg1;
- (double)leftLine;
- (void)setLeftLine:(double)arg1;
- (BOOL)isTruncated;
- (void)setIsTruncated:(BOOL)arg1;
- (unsigned long long)textLineNumber;
- (void)setTextLineNumber:(unsigned long long)arg1;
- (id)redDotRenderView;
- (void)setRedDotRenderView:(id)arg1;
- (unsigned long long)remakeFlag;
- (void)setRemakeFlag:(unsigned long long)arg1;
- (id)reddotShowContent;
- (void)setReddotShowContent:(id)arg1;
- (void).cxx_destruct;
@end

