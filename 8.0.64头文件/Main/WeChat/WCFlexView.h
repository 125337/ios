@interface WCFlexView : UIView
{
    BOOL _updateLock; // +0x8
    NSValue * _preSize; // +0x10
}
- (CGSize)intrinsicContentSize;
- (id)preSize;
- (void)setPreSize:(id)arg1;
- (BOOL)updateLock;
- (void)setUpdateLock:(BOOL)arg1;
- (void).cxx_destruct;
@end
