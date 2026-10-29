@interface GCTextCellModelEasyConfig : NSObject
{
    BOOL _showHead; // +0x8
    NSString * _text; // +0x10
    GCTextCellLayoutInfo * _layoutInfo; // +0x18
}
- (id)text;
- (void)setText:(id)arg1;
- (id)layoutInfo;
- (void)setLayoutInfo:(id)arg1;
- (BOOL)showHead;
- (void)setShowHead:(BOOL)arg1;
- (void).cxx_destruct;
@end

