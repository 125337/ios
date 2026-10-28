@interface EmoticonViewWithPreview : MMUIView
{
    id <EmoticonViewWithPreviewDelegate> m_delegate; // +0x8
    BOOL m_isPreviewing; // +0x10
    MMEmoticonView * m_emoticonPreview; // +0x18
    YYAsyncImageView * m_emoticonView; // +0x20
    CEmoticonWrap * m_wrap; // +0x28
    UIImageView * m_imageFocusView; // +0x30
    ThreeWayExpandImageView * m_emoticonPreviewBack; // +0x38
    UILabel * m_desLabel; // +0x40
    UILabel * m_previewDesLabel; // +0x48
    double _leftEdge; // +0x50
    CGSize m_previewSize; // +0x58
    CGPoint _previewOffset; // +0x68
}
- (void)setDelegate:(id)arg1;
- (void)setPreviewSize:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1 EmoticonWrap:(id)arg2;
- (void)initView;
- (id)m_imageFocusView;
- (id)m_emoticonPreviewBack;
- (id)m_emoticonPreview;
- (id)m_previewDesLabel;
- (void)updateDesc;
- (void)updateDescFromServerWithDelay;
- (void)updateDesc:(BOOL)arg1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)changeWrap:(id)arg1 needShowDesc:(BOOL)arg2;
- (void)changeWrap:(id)arg1 needShowDesc:(BOOL)arg2 shouldGetRemoteDesc:(BOOL)arg3;
- (void)showPreview;
- (void)hidePreview;
- (void)showFocusView;
- (void)hideFocusView;
- (void)adjustPreviewFrame;
- (void)setM_emoticonPreview:(id)arg1;
- (id)m_emoticonView;
- (void)setM_emoticonView:(id)arg1;
- (id)m_wrap;
- (void)setM_wrap:(id)arg1;
- (void)setM_imageFocusView:(id)arg1;
- (void)setM_emoticonPreviewBack:(id)arg1;
- (CGSize)m_previewSize;
- (void)setM_previewSize:(CGSize)arg1;
- (BOOL)m_isPreviewing;
- (void)setM_isPreviewing:(BOOL)arg1;
- (id)m_desLabel;
- (void)setM_desLabel:(id)arg1;
- (void)setM_previewDesLabel:(id)arg1;
- (double)leftEdge;
- (void)setLeftEdge:(double)arg1;
- (CGPoint)previewOffset;
- (void)setPreviewOffset:(CGPoint)arg1;
- (void).cxx_destruct;
@end
