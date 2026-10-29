@interface MMFinderLiveCommentTableViewCellFrame : MMLiveCommentTableViewCellFrame
{
    long long _layoutResult; // +0x8
    BOOL _isHidePubbleCell; // +0x10
    BOOL _needCustomAppend; // +0x11
    BOOL _isReported; // +0x12
    MMLiveCommentPubbleCellFrame * _pubbleCellFrame; // +0x18
    long long _uiStyle; // +0x20
    NSNumber * _customAppendPubbleCellInitTopValue; // +0x28
    NSNumber * _customAppendDurationValue; // +0x30
    NSNumber * _endDelayDurationValue; // +0x38
    double _displayStartTime; // +0x40
    double _totalDisplayTime; // +0x48
    double _currentCellHeight; // +0x50
    double _cellHeightPortrait; // +0x58
    double _cellHeightLandscape; // +0x60
    double _layoutStandardWidth; // +0x68
    NSString * _layoutIdentityKey; // +0x70
}
- (void)calculateWithCommentInfo:(id)arg1 isLastLine:(BOOL)arg2;
- (void)calculateWithCommentInfo:(id)arg1 isFirstLine:(BOOL)arg2;
- (double)minDisplayDuration;
- (BOOL)isSupportTopDisplayInTable:(id)arg1;
- (void)resetCellFrame;
- (double)cellHeight;
- (double)currCellHeight;
- (void)lazyCommentLayoutCurrent;
- (BOOL)isCurrentLayouted;
- (id)pubbleCellFrame;
- (id)finderPubbleCellFrame;
- (void)setNeedCustomAppend:(BOOL)arg1;
- (void)setPubbleCellFrame:(id)arg1;
- (long long)uiStyle;
- (void)setUiStyle:(long long)arg1;
- (BOOL)isHidePubbleCell;
- (void)setIsHidePubbleCell:(BOOL)arg1;
- (BOOL)needCustomAppend;
- (BOOL)isReported;
- (void)setIsReported:(BOOL)arg1;
- (id)customAppendPubbleCellInitTopValue;
- (void)setCustomAppendPubbleCellInitTopValue:(id)arg1;
- (id)customAppendDurationValue;
- (void)setCustomAppendDurationValue:(id)arg1;
- (id)endDelayDurationValue;
- (void)setEndDelayDurationValue:(id)arg1;
- (double)displayStartTime;
- (void)setDisplayStartTime:(double)arg1;
- (double)totalDisplayTime;
- (void)setTotalDisplayTime:(double)arg1;
- (double)currentCellHeight;
- (void)setCurrentCellHeight:(double)arg1;
- (double)cellHeightPortrait;
- (void)setCellHeightPortrait:(double)arg1;
- (double)cellHeightLandscape;
- (void)setCellHeightLandscape:(double)arg1;
- (double)layoutStandardWidth;
- (void)setLayoutStandardWidth:(double)arg1;
- (id)layoutIdentityKey;
- (void)setLayoutIdentityKey:(id)arg1;
- (void).cxx_destruct;
@end

