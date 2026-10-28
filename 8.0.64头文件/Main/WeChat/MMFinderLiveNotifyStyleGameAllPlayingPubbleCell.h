@interface MMFinderLiveNotifyStyleGameAllPlayingPubbleCell : MMFinderLiveNotifyStyleGameRecommendPubbleCell <MMFinderLiveNumberAnimationLogicObserver>
{
    MMFinderLiveNumberAnimationLogic * _animationLogic; // +0x28
    MMGradientView * _gradientView; // +0x30
    UILabel * _infoPrefixLabel; // +0x38
    UILabel * _infoNumberLabel; // +0x40
    MMGradientView * _infoBackgroundView; // +0x48
    FinderLiveAppMsgGameAllPlayingInfo * _allPlayingInfo; // +0x50
}
+ (id)numberFont;
+ (double)preferDisplayDurationWithComment:(id)arg1;
- (id)initWithCellFrame:(id)arg1;
- (double)infoPrefixLabelRightMargin;
- (void)layoutUI;
- (float)_calculateInfoPrefixLabelMaxWidth;
- (void)didMoveToWindow;
- (void)runCustomEnterAnimation;
- (void)runCustomExitAnimationWithCompletion:(id /* block */)arg1;
- (void)changeNumberWithLogic:(id)arg1;
- (id)getGamePreInjectInfo;
- (id)getGameRecommendReason;
- (long long)getGameRecommendMessageType;
- (id)getGameRecommendReportData;
- (id)animationLogic;
- (void)setAnimationLogic:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)infoPrefixLabel;
- (void)setInfoPrefixLabel:(id)arg1;
- (id)infoNumberLabel;
- (void)setInfoNumberLabel:(id)arg1;
- (id)infoBackgroundView;
- (void)setInfoBackgroundView:(id)arg1;
- (id)allPlayingInfo;
- (void)setAllPlayingInfo:(id)arg1;
- (void).cxx_destruct;
@end
