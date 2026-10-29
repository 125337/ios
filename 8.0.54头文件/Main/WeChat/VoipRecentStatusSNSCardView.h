@interface VoipRecentStatusSNSCardView : VoipRecentStatusCardView <RichTextLayoutDelegate, VoipRecentStatusProperties>
{
    BOOL _isSoundBtnHidden; // +0x8
    BOOL _shouldPlaySound; // +0x9
    BOOL _isVisable; // +0xa
    id /* block */ _didClickSoundButtonCallback; // +0x10
    id /* block */ _didSlideImagesCallback; // +0x18
    id /* block */ _didClickOpenPageButtonCallback; // +0x20
    WCDataItem * _wcDataItem; // +0x28
    UIView<VoipRecentStatusProperties> * _backgroundView; // +0x30
    UILabel * _publishLabel; // +0x38
    UIImageView * _publishArrowLabel; // +0x40
    RichTextView * _descriptionRichTextView; // +0x48
    UILabel * _positionLabel; // +0x50
    UIView * _openPageHotView; // +0x58
}
- (id)initWithWCDataItem:(id)arg1;
- (void)layoutSubviews;
- (double)preferredHeight;
- (void)onClickOpenPageHotViewWithSender:(id)arg1;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (BOOL)isSoundBtnHidden;
- (void)setIsSoundBtnHidden:(BOOL)arg1;
- (BOOL)shouldPlaySound;
- (void)setShouldPlaySound:(BOOL)arg1;
- (BOOL)isVisable;
- (void)setIsVisable:(BOOL)arg1;
- (id /* block */)didClickSoundButtonCallback;
- (void)setDidClickSoundButtonCallback:(id /* block */)arg1;
- (id /* block */)didSlideImagesCallback;
- (void)setDidSlideImagesCallback:(id /* block */)arg1;
- (id /* block */)didClickOpenPageButtonCallback;
- (void)setDidClickOpenPageButtonCallback:(id /* block */)arg1;
- (id)wcDataItem;
- (void)setWcDataItem:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)publishLabel;
- (void)setPublishLabel:(id)arg1;
- (id)publishArrowLabel;
- (void)setPublishArrowLabel:(id)arg1;
- (id)descriptionRichTextView;
- (void)setDescriptionRichTextView:(id)arg1;
- (id)positionLabel;
- (void)setPositionLabel:(id)arg1;
- (id)openPageHotView;
- (void)setOpenPageHotView:(id)arg1;
- (void).cxx_destruct;
@end

