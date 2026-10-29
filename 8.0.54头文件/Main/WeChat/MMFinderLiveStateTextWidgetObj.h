@interface MMFinderLiveStateTextWidgetObj : WCPIPAttachWidgetObj
{
    id /* block */ _getStateTextContainerSizeCallback; // +0x8
    NSString * _text; // +0x10
    WCPIPTextStateDescription * _textDescription; // +0x18
    CGSize _sizeText; // +0x20
}
- (id)initWithTextDescription:(id)arg1 businessId:(id)arg2;
- (void)refresh;
- (id)getSnapshotUserBackImage;
- (id)imageWithTitle:(id)arg1 font:(id)arg2 textColor:(id)arg3 topMargin:(double)arg4 maskColor:(id)arg5;
- (id)getCompositedIconImage:(id)arg1 withMaskImage:(id)arg2;
- (double)iconImageCenterPercent;
- (double)iconImageTop;
- (double)titleTextTop;
- (CGSize)getMainVideoViewSize;
- (id)textFont;
- (id)textColor;
- (id)maskColor;
- (id /* block */)getStateTextContainerSizeCallback;
- (void)setGetStateTextContainerSizeCallback:(id /* block */)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)textDescription;
- (void)setTextDescription:(id)arg1;
- (CGSize)sizeText;
- (void)setSizeText:(CGSize)arg1;
- (void).cxx_destruct;
@end

