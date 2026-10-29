@interface MMFinderLiveQuickReplyBarrageModel : MMFinderLiveQuickReplyModel
{
    BOOL _selected; // +0x50
    id _payload; // +0x58
    NSString * _leadingImagePath; // +0x60
    NSString * _trailingPAGPath; // +0x68
    MMFinderLiveFloatMsg * _floatMsg; // +0x70
    id /* block */ _onSelectedDidChange; // +0x78
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

