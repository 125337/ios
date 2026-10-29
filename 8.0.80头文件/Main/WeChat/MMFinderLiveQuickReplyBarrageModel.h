@interface MMFinderLiveQuickReplyBarrageModel : MMFinderLiveQuickReplyModel
{
    BOOL _selected; // +0x68
    id _payload; // +0x70
    NSString * _leadingImagePath; // +0x78
    NSString * _trailingPAGPath; // +0x80
    MMFinderLiveFloatMsg * _floatMsg; // +0x88
    id /* block */ _onSelectedDidChange; // +0x90
}
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)payload;
- (void)setPayload:(id)arg1;
- (id)leadingImagePath;
- (void)setLeadingImagePath:(id)arg1;
- (id)trailingPAGPath;
- (void)setTrailingPAGPath:(id)arg1;
- (BOOL)selected;
- (id)floatMsg;
- (void)setFloatMsg:(id)arg1;
- (id /* block */)onSelectedDidChange;
- (void)setOnSelectedDidChange:(id /* block */)arg1;
- (void).cxx_destruct;
@end
