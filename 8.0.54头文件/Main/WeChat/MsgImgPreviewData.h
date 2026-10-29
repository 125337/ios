@interface MsgImgPreviewData : MMObject
{
    CMessageWrap * _msgWrap; // +0x8
    CGRect _nodeViewWindowFrame; // +0x10
    BOOL _isNodeViewVisible; // +0x30
    BOOL _shouldRotateToPortrait; // +0x31
    BOOL _shouldFadeInFadeOut; // +0x32
    UIView * _fromView; // +0x38
}
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (CGRect)nodeViewWindowFrame;
- (void)setNodeViewWindowFrame:(CGRect)arg1;
- (BOOL)isNodeViewVisible;
- (void)setIsNodeViewVisible:(BOOL)arg1;
- (BOOL)shouldRotateToPortrait;
- (void)setShouldRotateToPortrait:(BOOL)arg1;
- (BOOL)shouldFadeInFadeOut;
- (void)setShouldFadeInFadeOut:(BOOL)arg1;
- (id)fromView;
- (void)setFromView:(id)arg1;
- (void).cxx_destruct;
@end

