@interface MMFinderLiveNotifyStyleGameGuessLikePubbleCell : MMFinderLiveNotifyStyleGameRecommendPubbleCell
{
    MMGradientView * _gradientView; // +0x28
    UILabel * _recommendReasonLabel; // +0x30
    UILabel * _suffixTextLabel; // +0x38
    FinderLiveAppMsgGameGuessLikeInfo * _gameGuessLikeInfo; // +0x40
}
- (id)initWithCellFrame:(id)arg1;
- (double)recommendReasonRightMargin;
- (float)_calculateRecommendReasonLabelMaxWidth;
- (void)layoutUI;
- (void)didMoveToWindow;
- (id)getGamePreInjectInfo;
- (id)getGameRecommendReason;
- (long long)getGameRecommendMessageType;
- (id)getGameRecommendReportData;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)recommendReasonLabel;
- (void)setRecommendReasonLabel:(id)arg1;
- (id)suffixTextLabel;
- (void)setSuffixTextLabel:(id)arg1;
- (id)gameGuessLikeInfo;
- (void)setGameGuessLikeInfo:(id)arg1;
- (void).cxx_destruct;
@end
