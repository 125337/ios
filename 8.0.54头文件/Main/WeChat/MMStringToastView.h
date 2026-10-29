@interface MMStringToastView : MMUIView
{
    BOOL _isUsingMPUI; // +0x8
    BOOL _noNeedTips; // +0x9
    BOOL _isIndividualWindow; // +0xa
    unsigned int m_dotCountIncresement; // +0xc
    NSMutableArray * m_remainStringList; // +0x10
    UILabel * contentsLabel; // +0x18
    UIImageView * m_backgroundImageView; // +0x20
    MMTimer * m_actingTimer; // +0x28
    NSObject<MMStringToastViewDelegate> * _delegate; // +0x30
    VoIPToast * _curToast; // +0x38
    VoIPToast * _topTips; // +0x40
    UIImageView * _netStatusArrowIconView; // +0x48
    UIView * _backgroundView; // +0x50
}
- (void)layoutSubviews;
- (void)dealloc;
- (void)clearActingTimer;
- (id)initWithFrameAndBackground:(CGRect)arg1;
- (void)initView;
- (id)initWithFrame:(CGRect)arg1;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 type:(unsigned long long)arg3;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 type:(unsigned long long)arg3 isDiff:(BOOL)arg4;
- (void)setTopTipsNil;
- (void)clearCurrentString;
- (void)clearAllString;
- (void)hideToast;
- (void)timerFunction;
- (void)checkAfterDelay;
- (CGRect)getStringRect:(id)arg1 WithWidth:(double)arg2 WithHeight:(double)arg3 type:(unsigned long long)arg4;
- (void)autoUpdateString;
- (void)onTapNetStatusTipView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)content;
- (id)m_remainStringList;
- (void)setM_remainStringList:(id)arg1;
- (id)contentsLabel;
- (void)setContentsLabel:(id)arg1;
- (id)m_backgroundImageView;
- (void)setM_backgroundImageView:(id)arg1;
- (id)m_actingTimer;
- (void)setM_actingTimer:(id)arg1;
- (unsigned int)m_dotCountIncresement;
- (void)setM_dotCountIncresement:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isUsingMPUI;
- (void)setIsUsingMPUI:(BOOL)arg1;
- (id)curToast;
- (void)setCurToast:(id)arg1;
- (id)topTips;
- (void)setTopTips:(id)arg1;
- (BOOL)noNeedTips;
- (void)setNoNeedTips:(BOOL)arg1;
- (id)netStatusArrowIconView;
- (void)setNetStatusArrowIconView:(id)arg1;
- (BOOL)isIndividualWindow;
- (void)setIsIndividualWindow:(BOOL)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void).cxx_destruct;
@end

