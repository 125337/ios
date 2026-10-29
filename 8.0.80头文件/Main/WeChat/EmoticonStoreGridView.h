@interface EmoticonStoreGridView : MMImageGridView
{
    NSString * m_emoticonPid; // +0x48
    long long m_currentSelectIndex; // +0x50
    id <EmoticonStoreGridViewDelegate> _delegate; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)handleTap:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (long long)getRealIndexFromPoint:(CGPoint)arg1;
- (id)showPreviewAtIndex:(long long)arg1;
- (id)m_emoticonPid;
- (void)setM_emoticonPid:(id)arg1;
- (long long)m_currentSelectIndex;
- (void)setM_currentSelectIndex:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
