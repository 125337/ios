@interface TextMessageMagicEmojiHandler : NSObject <_TtP6WeChat10IMEHandler_>
{
    CommonMessageViewModel * _viewModel; // +0x8
    NSDictionary * _extInfo; // +0x10
    CGRect _frame; // +0x18
}
- (id)onGetMetaWithId:(id)arg1 needFrame:(BOOL)arg2;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (CGRect)frame;
- (void)setFrame:(CGRect)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

