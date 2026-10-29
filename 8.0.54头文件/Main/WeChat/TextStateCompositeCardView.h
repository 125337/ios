@interface TextStateCompositeCardView : UIView
{
    unsigned int _masks; // +0x8
    TextStateFullScreenCardContentView * _contentView; // +0x10
    TextStateMediaContainerView * _mediaView; // +0x18
    double _topPadding; // +0x20
    double _bottomPadding; // +0x28
    double _forceAspectRatio; // +0x30
    TextStateModel * _textState; // +0x38
    CContact * _contact; // +0x40
    ColorGradientView * _topGradientView; // +0x48
    ColorGradientView * _bottomGradientView; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initStates;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setUsername:(id)arg1 textState:(id)arg2;
- (void)setMasks:(unsigned int)arg1;
- (void)setTopPadding:(double)arg1;
- (void)setBottomPadding:(double)arg1;
- (id)topMaskView;
- (id)bottomMaskView;
- (void)setForceAspectRatio:(double)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)mediaView;
- (void)setMediaView:(id)arg1;
- (unsigned int)masks;
- (double)topPadding;
- (double)bottomPadding;
- (double)forceAspectRatio;
- (id)textState;
- (void)setTextState:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)topGradientView;
- (void)setTopGradientView:(id)arg1;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg1;
- (void).cxx_destruct;
@end

