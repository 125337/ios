@interface CBTAsstBoardLegacyRenderNode : NSObject
{
    CBTAsstBoardBaseViewModel * _viewModel; // +0x8
    CBTAsstBoardBaseCellView * _cellView; // +0x10
    NSString * _nativeFamily; // +0x18
    NSString * _probePath; // +0x20
    NSString * _reason; // +0x28
}
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (id)nativeFamily;
- (void)setNativeFamily:(id)arg1;
- (id)probePath;
- (void)setProbePath:(id)arg1;
- (id)reason;
- (void)setReason:(id)arg1;
- (void).cxx_destruct;
@end
