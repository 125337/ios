@interface MMFinderLiveAnchorTaskCardCell : UICollectionViewCell
{
    BOOL _isMultiStage; // +0x8
    BOOL _isSingleItem; // +0x9
    float _progressPercentage; // +0xc
    id /* block */ _actionBlock; // +0x10
    MMFinderLiveNewAnchorTaskViewModel * _taskVM; // +0x18
    FinderLiveQuestInstance_StageItem_TargetItem * _targetItem; // +0x20
    double _maxTitleWidth; // +0x28
    MMUILabel * _taskLabel; // +0x30
    UIButton * _opButton; // +0x38
    MMUILabel * _opLabel; // +0x40
    MMUIView * _progressView; // +0x48
    MMUIView * _curProgressView; // +0x50
}
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (id)color;
- (void)layoutUI;
- (void)setTargetItem:(id)arg1;
- (void)setTaskVM:(id)arg1;
- (void)setIsMultiStage:(BOOL)arg1;
- (void)setMaxTitleWidth:(double)arg1;
- (void)refreshStatus;
- (void)onButtonClicked;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id)taskVM;
- (id)targetItem;
- (BOOL)isMultiStage;
- (BOOL)isSingleItem;
- (void)setIsSingleItem:(BOOL)arg1;
- (double)maxTitleWidth;
- (float)progressPercentage;
- (void)setProgressPercentage:(float)arg1;
- (id)taskLabel;
- (void)setTaskLabel:(id)arg1;
- (id)opButton;
- (void)setOpButton:(id)arg1;
- (id)opLabel;
- (void)setOpLabel:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)curProgressView;
- (void)setCurProgressView:(id)arg1;
- (void).cxx_destruct;
@end

