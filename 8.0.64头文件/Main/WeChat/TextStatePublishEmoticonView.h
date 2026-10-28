@interface TextStatePublishEmoticonView : UIView
{
    CEmoticonWrap * _emoticonWrap; // +0x8
    MMEmoticonView * _emoticonView; // +0x10
    MMUIButton * _deleteButton; // +0x18
    CAShapeLayer * _maskLayer; // +0x20
    id /* block */ _tapDeleteButtonHandler; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setEmoticonWrap:(id)arg1;
- (void)onTapDeleteButton;
- (id)generateBezierPath;
- (id)emoticonWrap;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (id /* block */)tapDeleteButtonHandler;
- (void)setTapDeleteButtonHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
