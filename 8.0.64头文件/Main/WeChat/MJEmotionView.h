@interface MJEmotionView : UIView <EditImageEmotionToolAttrDelegate>
{
    id <MJEmotionViewDelegate> _delegate; // +0x8
    EditImageEmotionToolAttrView * _emotionView; // +0x10
}
- (void)layoutSubviews;
- (void)_addEmotionViewIfNeeded;
- (void)_layoutEmotionView;
- (void)onEmotionToolBarDoneBtnClicked;
- (void)didSelectEmoticonWithWrap:(id)arg1 decodedImage:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)emotionView;
- (void)setEmotionView:(id)arg1;
- (void).cxx_destruct;
@end
