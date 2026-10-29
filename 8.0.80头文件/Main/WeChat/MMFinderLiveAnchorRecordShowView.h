@interface MMFinderLiveAnchorRecordShowView : MMUIView
{
    BOOL _hideOpenGame; // +0x8
    BOOL _isCaptured; // +0x9
    BOOL _hasFirstUpdate; // +0xa
    id /* block */ _actionBlock; // +0x10
    long long _pauseStatus; // +0x18
    UIImageView * _headImageView; // +0x20
    PAGView * _headPagView; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMUIButton * _detailButton; // +0x38
    UIButton * _actionButton; // +0x40
}
- (double)getShowViewHeightWithPauseStatus:(BOOL)arg1;
- (void)updateWithLivePauseStatus:(BOOL)arg1 hideOpenGame:(BOOL)arg2;
- (void)updateHeaImageViewWithLivePauseStatus:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)detailClick;
- (void)actionClick;
- (void)createUI;
- (void)layoutUI;
- (id)headPagView;
- (id)titleLabel;
- (id)detailButton;
- (id)headImageView;
- (id)actionButton;
- (id)getAttributedString;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (BOOL)hideOpenGame;
- (void)setHideOpenGame:(BOOL)arg1;
- (BOOL)isCaptured;
- (void)setIsCaptured:(BOOL)arg1;
- (BOOL)hasFirstUpdate;
- (void)setHasFirstUpdate:(BOOL)arg1;
- (long long)pauseStatus;
- (void)setPauseStatus:(long long)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setHeadPagView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailButton:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end
