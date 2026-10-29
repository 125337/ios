@interface MJMovieComposingRecognitionGuideView : MMUIView
{
    id <MJMovieComposingRecognitionGuideViewDelegate> _delegate; // +0x8
    unsigned long long _guideScene; // +0x10
    MJGradientView * _backgroundGradientView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _subTitleLabel; // +0x28
    MMUIButton * _confirmButton; // +0x30
    MMUIButton * _cancelButton; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)layoutViews;
- (void)setRecognitionGuideViewTextsWithGuideScene:(unsigned long long)arg1;
- (void)confirmButtonDidTouchUpInside:(id)arg1;
- (void)cancelButtonDidTouchUpInside:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)guideScene;
- (void)setGuideScene:(unsigned long long)arg1;
- (id)backgroundGradientView;
- (void)setBackgroundGradientView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (void).cxx_destruct;
@end
