@interface WCFinderBriefIntroCradView : WCFinderCommonBottomBannerView <WCFinderFeedImageCDNViewDelegate, WCFinderProgressBarDelegate>
{
    id <WCFinderBriefIntroCradViewDelegate> _m_delegate; // +0x8
    UILabel * _nextTipsLabel; // +0x10
    UIButton * _closeBtn; // +0x18
    WCFinderFeedImageCDNView * _coverImageView; // +0x20
    RichTextView * _contentTextView; // +0x28
    WCFinderNormalProgressBar * _progressBar; // +0x30
    WCFinderDataItem * _dataItem; // +0x38
    double _countdownDuration; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 contentVM:(id)arg2 countdownDuration:(double)arg3;
- (id)nextTipsLabel;
- (id)closeBtn;
- (id)coverImageView;
- (id)contentTextView;
- (id)progressBar;
- (void)setUpUIWithDataItem:(id)arg1 countdownDuration:(double)arg2;
- (void)progressBarHidden:(BOOL)arg1 resumeProgress:(BOOL)arg2;
- (void)onClickCloseBtn;
- (void)onClickCardAction;
- (void)onPlayerProgressBarCurPlayPrecent:(double)arg1 dragState:(unsigned long long)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void)setNextTipsLabel:(id)arg1;
- (void)setCloseBtn:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setContentTextView:(id)arg1;
- (void)setProgressBar:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (double)countdownDuration;
- (void)setCountdownDuration:(double)arg1;
- (void).cxx_destruct;
@end

