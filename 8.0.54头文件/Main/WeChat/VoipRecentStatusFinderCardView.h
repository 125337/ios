@interface VoipRecentStatusFinderCardView : VoipRecentStatusCardView <RichTextLayoutDelegate, VoipRecentStatusProperties>
{
    BOOL _isSoundBtnHidden; // +0x8
    BOOL _shouldPlaySound; // +0x9
    BOOL _isVisable; // +0xa
    id /* block */ _didClickSoundButtonCallback; // +0x10
    id /* block */ _didSlideImagesCallback; // +0x18
    id /* block */ _didClickOpenPageButtonCallback; // +0x20
    FinderObject * _finderObject; // +0x28
    WCFinderDataItem * _wcFinderDataItem; // +0x30
    UIView<VoipRecentStatusProperties><VoipRecentStatusFinderBackgroundProtocol> * _backgroundView; // +0x38
    UILabel * _publishLabel; // +0x40
    UIImageView * _publishArrowLabel; // +0x48
    RichTextView * _descriptionRichTextView; // +0x50
    UILabel * _positionLabel; // +0x58
    UIView * _openPageHotView; // +0x60
}
- (id)initWithFinderObject:(id)arg1 wcFinderDataItem:(id)arg2;
- (void)layoutSubviews;
- (void)onClickOpenPageHotViewWithSender:(id)arg1;
- (double)preferredHeight;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (void)onTerminate;
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
- (id)finderObject;
- (void)setFinderObject:(id)arg1;
- (id)wcFinderDataItem;
- (void)setWcFinderDataItem:(id)arg1;
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

