@interface CBTCoopV2TimelineSearchAsstBoardCellView : CBTCoopV2AsstBoardCellView
{
    BOOL _needsContentUpdate; // +0x8
    UILabel * _titleLabel; // +0x10
    CBTCoopV2TimelineAsstListView * _timelineListView; // +0x18
    UILabel * _allGoneLabel; // +0x20
    UIView * _unavailableFooterView; // +0x28
    UIView * _footerLeftHairline; // +0x30
    UIView * _footerRightHairline; // +0x38
    UILabel * _footerLabel; // +0x40
    double _appliedCellWidth; // +0x48
    NSString * _appliedLayoutFontSignature; // +0x50
}
- (BOOL)coopV2ParticipatesInContentCardClickReport;
- (void)setupCellWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (id)menuAnchorView;
- (unsigned long long)checkboxVerticalAlignment;
- (id)checkboxAlignmentBubbleView;
- (double)checkboxArrowTopMarginInBubbleView;
- (double)checkboxArrowHeight;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (id)currentLayoutFontSignature;
- (double)titleLineHeight;
- (double)listTopOffsetForMarkdownStyle:(BOOL)arg1;
- (BOOL)invalidateTimelineHeightIfFontChangedAndNotify:(BOOL)arg1;
- (void)ensureSubviews;
- (void)ensureUnavailableSubviews;
- (void)layoutContentWithViewModel:(id)arg1;
- (void)layoutUnavailableViewsWithViewModel:(id)arg1 contentHorizontalPadding:(double)arg2 contentWidth:(double)arg3 listTopOffset:(double)arg4 listHeight:(double)arg5 suppressUnavailable:(BOOL)arg6 footerHeight:(double)arg7;
- (void)applyViewModelContentIfNeeded;
- (BOOL)needsBubbleBackground;
- (id)getBubbleColor;
- (BOOL)isBubbleRightAligned;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)timelineListView;
- (void)setTimelineListView:(id)arg1;
- (id)allGoneLabel;
- (void)setAllGoneLabel:(id)arg1;
- (id)unavailableFooterView;
- (void)setUnavailableFooterView:(id)arg1;
- (id)footerLeftHairline;
- (void)setFooterLeftHairline:(id)arg1;
- (id)footerRightHairline;
- (void)setFooterRightHairline:(id)arg1;
- (id)footerLabel;
- (void)setFooterLabel:(id)arg1;
- (BOOL)needsContentUpdate;
- (void)setNeedsContentUpdate:(BOOL)arg1;
- (double)appliedCellWidth;
- (void)setAppliedCellWidth:(double)arg1;
- (id)appliedLayoutFontSignature;
- (void)setAppliedLayoutFontSignature:(id)arg1;
- (void).cxx_destruct;
@end
