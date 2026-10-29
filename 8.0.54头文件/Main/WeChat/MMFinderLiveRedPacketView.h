@interface MMFinderLiveRedPacketView : UIView <MMFinderLiveRedPacketViewModelObserver, PAGViewListener>
{
    BOOL _isStaticStyle; // +0x8
    PAGFile * _appearingPAGFile; // +0x10
    PAGFile * _multiplePAGFile; // +0x18
    PAGFile * _oneRepeatPAGFile; // +0x20
    PAGFile * _multipleRepeatPAGFile; // +0x28
    MMFinderLiveRedPacketViewModel * _viewModel; // +0x30
    unsigned long long _redPacketCount; // +0x38
    PAGView * _redPacketAnimationView; // +0x40
    UILabel * _remainingTimeLabel; // +0x48
    UILabel * _countLabel; // +0x50
    UIButton * _openButton; // +0x58
    UILabel * _staticDescLabel; // +0x60
    UIView * _staticBGView; // +0x68
    CGSize _redPacketSize; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setViewModel:(id)arg1;
- (void)initRedPacketAnimationView;
- (BOOL)redPacketAnimationRepeatEnabled;
- (void)initRemainingTimeLabel;
- (void)initCountLabel;
- (void)initOpenButton;
- (void)openButtonClicked:(id)arg1;
- (void)initStaticViews;
- (id)appearingPAGFile;
- (id)multiplePAGFile;
- (id)pathForOneRepeatPAGFile;
- (id)oneRepeatPAGFile;
- (id)pathForMultipleRepeatPAGFile;
- (id)multipleRepeatPAGFile;
- (void)resetRedPacketSize;
- (void)updateRedPacketSize:(CGSize)arg1;
- (void)animateToNormalStyle;
- (void)animateToStaticStyleWithCompletion:(id /* block */)arg1;
- (void)playAnimationView;
- (double)startProgressForPacketPAG;
- (void)refreshWithRemainingTimeHidden:(BOOL)arg1;
- (void)refreshWithRemainingTimeString:(id)arg1;
- (void)refreshWithCount:(unsigned long long)arg1;
- (void)refreshCountLabelWithCountString:(id)arg1 animated:(BOOL)arg2;
- (void)refreshWithHidden:(BOOL)arg1;
- (void)redPacketViewModel:(id)arg1 remainingTimeStringDidChange:(id)arg2;
- (void)redPacketViewModel:(id)arg1 countDidChange:(unsigned long long)arg2;
- (void)redPacketViewModel:(id)arg1 hiddenDidChange:(BOOL)arg2;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (id)viewModel;
- (unsigned long long)redPacketCount;
- (void)setRedPacketCount:(unsigned long long)arg1;
- (id)redPacketAnimationView;
- (void)setRedPacketAnimationView:(id)arg1;
- (id)remainingTimeLabel;
- (void)setRemainingTimeLabel:(id)arg1;
- (id)countLabel;
- (void)setCountLabel:(id)arg1;
- (id)openButton;
- (void)setOpenButton:(id)arg1;
- (id)staticDescLabel;
- (void)setStaticDescLabel:(id)arg1;
- (id)staticBGView;
- (void)setStaticBGView:(id)arg1;
- (BOOL)isStaticStyle;
- (void)setIsStaticStyle:(BOOL)arg1;
- (CGSize)redPacketSize;
- (void)setRedPacketSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

